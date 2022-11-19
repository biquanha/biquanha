module ysyx_22050019_EXU(
  input [`LEN:0]   alu_sel,
  input [5:0]    mem_r_wdth,
  input [2:0]    mem_w_wdth,

  input [63:0]   op1,
  input [63:0]   op2,

  input [63:0]   ram_waddr_i,
  input          ram_we_i,
  input [63:0]   ram_rdata_i,
  input          ram_re_i,
  
  input           reg_we_i,
  input  [4:0]    reg_waddr_i,
  
  output [63:0]   wdata,
  output          reg_we,
  output [4:0]    waddr,

  output              ram_we      ,
  output  [63:0]      ram_waddr   ,
  output  [63:0]      ram_wdata   ,
  output              ram_re      ,
  output  [63:0]      ram_raddr   ,
  output  [7:0]       wmask
);
wire [63:0] result;
ysyx_22050019_alu alu(
  .op_1(op1),
  .op_2(op2),
  .alu_sel(alu_sel),
  
  .result(result)
);

//mem_r_data_mux
wire [63:0] mem_r_data;
ysyx_22050019_mux #( .NR_KEY(6), .KEY_LEN(6), .DATA_LEN(64)) mem_r_data_mux          //of32,16,8  || 32,16,8
(
  .key         (mem_r_wdth),
  .default_out (ram_rdata_i),
  .lut         ({		 6'b100000,{{32{ram_rdata_i[31]}},ram_rdata_i[31:0]},
                 		 6'b010000,{{48{ram_rdata_i[15]}},ram_rdata_i[15:0]},
				             6'b001000,{{56{ram_rdata_i[7 ]}},ram_rdata_i[7 :0]},
				             6'b000100,{32'b0,ram_rdata_i[31:0]},
				             6'b000010,{48'b0,ram_rdata_i[15:0]},
				             6'b000001,{56'b0,ram_rdata_i[7 :0]}
                    }),        
  .out         (mem_r_data)  
);

//mem_w_wdth_mux
wire [7:0] mem_w_mask;
ysyx_22050019_mux #( .NR_KEY(3), .KEY_LEN(3), .DATA_LEN(8)) mem_w_wdth_mux             //basic-64---8---16---32--
(
  .key         (mem_w_wdth),
  .default_out (8'b11111111),
  .lut         ({		 3'b100,8'b00000001,
                 		 3'b010,8'b00000011,
				             3'b001,8'b00001111
                    }),        
  .out         (mem_w_mask)  
);

//reg_control
assign wdata  = reg_we_i ?(ram_re_i ? mem_r_data : result) : 64'b0;
assign reg_we = reg_we_i ;
assign waddr  = reg_waddr_i ;

//ram_control
assign ram_we    = ram_we_i ;
assign ram_waddr = ram_we_i?result : 64'b0;
assign ram_wdata = ram_waddr_i;
assign ram_re    = ram_re_i ;
assign ram_raddr = ram_re_i?result : 64'b0;
assign wmask     = mem_w_mask ;
endmodule

module ysyx_22050019_alu(
 input [63:0] op_1,
 input [63:0] op_2,
 input [`LEN:0] alu_sel,
 
 output[63:0] result
);

wire  [31:0]op1_32 = op_1[31:0] ;
wire  [31:0]op2_32 = op_2[31:0] ;

