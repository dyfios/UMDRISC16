----------------------------------------------------------------------------------
-- Engineer:		 Yanhao Zeng
-- Create Date:    15:24:09 03/23/2016 
-- Module Name:    OaUnit - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity OaUnit is
    Port ( CLK 		: in   STD_LOGIC;
			  ENB			: in   STD_LOGIC;
			  ADDR_IN	: in	 STD_LOGIC_VECTOR (8 downto 0);
			  NOOP_IN	: in   STD_LOGIC_VECTOR (4 downto 0);
			  OP_IN   	: in   STD_LOGIC_VECTOR (3 downto 0);
			  RA_IN   	: in   STD_LOGIC_VECTOR (3 downto 0);
			  RB_IN   	: in   STD_LOGIC_VECTOR (3 downto 0);
			  IMM_IN 	: in   STD_LOGIC_VECTOR (7 downto 0);
			  SR_IN		: in   STD_LOGIC_VECTOR (3 downto 0);
			  ITYPE_IN  : in 	 STD_LOGIC_VECTOR (2 downto 0);
			  NOOP_OUT	: out  STD_LOGIC_VECTOR (4 downto 0);
			  OP_OUT    : out  STD_LOGIC_VECTOR (3 downto 0);
			  VALUE_A   : out  STD_LOGIC_VECTOR (15 downto 0);
			  VALUE_B   : out  STD_LOGIC_VECTOR (15 downto 0);
			  RA_ADDR   : out  STD_LOGIC_VECTOR (3 downto 0);
			  RB_ADDR   : out  STD_LOGIC_VECTOR (3 downto 0);
			  BR_MASK_OUT: out  STD_LOGIC_VECTOR (3 downto 0);
			  MUXSEL    : out  STD_LOGIC_VECTOR (1 downto 0)); -- MUXSEL to let ALU know which type of value for RA and RB 
																				-- should be used, '1' means from datamemory, '0' is imm.
end OaUnit;                                                	-- MUXSEL(1) is for RA, and MUXSEL(0) is for RB.

architecture Behavioral of OaUnit is

   type InstructionType is (R, I, D, B, J);
	--signal ITYPE : InstructionType;
	signal ADDR_OA : STD_LOGIC_VECTOR (8 downto 0);
	signal OP_OA   : STD_LOGIC_VECTOR (3 downto 0);
	signal RA_OA   : STD_LOGIC_VECTOR (3 downto 0);
	signal RB_OA   : STD_LOGIC_VECTOR (3 downto 0);
	signal IMM_OA	: STD_LOGIC_VECTOR (7 downto 0);
	signal SR_OA	: STD_LOGIC_VECTOR (3 downto 0);
	signal ITYPE_OA: STD_LOGIC_VECTOR (2 downto 0);
	signal NOOP_OA	: STD_LOGIC_VECTOR (4 downto 0);
	
   begin
	OA: process(CLK, ENB)
			begin
				if (CLK'event and CLK = '1' and ENB = '1') then
				   ADDR_OA <= ADDR_IN;
					OP_OA <= OP_IN;
					RA_OA <= RA_IN;
					RA_ADDR <= RA_IN;
					RB_ADDR <= RB_IN;
					IMM_OA <= IMM_IN;
					SR_OA <= SR_IN;
					ITYPE_OA <= ITYPE_IN;
					NOOP_OA <= NOOP_IN;
				end if;
			END PROCESS; 
	  
   OARegBankWrite: PROCESS(CLK, ENB)
			begin
			IF (CLK'event and CLK = '0' and ENB = '1') THEN
         OP_OUT <= OP_OA;
			NOOP_OUT <= NOOP_OA;
			if(ITYPE_OA = "000") then            -- R Type
				--RA_ADDR <= RA_OA;
				--RB_ADDR <= RB_OA;
				MUXSEL  <= "11";
			elsif(ITYPE_OA = "001") then          -- I Type
			   --RA_ADDR <= RA_OA;
				VALUE_B <= "00000000" & IMM_OA;
				MUXSEL  <= "10";
			elsif(ITYPE_OA = "010") then          -- D Type
			   --RA_ADDR <= RA_OA;
				VALUE_B <= "00000000" & IMM_OA;
				MUXSEL  <= "10";
			elsif(ITYPE_OA = "011") then          -- B Type
				BR_MASK_OUT <= RA_OA;
			   VALUE_A <= "00000000" & "00000000";
				VALUE_B <= "00000000" & IMM_OA;
				MUXSEL  <= "00";
			elsif(ITYPE_OA = "100") then          -- J Type
			   VALUE_A <= "00000000" & "00000000";
				--VALUE_B <= TBD;
				MUXSEL  <= "00";
				end if;
			END IF;
			
   END PROCESS;
end Behavioral;