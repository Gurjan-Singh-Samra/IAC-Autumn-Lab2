module ram #(
    parameter   ADDRESS_WIDTH = 9,
                DATA_WIDTH = 8
)(
    input logic                     clk,
    input logic                     wr_en,
    input logic                     rd_en,
    input logic [ADDRESS_WIDTH-1:0] wr_addr,
    input logic [ADDRESS_WIDTH-1:0] rd_addr,
    input logic [DATA_WIDTH-1:0]   din,
    output logic [DATA_WIDTH-1:0]   dout
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("sinerom.mem", ram_array);
end;

always_ff @(posedge clk)  begin 
    // output is synchronous
    if(wr_en)
        ram_array[wr_addr] <= din;
    if(rd_en)
        dout <= ram_array[rd_addr];
end
endmodule