wire  op_suber    = {op_sltu|op_sub|op_slt|op_sub_32} ;
wire  op_sltu     = alu_sel [3] ;
wire  op_sub      = alu_sel [1] ;
wire  op_slt      = alu_sel [13];
wire  op_sub_32   = alu_sel [14] ;
/*    alu_sel 各个位的执行命令查看表
wire  op_add_64   = alu_sel [0] ;
wire  op_add_32   = alu_sel [2] ;
wire  op_sltu     = alu_sel [4] ;
wire  op_and      = alu_sel [5] ;
wire  op_sll_64   = alu_sel [6] ;
wire  op_xor      = alu_sel [7] ;
wire  op_or       = alu_sel [8] ;
wire  op_sll_64   = alu_sel [9] ;
wire  op_mul_32   = alu_sel [10];
wire  op _div_32  = alu_sel [11];
wire  op _rem_32  = alu_sel [12];
wire  op_srli_64  = alu_sel [15] ;
wire  op_sll_32   = alu_sel [16] ;
wire  op_mul      = alu_sel [17] ;
wire  op_srli_32  = alu_sel [18] ;
wire  op_sraw_32  = alu_sel [19] ;
wire  op_divu_64  = alu_sel [20];
*/
//加减判断，add 结果有op_suber控制为加或者减
wire [63:0] op_2_in    = op_suber ?  (~op_2 + 64'b1) : op_2  ;//加减匹配位置
wire [63:0] add        = op_1 +op_2_in;

//对add的结果进行32位截断符号拓展
wire [63:0] SEXT_add_32 = {{32{add[31]}},add[31:0]};

//有符号小于则置位
wire [63:0] slt       = ( ( ( op_1[63] == 1'b1 ) && ( op_2[63] == 1'b0 ) ) 
                        | ( (op_1[63] == op_2[63] ) && ( add[63] == 1'b1 ) ) ) ? 64'b1 : 64'b0 ;

//小于则置位，无符号
wire [63:0] sltu      = ( ( ( op_1[63] == 1'b0 ) && ( op_2[63] == 1'b1 ) ) 
                        | ( (op_1[63] == op_2[63] ) && ( add[63] == 1'b1 ) ) ) ? 64'b1 : 64'b0 ;

//对操作数1逻辑右移shanmt位（空位填0)
wire [63:0] srli_64    = op_1 >> op_2[5:0];
wire [31:0] srli_w     = op1_32 >> op_2[4:0];
wire [63:0] srli_32    = {{32{srli_w[31]}},srli_w[31:0]};

//对操作数1算术右移位shanmt位（rs1最高位填冲)
wire [63:0] sri_64     = $signed(op_1) >>> op_2[5:0];    //符号位
wire [63:0] sri_32     = {{32{sri_64[31]}},sri_64[31:0]};//4-0也可
wire [31:0] sra_w      = $signed(op1_32) >>> op_2[4:0];
wire [63:0] sraw_32    = {{32{sra_w[31]}},sra_w[31:0]};

//对操作数1逻辑左移rs2（低5位）位（空位填0)
wire [63:0] sll_64_w     = op_1 << op_2[4:0];
wire [63:0] sll_32     = {{32{sll_64_w[31]}},sll_64_w[31:0]};

//对操作数1逻辑左移rs2（shamt位）位（空位填0)
wire [63:0] sll_64     = op_1<<op_2[5:0];

//按位与
wire [63:0] and64      = op_1 & op_2 ;

//按位或
wire [63:0] or64       = op_1 | op_2 ;

//按位异或
wire [63:0] xor64      = op_1 ^ op_2 ;
//乘法器
wire [63:0] mul        = op_1 * op_2 ;
wire [63:0] mul_32     = {{32{mul[31]}},mul[31:0]};

//除法器
wire [31:0] div_32     = op1_32 / op2_32 ;
wire [63:0] divu_64    = op_1 / op_2 ;
wire [63:0] div_32_64  = {{32{div_32[31]}},div_32[31:0]};

//取余数
wire [31:0] rem_32     = op1_32 % op2_32 ;
wire [63:0] remu_64    = op_1 % op_2 ;
wire [63:0] rem_32_64  = {{32{rem_32[31]}},rem_32[31:0]};
ysyx_22050019_mux #( .NR_KEY(`LEN+1'b1), .KEY_LEN(`LEN+1'b1), .DATA_LEN(64) ) mux_alu_result
(
  .key         (alu_sel), 
  .default_out (64'b0),
  .lut         ({
                 23'b10000000000000000000000,remu_64,
                 23'b01000000000000000000000,sll_64_w,
                 23'b00100000000000000000000,divu_64,
                 23'b00010000000000000000000,sraw_32,
                 23'b00001000000000000000000,srli_32,
                 23'b00000100000000000000000,mul,
                 23'b00000010000000000000000,sri_32,
                 23'b00000001000000000000000,srli_64,
                 23'b00000000100000000000000,SEXT_add_32,
                 23'b00000000010000000000000,slt,
                 23'b00000000001000000000000,rem_32_64,
                 23'b00000000000100000000000,div_32_64,
                 23'b00000000000010000000000,mul_32,
                 23'b00000000000001000000000,sll_64,
                 23'b00000000000000100000000,or64,
                 23'b00000000000000010000000,xor64,
                 23'b00000000000000001000000,sll_32,
                 23'b00000000000000000100000,and64,
                 23'b00000000000000000010000,sri_64,
                 23'b00000000000000000001000,sltu,
                 23'b00000000000000000000100,SEXT_add_32,
                 23'b00000000000000000000010,add,
                 23'b00000000000000000000001,add
                 }),           
  .out         (result)  
);
endmodule
