----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    09:37:03 03/26/2016
-- Module Name:    OAUNIT_Toplevel - Structural
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity OAUNIT_Toplevel is
PORT ( CLK:				in  STD_LOGIC;
		 RST:				in  STD_LOGIC;
		 ADDR_IN:		in	 STD_LOGIC_VECTOR (8 downto 0);
		 OP_IN: 			in  STD_LOGIC_VECTOR (3 downto 0);
		 RA_IN:			in  STD_LOGIC_VECTOR (3 downto 0);
	    RB_IN:			in  STD_LOGIC_VECTOR (3 downto 0);
		 IMM_IN:			in  STD_LOGIC_VECTOR (7 downto 0);
		 REGDATAB_IN:	in  STD_LOGIC_VECTOR (15 downto 0);
		 SR_IN:			in  STD_LOGIC_VECTOR (3 downto 0);
		 ITYPE_IN:		in  STD_LOGIC_VECTOR (2 downto 0);
		 OP_OUT:			out STD_LOGIC_VECTOR (3 downto 0);
		 VALA_OUT:		out STD_LOGIC_VECTOR (15 downto 0);
		 VALB_OUT:		out STD_LOGIC_VECTOR (15 downto 0));
end OAUNIT_Toplevel;

architecture Structural of OAUNIT_Toplevel is

signal OPSELECTOR			: STD_LOGIC_VECTOR (1 downto 0);
signal VALA, VALB			: STD_LOGIC_VECTOR (15 downto 0);

begin
-- Operand Access Unit: Wrapped
OA_Unit: entity work.OaUnit
   port map( CLK => CLK,
				 ADDR_IN => ADDR_IN,
				 OP_IN => OP_IN,
				 RA_IN => RA_IN,
				 RB_IN => RB_IN,
				 IMM_IN => IMM_IN,
				 SR_IN => SR_IN,
				 ITYPE_IN => ITYPE_IN,
				 OP_OUT => OP_OUT,
				 VALUE_A => VALA,
				 VALUE_B => VALB,
				 MUXSEL => OPSELECTOR);

-- Mux to either select immediate data or register data
OA_MUX: entity work.Oa_MUX
   port map( IMM_IN => IMM_IN,
				 REGB_IN => REGDATAB_IN,
				 SEL_IN => OPSELECTOR,
				 VALB_OUT => VALB_OUT);
end Structural;