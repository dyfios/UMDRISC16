/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/UMDRISC16/alu_shift_unit.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0006176688_3852387523_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 6076U);
    t5 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t2, t4, t3, (unsigned char)0);
    t6 = (t2 + 12U);
    t7 = *((unsigned int *)t6);
    t7 = (t7 * 1U);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 6092U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t9, t8);
    t11 = xsi_vhdl_bitvec_sll(t11, t5, t7, t10);
    t12 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t1, t11, t2);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t14 = (t14 * 1U);
    t15 = (16U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 3920);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t12, 16U);
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 3808);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t14, 0);
    goto LAB6;

}

static void work_a_0006176688_3852387523_p_1(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(34, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 6076U);
    t5 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t2, t4, t3, (unsigned char)0);
    t6 = (t2 + 12U);
    t7 = *((unsigned int *)t6);
    t7 = (t7 * 1U);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 6092U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t9, t8);
    t11 = xsi_vhdl_bitvec_srl(t11, t5, t7, t10);
    t12 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t1, t11, t2);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t14 = (t14 * 1U);
    t15 = (16U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 3984);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t12, 16U);
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 3824);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t14, 0);
    goto LAB6;

}

static void work_a_0006176688_3852387523_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6220);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB8:    t6 = (t0 + 6224);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB9:
LAB7:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6228);
    t4 = (t0 + 4048);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(36, ng0);

LAB13:    t2 = (t0 + 3840);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t9 = (t0 + 4048);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 16U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB4;

LAB6:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 4048);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB10:;
LAB11:    t3 = (t0 + 3840);
    *((int *)t3) = 0;
    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}


extern void work_a_0006176688_3852387523_init()
{
	static char *pe[] = {(void *)work_a_0006176688_3852387523_p_0,(void *)work_a_0006176688_3852387523_p_1,(void *)work_a_0006176688_3852387523_p_2};
	xsi_register_didat("work_a_0006176688_3852387523", "isim/TLTEST_isim_beh.exe.sim/work/a_0006176688_3852387523.didat");
	xsi_register_executes(pe);
}
