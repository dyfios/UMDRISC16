----------------------------------------------------------------------------------
-- Engineers:		 Dylan Z. Baker
-- Create Date:    11:39:24 03/30/2016 
-- Module Name:    PassLoc - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity PassLoc is
    Port ( CLK 		: in   STD_LOGIC;
			  OP_IN		: in	 STD_LOGIC_VECTOR (3 downto 0);
	        LOC_IN		: in	 STD_LOGIC_VECTOR (3 downto 0);
			  OP_OUT		: out  STD_LOGIC_VECTOR (3 downto 0);
			  LOC_OUT	: out  STD_LOGIC_VECTOR (3 downto 0));
end PassLoc;

architecture Behavior of PassLoc is
	
	signal LOC_TMP   : STD_LOGIC_VECTOR (3 downto 0);
	signal OP_TMP	  : STD_LOGIC_VECTOR (3 downto 0);
	
	begin
	
		LATCH: process(CLK)

			begin
				if (CLK'event and CLK = '1') then
					LOC_TMP <= LOC_IN;
					OP_TMP <= OP_IN;
				end if;
			END PROCESS ;
			
			SAVE: PROCESS (CLK)
				begin
					IF (CLK'event and CLK = '0') THEN
						LOC_OUT <= LOC_TMP;
						OP_OUT <= OP_TMP;
					END IF;
			END PROCESS;

end behavior;