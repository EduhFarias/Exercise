LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY COMPARATOR IS
	PORT(
		A, B : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    
    	EQUAL, DIFFER : OUT STD_LOGIC
	);
END COMPARATOR;

ARCHITECTURE ARCH OF COMPARATOR IS 
	--
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
