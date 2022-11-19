module ysyx_22050019_IDU(
  input [63:0]   inst_addr_pc,
  input [31:0]   inst_i,
  input [63:0]   rdata1,
  input [63:0]   rdata2,

  output[63:0]   snpc,
  output         inst_j,

  output         ram_we,
  output[63:0]   ram_waddr,
  output         ram_re,

  output[4:0]    raddr1,
  output[4:0]    raddr2,
  output[63:0]   op1   ,
  output[63:0]   op2   ,

  output[5:0]    mem_r_wdth,
  output[2:0]    mem_w_wdth,

  output         reg_we_o,
  output[4:0]    reg_waddr_o,
  output[`LEN:0] alu_sel

);
wire  [6:0]	opcode = inst_i[6:0]    ;
wire  [4:0]	rd     = inst_i[11:7]   ;
wire  [2:0]	funct3 = inst_i[14:12]  ;
wire  [4:0]	rs1    = inst_i[19:15]  ;
wire  [4:0]	rs2    = inst_i[24:20]  ;
wire  [6:0]	funct7 = inst_i[31:25]  ;

//i型指令信号制作
wire  [11:0] imm_12_I = {funct7,rs2};
wire  [63:0] imm_12_I_64 = { {52{imm_12_I[11]}}, imm_12_I};
//u型指令信号制作
wire  [19:0] imm_20 = {funct7,rs2,rs1,funct3};
wire  [63:0] imm_20_U_64 = {{32{imm_20[19]}},imm_20, 12'b0}; 
//j型指令信号制作
wire  [19:0] imm_20_j = {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
wire  [63:0] imm_20_j_64 ={{43{imm_20_j[19]}},imm_20_j,1'b0};
//b型指令信号制作
wire  [11:0] imm_12_b = {inst_i[31], inst_i[7],inst_i[30:25], inst_i[11:8]};
wire  [63:0] imm_12_b_64 = {{51{imm_12_b[11]}}, imm_12_b, 1'b0};
//s型指令信号制作
wire  [11:0] imm_12_s = { inst_i[31:25], inst_i[11:7] } ;
wire  [63:0] imm_12_s_64 = { {52{imm_12_s[11]}}, imm_12_s } ;

wire  [5:0]  imm_sel ={(inst_auipc||inst_lui),(inst_jal),(op_i||inst_jalr||inst_addiw||inst_l),(1'b0),(op_b),(op_s)};
wire  [63:0] imm64;
ysyx_22050019_mux #( .NR_KEY(6), .KEY_LEN(6), .DATA_LEN(64)) mux_imm
(
  .key         (imm_sel), //键
  .default_out ({64{1'b0}}),
  .lut         ({		 6'b100000,imm_20_U_64,
                 		 6'b010000,imm_20_j_64,
				             6'b001000,imm_12_I_64,
				             6'b000100,64'b0,
				             6'b000010,imm_12_b_64,
				             6'b000001,imm_12_s_64}), //键和输出的表           
  .out         (imm64)  //输出
);
// 根据opcode的值分选指令类型
wire op_i       = ( opcode == `ysyx_22050019_INST_TYPE_I  )                ;//00100
wire op_b       = ( opcode == `ysyx_22050019_INST_TYPE_B  )                ;//11000
wire op_s       = ( opcode == `ysyx_22050019_INST_TYPE_S  )                ;//01000
wire op_r       = ( opcode == `ysyx_22050019_INST_TYPE_R  )                ;//01100
wire inst_l     = ( opcode == `ysyx_22050019_INST_L       )                ;//00000

wire inst_addiw = ( opcode == `ysyx_22050019_INST_ADDIW   )                ;//00110
wire inst_auipc = ( opcode == `ysyx_22050019_INST_AUIPC   )                ;//00101
wire inst_lui   = ( opcode == `ysyx_22050019_INST_LUI     )                ;//01101
wire inst_jal   = ( opcode == `ysyx_22050019_INST_JAL     )                ;//11011
wire inst_jalr  = ( opcode == `ysyx_22050019_INST_JALR    )                ;//11001
wire inst_w     = ( opcode == `ysyx_22050019_INST_ADDW    )                ;//01110

// 根据funct3的值细分出
wire rv32_funct3_000    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_000 )     ;
wire rv32_funct3_001    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_001 )     ;
wire rv32_funct3_010    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_010 )     ;
wire rv32_funct3_011    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_011 )     ;
wire rv32_funct3_100    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_100 )     ;
wire rv32_funct3_101    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_101 )     ;
wire rv32_funct3_110    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_110 )     ;
wire rv32_funct3_111    = ( funct3 == `ysyx_22050019_RV32_FUNCT3_111 )     ;
//根据funct7的值细分出
wire rv32_funct7_000_0000 = ( funct7 == `ysyx_22050019_RV32_FUNCT7_0000000) ;
wire rv32_funct7_000_0001 = ( funct7 == `ysyx_22050019_RV32_FUNCT7_0000001) ;
wire rv32_funct7_010_0000 = ( funct7 == `ysyx_22050019_RV32_FUNCT7_0100000) ; 

