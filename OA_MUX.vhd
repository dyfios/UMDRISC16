----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    09:41:37 03/26/2016
-- Module Name:    OA_MUX - Combinational
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity OA_MUX is
PORT ( IMM_IN:	in	 STD_LOGIC_VECTOR (15 downto 0);	--Immediate Values
		 REGB_IN:	in	 STD_LOGIC_VECTOR (15 downto 0);	-- Register Value
		 SEL_IN:		in  STD_LOGIC_VECTOR (1 downto 0); -- 2-bit selector: MSB = A, LSB = B
																		-- 1 = Reg, 0 = IMM
		 VALB_OUT:	out STD_LOGIC_VECTOR (15 downto 0)); -- Selected Values
end OA_MUX;

architecture Combinational of OA_MUX is

begin
	VALB_OUT <= REGB_IN when (SEL_IN(0) = '1') else IMM_IN;

end Combinational;