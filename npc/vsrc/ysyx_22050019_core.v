module ysyx_22050019_core(
  input       clk,
  input       rst_n,
  
  output [31:0]inst_i,         //1_inst
  output[63:0]inst_addr,
  
  output[63:0]inst_addr_if_id, //2_inst
  output[31:0]inst_if_id      
);
//pc寄存器端口
wire [63:0] inst_addr_pc_if ;
ysyx_22050019_PC PC(
  .clk        (clk),
  .rst_n      (rst_n),
  .inst_addr  (inst_addr_pc_if),
  .inst_j     (inst_j),
  .snpc       (snpc)
);

//fetch模块端口
ysyx_22050019_IFU IFU
(
    .clk               (clk            ),
    .rst_n             (rst_n          ),
    .inst_addr_i       (inst_addr_pc_if),
    .inst_i            (inst_i         ),
    .inst_addr_o       (inst_addr_if_id), //第二级流水指令
    .inst_addr_reg_o   (inst_addr),       //第二级流水指令
    .inst_o            (inst_if_id     )
);


//decode模块端口
//wire [63:0] inst_addr_id_ex;//decode流水
wire [4:0]  raddr1_id_regs ;//读寄存器1索引
wire [4:0]  raddr2_id_regs ;//读寄存器2索引
wire [63:0] rdata1_id_regs ;//读寄存器1数据
wire [63:0] rdata2_id_regs ;//读寄存器2数据
wire [63:0] op1_id_ex      ;//操作数1
wire [63:0] op2_id_ex      ;//操作数2
wire        reg_we_id_ex   ;//reg写使能
wire [4:0]  reg_waddr_id_ex;//写寄存器的索引
wire [`LEN:0] alu_sel        ;//alu控制信号
wire [63:0] snpc;
wire        inst_j         ;

wire        ram_we_id_ex   ;//存储器写使能
wire [63:0] ram_waddr_id_ex ;//mem写索引
wire        ram_re_id_ex   ;
wire [5:0]  mem_r_wdth     ;
wire [2:0]  mem_w_wdth     ;

ysyx_22050019_IDU IDU(
 .inst_addr_pc  (inst_addr_if_id),
 .inst_i     (inst_if_id),
 
 .snpc       (snpc),
 .inst_j     (inst_j),
 .ram_we     (ram_we_id_ex),
 .ram_waddr  (ram_waddr_id_ex),
 .ram_re     (ram_re_id_ex),

 .raddr1     (raddr1_id_regs),
 .rdata1     (rdata1_id_regs),
 .raddr2     (raddr2_id_regs),
 .rdata2     (rdata2_id_regs),
 .op1        (op1_id_ex),
 .op2        (op2_id_ex),
 .reg_we_o   (reg_we_id_ex),
 .reg_waddr_o(reg_waddr_id_ex),

 .mem_r_wdth (mem_r_wdth),
 .mem_w_wdth (mem_w_wdth),
 .alu_sel    (alu_sel)        
);
//EXecut模块端口
wire [63:0]  wdata_ex_reg  ;
wire         reg_we_ex_reg ;
wire [4:0]   waddr_ex_reg  ;

wire        ram_we_ex_mem   ;//存储器写使能
wire [63:0] ram_waddr_ex_mem ;//mem索引
wire [63:0] ram_wdata_ex_mem ;

wire        ram_re_ex_mem   ;//存储器读使能
wire [63:0] ram_rdata_mem_ex ;
wire [63:0] ram_raddr_ex_mem ;//mem读索引
wire [7:0]  wmask           ;
ysyx_22050019_EXU EXU(
 .alu_sel(alu_sel),
 .ram_we_i    (ram_we_id_ex),
 .ram_waddr_i (ram_waddr_id_ex),
 .ram_re_i    (ram_re_id_ex),
 .ram_rdata_i (ram_rdata_mem_ex),

 .op1         (op1_id_ex),
 .op2         (op2_id_ex),
 .reg_we_i    (reg_we_id_ex),
 .reg_waddr_i (reg_waddr_id_ex),

 .mem_r_wdth  (mem_r_wdth),
 .mem_w_wdth  (mem_w_wdth),

 .ram_we      (ram_we_ex_mem),
 .ram_waddr   (ram_waddr_ex_mem),
 .ram_wdata   (ram_wdata_ex_mem),
 .ram_re      (ram_re_ex_mem),
 .ram_raddr   (ram_raddr_ex_mem),
 .wmask       (wmask),

 .wdata       (wdata_ex_reg),
 .reg_we      (reg_we_ex_reg),
 .waddr       (waddr_ex_reg)
);

//MEM读取端口
ysyx_22050019_mem MEM (
  .ren(ram_re_ex_mem),
  .wen(ram_we_ex_mem),

  .raddr(ram_raddr_ex_mem),
  .rdata(ram_rdata_mem_ex),

  .waddr(ram_waddr_ex_mem),
  .wdata(ram_wdata_ex_mem),
  .mask(wmask)
);
wire [63:0]wdata_reg = wdata_ex_reg;
wire wen_reg   = reg_we_ex_reg;
wire [4:0]waddr_reg =waddr_ex_reg;

//寄存器组端口
ysyx_22050019_regs regs(
 .clk        (clk),
 .now_pc     (inst_addr_if_id),         
 .wdata      (wdata_reg),
 .waddr      (waddr_reg),
 .wen        (wen_reg),
 
 .raddr1     (raddr1_id_regs),
 .raddr2     (raddr2_id_regs),
 .rdata1     (rdata1_id_regs),
 .rdata2     (rdata2_id_regs)
);

endmodule