//各个指令的使能信号声明（不言自明)
wire addi = op_i&&rv32_funct3_000;
wire beq  = op_b&&rv32_funct3_000;
wire sd   = op_s&&rv32_funct3_011;
wire sub  = op_r&&rv32_funct3_000&&rv32_funct7_010_0000;
wire add  = op_r&&rv32_funct3_000&&rv32_funct7_000_0000;
wire addiw=inst_addiw&&rv32_funct3_000;
wire bne  = op_b&&rv32_funct3_001;//meixie
wire ld   = inst_l&&rv32_funct3_011;
wire sltiu= op_i&&rv32_funct3_011;
wire lw   = inst_l&&rv32_funct3_010;
wire addw = inst_w&&rv32_funct3_000&&(~rv32_funct7_000_0001)&&(~rv32_funct7_010_0000);
wire srai = op_i&&rv32_funct3_101&&rv32_funct7_010_0000;
wire lbu  = inst_l&&rv32_funct3_100;
wire sh   = op_s&&rv32_funct3_001;
wire andi = op_i&&rv32_funct3_111;
wire sllw = inst_w&&rv32_funct3_001;
wire AND  = op_r&&rv32_funct3_111&&(~rv32_funct7_000_0001);
wire sltu = op_r&&rv32_funct3_011;
wire xor0 = op_r&&rv32_funct3_100&&rv32_funct7_000_0000;
wire xori = op_i&&rv32_funct3_100;
wire OR   = op_r&&rv32_funct3_110;
wire sb   = op_s&&rv32_funct3_000;
wire slli = op_i&&rv32_funct3_001&&(inst_i[31:26] == 6'b0);
wire bge  = op_b&&rv32_funct3_101;
wire sw   = op_s&&rv32_funct3_010;
wire mulw = inst_w&&rv32_funct3_000&&rv32_funct7_000_0001;
wire divw = inst_w&&rv32_funct3_100&&rv32_funct7_000_0001;
wire remw = inst_w&&rv32_funct3_110&&rv32_funct7_000_0001;
wire slt  = op_r&&rv32_funct3_010&&rv32_funct7_000_0000;
wire blt  = op_b&&rv32_funct3_100;
wire lh   = inst_l&&rv32_funct3_001;
wire lhu  = inst_l&&rv32_funct3_101;
wire subw = inst_w&&rv32_funct3_000&&rv32_funct7_010_0000;
wire srli = op_i&&rv32_funct3_101&&(inst_i[31:26] == 6'b0);
wire slliw= inst_addiw&&rv32_funct3_001&&rv32_funct7_000_0000;
wire sraiw= inst_addiw&&rv32_funct3_101&&rv32_funct7_010_0000;
wire mul  = op_r&&rv32_funct3_000&&rv32_funct7_000_0001;
wire srliw= inst_addiw&&rv32_funct3_101&&rv32_funct7_000_0000;
wire sraw = inst_w&&rv32_funct3_101&&rv32_funct7_010_0000;
wire srlw = inst_w&&rv32_funct3_101&&rv32_funct7_000_0000;
wire bltu = op_b&&rv32_funct3_110;
wire divu = op_r&&rv32_funct3_101&&rv32_funct7_000_0001;
wire slti = op_i&&rv32_funct3_010;
wire divuw= inst_w&&rv32_funct3_101&&rv32_funct7_000_0001;
wire bgeu = op_b&&rv32_funct3_111;
wire lb   = inst_l&&rv32_funct3_000;
wire ori  = op_i&&rv32_funct3_110;
wire remuw= inst_w&&rv32_funct3_111&&rv32_funct7_000_0001;
wire sll  = op_r&&rv32_funct3_001&&rv32_funct7_000_0000;
wire remu = op_r&&rv32_funct3_111&&rv32_funct7_000_0001;
//alu部分制作
wire alu_add    = addi||inst_auipc||inst_lui||inst_jal||inst_jalr||op_s||add||inst_l;
wire alu_sub    = sub;
wire alu_add_32 = addiw||addw;
wire alu_sltu   = sltiu||sltu;
wire alu_sr_64  = srai;
wire alu_and    = andi||AND;
wire alu_sl_32  = sllw||slliw;
wire alu_xor    = xori||xor0;
wire alu_or     = OR||ori;
wire alu_slli_64= slli;
wire alu_mul32  = mulw;
wire alu_divw   = divw||divuw;
wire alu_remw   = remw||remuw;
wire alu_slt    = slt||slti;
wire alu_sub_32 = subw;
wire alu_srli   = srli;
wire alu_sr_32  = sraiw;
wire alu_mul    = mul;
wire alu_srliw = srliw||srlw;
wire alu_sra_32 = sraw;
wire alu_divu_64= divu;
wire alu_sll_64 = sll;
wire alu_rem_64 = remu;
assign alu_sel  =  {alu_rem_64,alu_sll_64,alu_divu_64,alu_sra_32,alu_srliw,mul,alu_sr_32,alu_srli,alu_sub_32,alu_slt,alu_remw,alu_divw,alu_mul32,alu_slli_64,alu_or,alu_xor,alu_sl_32,alu_and,alu_sr_64,alu_sltu,alu_add_32,alu_sub,alu_add};

//reg_control
assign reg_we_o    =  op_i||inst_auipc||inst_lui||inst_jal||inst_jalr||op_r||inst_l||inst_addiw||(inst_w);//使能
assign reg_waddr_o =  reg_we_o?rd:5'b0;//索引
assign raddr1      =  (op_i||inst_jalr||op_s||op_r||inst_l||inst_addiw||(inst_w)||op_b)?rs1:5'b0;//数据
assign raddr2      =  (op_b||op_s||op_r||(inst_w))?rs2:5'b0;

//mem_control
assign ram_we      = op_s;
assign ram_waddr   = op_s?rdata2:64'b0;//write
assign ram_re      = inst_l;

//op1_sel
wire [1:0]op1_en   = {(inst_auipc||inst_jal||inst_jalr) ,(op_i||op_s||op_r||inst_addiw||inst_l||(inst_w))};
ysyx_22050019_mux #( .NR_KEY(2), .KEY_LEN(2), .DATA_LEN(64) ) mux_op1
(
  .key         (op1_en), //键
  .default_out (64'b0),
  .lut         ({2'b10,inst_addr_pc,
                 2'b01,rdata1
                 }), //键和输出的表           
  .out         (op1)  //输出
);

//op2_sel
wire [2:0]op2_en   =  {(op_i||inst_auipc||inst_lui||op_s||inst_addiw||inst_l) ,op_r||(inst_w),(inst_jal||inst_jalr)};
ysyx_22050019_mux #( .NR_KEY(3), .KEY_LEN(3), .DATA_LEN(64)) mux_op2
(
  .key         (op2_en), //键
  .default_out (64'b0),
  .lut         ({
                 3'b100,imm64,
                 3'b010,rdata2,
                 3'b001,64'd4}),         
  .out         (op2)  //输出
);
//mem_r_wdth
assign mem_r_wdth = {lw,lh,lb,1'b0,lhu,lbu};               //of32,16,8  || 32,16,8   
//mem_w_wdth
assign mem_w_wdth = {sb,sh,sw};                             //else(64)---8---16---32--

//pc_branch
assign inst_j      = inst_jal||inst_jalr||beq&&beq_y||bne&&(~beq_y)||bge&&(~b_ab_1_s)||blt&&b_ab_1_s||bltu&&b_ab_1_u||bgeu&&(~b_ab_1_u); //跳转信号制作处
wire [1:0]branch   = {(inst_jal||op_b),inst_jalr};
ysyx_22050019_mux #( .NR_KEY(2), .KEY_LEN(2), .DATA_LEN(64)) mux_branch
(
  .key         (branch), //键
  .default_out (64'd0),
  .lut         ({2'b10,inst_addr_pc+imm64,
                 2'b01,(rdata1+imm_12_I_64)&(~64'b1)}),           
  .out         (snpc)  //输出
);

//b型指令结果判断处
wire [63:0]b_ab_s = rdata1 + (~rdata2 + 64'b1);//补码-法，进行判断运算
wire beq_y = b_ab_s == 64'b0;                  //ab->equal
wire b_ab_1_s       = ( ( ( rdata1[63] == 1'b1 ) && ( rdata2[63] == 1'b0 ) ) 
                        | ( (rdata1[63] == rdata2[63] ) && ( b_ab_s[63] == 1'b1 ) ) );//有符号小于<
wire b_ab_1_u      = ( ( ( rdata1[63] == 1'b0 ) && ( rdata2[63] == 1'b1 ) ) 
                        | ( (rdata1[63] == rdata2[63] ) && ( b_ab_s[63] == 1'b1 ) ) );//无符号小于<

Ebreak Ebreak_inst(
  .inst (inst_i)
);

endmodule
