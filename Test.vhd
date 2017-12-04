LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;
  
entity test is
  port(
    BCD : int std_logic_vector(3 down to 0);
    clk : in std_logic;
    
    
    display : out std_logic_vector(6 downto 0)
  );
end test;  

architecture arch of test is
  -- uso de signal ou constant
  begin
  
  --uso de when else, ou uso de with ... select /n ... <= with "..."
  
end arch;
  
  
http://vhdlguru.blogspot.com.br/2010/03/vhdl-code-for-bcd-to-7-segment-display.html
https://stackoverflow.com/questions/21508949/bcd-to-7-segment-decoder
