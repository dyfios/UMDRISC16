---------------------------------------------------
-- School: University of Massachusetts Dartmouth
-- Department: Computer and Electrical Engineering
-- Engineer: Daniel Noyes
-- 
-- Create Date:    SPRING 2015
-- Module Name:    ALU_Logic_Unit
-- Project Name:   ALU
-- Target Devices: Spartan-3E
-- Tool versions:  Xilinx ISE 14.7
-- Description: Logic Unit
--  Operations - AND, OR, MOV, ANDI
---------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Logic_Unit is
    Port ( A      : in  STD_LOGIC_VECTOR (15 downto 0);
           B      : in  STD_LOGIC_VECTOR (15 downto 0);
           OP     : in  STD_LOGIC_VECTOR (3 downto 0);
			  CCR    : out STD_LOGIC_VECTOR (3 downto 0);
           RESULT : out STD_LOGIC_VECTOR  (15 downto 0));
end Logic_Unit;

architecture Combinational of Logic_Unit is

--    signal cmp: STD_LOGIC_VECTOR (3 downto 0) := (OTHERS => '0');

begin

    with OP select
        RESULT (15 downto 0) <=
            A and B when "0010", -- AND  REG A, REG B
				A and B when "0110", -- ANDI  REG A, IMMED
            A or  B when "0011", -- OR   REG A, REG B
				B 		  when "0100", -- MOV  REG B => REG A
				B		  when "1111", -- BRANCH
            A and B when OTHERS;

        ccr <= "0000";
end Combinational;
