module ysyx_22050019_PC#(
    DW = 64 ,
    RESET_VAL = 64'h80000000
)(
    input               clk                     ,
    input               rst_n                   ,
    input               inst_j                  ,
    input   [DW-1:0]    snpc                    ,  
    output  [DW-1:0]   inst_addr  
);
wire [DW-1:0] inst_addr_reg = inst_addr+64'd4;

reg [DW-1:0]  q;
always @(posedge clk) begin
    if (rst_n == 1'b0)
        q <= RESET_VAL ;
    else if ( 1 )
        q <= inst_addr_reg    ;   
end

assign inst_addr = inst_j?snpc:q;
endmodule
