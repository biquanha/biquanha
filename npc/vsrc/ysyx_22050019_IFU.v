//第一级流水，时序逻辑

module ysyx_22050019_IFU
(
    input                 clk               ,
    input                 rst_n             ,
    input   [63:0]        inst_addr_i       ,
    
    output  [31:0]        inst_i            ,
    output  [63:0]        inst_addr_o       , //送出去看指令的地址
    output  [63:0]        inst_addr_reg_o   , //到指令寄存器中取指令的地址
    output  [31:0]        inst_o
);
wire [63:0] fetchmem_rdata;
  ysyx_22050019_mem fetchmem (
    .ren(1'b1),
    .wen(1'b0),
    .raddr(inst_addr_i),
    .rdata(fetchmem_rdata),
    .waddr(64'b0),
    .wdata(64'b0),
    .mask(8'b0)
  );
assign inst_i = fetchmem_rdata[31:0];
//IFU第一级取指令流水操作
ysyx_22050019_Reg #(32,32'b0) i0 (clk,rst_n,inst_i,inst_o,1'b1);
ysyx_22050019_Reg #(64,64'b0) i1 (clk,rst_n,inst_addr_i,inst_addr_o,1'b1);

assign inst_addr_reg_o = inst_addr_i;

endmodule
