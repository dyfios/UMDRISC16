----------------------------------------------------------------------------------
-- Engineers: Shuti Wu and Dylan Z. Baker
-- Create Date:    11:39:24 03/14/2016 
-- Module Name:    Decode - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Decode is
    Port ( CLK 		: in   STD_LOGIC;
			  ENB			: in  STD_LOGIC;
	        CODE 		: in   STD_LOGIC_VECTOR (15 downto 0);
			  ADDR		: in	 STD_LOGIC_VECTOR (8 downto 0);
			  NOOP		: out  STD_LOGIC_VECTOR (4 downto 0);
			  ADDR_OUT	: out  STD_LOGIC_VECTOR (8 downto 0);
			  OP_OUT   	: out  STD_LOGIC_VECTOR (3 downto 0);
			  RA_OUT   	: out  STD_LOGIC_VECTOR (3 downto 0);
			  RB_OUT   	: out  STD_LOGIC_VECTOR (3 downto 0);
			  IMM_OUT	: out  STD_LOGIC_VECTOR (7 downto 0);
			  SR_OUT		: out  STD_LOGIC_VECTOR (3 downto 0);
			  ITYPE_OUT	: out	 STD_LOGIC_VECTOR (2 downto 0));
end Decode;

architecture Behavior of Decode is
	
	signal OP   : STD_LOGIC_VECTOR (3 downto 0);
	signal RA   : STD_LOGIC_VECTOR (3 downto 0);
	signal RB   : STD_LOGIC_VECTOR (3 downto 0);
	signal IMM	: STD_LOGIC_VECTOR (7 downto 0);
	signal SR	: STD_LOGIC_VECTOR (3 downto 0);
	signal ADR	: STD_LOGIC_VECTOR (8 downto 0);
	
	begin
	
		DECODE: process(CLK, ENB)

			begin
				if (CLK'event and CLK = '1' and ENB = '1') then
					OP <= CODE (15 downto 12);
					RA <= CODE (11 downto 8);
					RB <= CODE (7 downto 4);
					IMM <= CODE (7 downto 0);
					SR <= CODE (11 downto 8);
					ADR <= ADDR;
				end if;
			END PROCESS ;
			
			REGBANKWRITE: PROCESS (CLK, ENB)
				begin
					IF (CLK'event and CLK = '0' and ENB = '1') THEN
						ADDR_OUT <= ADR;
						OP_OUT <= OP;
						RA_OUT <= RA;
						RB_OUT <= RB;
						IMM_OUT <= IMM;
						SR_OUT <= SR;
						NOOP <= OP & IMM(0);
						
						if (OP <= "0100") then
							ITYPE_OUT <= "000";
						elsif (OP <= "0111") then
							ITYPE_OUT <= "001";
						elsif (OP <= "1010") then
							ITYPE_OUT <= "010";
						elsif (OP <= "1111") then	-- branch
							ITYPE_OUT <= "011";
						end if;
					END IF;
			END PROCESS;

end behavior;