LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY COMPARATOR IS
	PORT(
		A, B : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    	
    	DISPLAY_1, DISPLAY_2 : OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
    	EQUAL, DIFFER : OUT STD_LOGIC
	);
END COMPARATOR;

ARCHITECTURE ARCH OF COMPARATOR IS 
	--
	BEGIN
		WITH A SELECT
			DISPLAY_1 <= "0000001" WHEN "0000"  -- '0'
						 "1001111" WHEN "0001"  -- '1'
						 "0010010" WHEN "0010"  -- '2'
						 "0000110" WHEN "0011"  -- '3'
						 "1001100" WHEN "0100"  -- '4' 
						 "0100100" WHEN "0101"  -- '5'
						 "0100000" WHEN "0110"  -- '6'
						 "0001111" WHEN "0111"  -- '7'
						 "0000000" WHEN "1000"  -- '8'
						 "0000100" WHEN "1001"  -- '9'

    BEGIN
		WITH B SELECT
			DISPLAY_2 <= "0000001" WHEN "0000"  -- '0'
						 "1001111" WHEN "0001"  -- '1'
						 "0010010" WHEN "0010"  -- '2'
						 "0000110" WHEN "0011"  -- '3'
						 "1001100" WHEN "0100"  -- '4' 
						 "0100100" WHEN "0101"  -- '5'
						 "0100000" WHEN "0110"  -- '6'
						 "0001111" WHEN "0111"  -- '7'
						 "0000000" WHEN "1000"  -- '8'
						 "0000100" WHEN "1001"  -- '9'

	BEGIN
	PROCESS(A,B);
	BEGIN
		IF (A > B) THEN
			DIFFER <= '1';
			EQUAL <= '0';
		ELSIF (A < B) THEN
			DIFFER <= '1';
			EQUAL <= '0';
		ELSE
			EQUAL <= '1';
			DIFFER <= '0';
		END IF
	END PROCESS;
END ARCH; 
			
http://vhdlguru.blogspot.com.br/2010/03/vhdl-code-for-bcd-to-7-segment-display.html
https://stackoverflow.com/questions/21508949/bcd-to-7-segment-decoder
https://www2.pcs.usp.br/~labdig/pdffiles_2012/contadoresVHDL.pdf
