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
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/UMDRISC16/alu_logic_unit.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_2270315936_3852387523_p_0(char *t0)
{
    char t18[16];
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
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5540);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB11:    t6 = (t0 + 5544);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB12:    t9 = (t0 + 5548);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB13:    t12 = (t0 + 5552);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB14:    t15 = (t0 + 5556);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB15:
LAB10:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5416U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 5432U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t18, t3, t2, t6, t4);
    t9 = (t18 + 12U);
    t25 = *((unsigned int *)t9);
    t26 = (1U * t25);
    t27 = (16U != t26);
    if (t27 == 1)
        goto LAB23;

LAB24:    t10 = (t0 + 3480);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_delta(t10, 0U, 16U, 0LL);

LAB4:    xsi_set_current_line(33, ng0);

LAB27:    t2 = (t0 + 3400);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB28;

LAB1:    return;
LAB5:    xsi_set_current_line(35, ng0);
    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t19 = (t0 + 5416U);
    t21 = (t0 + 1192U);
    t22 = *((char **)t21);
    t21 = (t0 + 5432U);
    t23 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t18, t20, t19, t22, t21);
    t24 = (t18 + 12U);
    t25 = *((unsigned int *)t24);
    t26 = (1U * t25);
    t27 = (16U != t26);
    if (t27 == 1)
        goto LAB17;

LAB18:    t28 = (t0 + 3480);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t23, 16U);
    xsi_driver_first_trans_delta(t28, 0U, 16U, 0LL);
    goto LAB4;

LAB6:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5416U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 5432U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t18, t3, t2, t6, t4);
    t9 = (t18 + 12U);
    t25 = *((unsigned int *)t9);
    t26 = (1U * t25);
    t27 = (16U != t26);
    if (t27 == 1)
        goto LAB19;

LAB20:    t10 = (t0 + 3480);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_delta(t10, 0U, 16U, 0LL);
    goto LAB4;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5416U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 5432U);
    t7 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t18, t3, t2, t6, t4);
    t9 = (t18 + 12U);
    t25 = *((unsigned int *)t9);
    t26 = (1U * t25);
    t27 = (16U != t26);
    if (t27 == 1)
        goto LAB21;

LAB22:    t10 = (t0 + 3480);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_delta(t10, 0U, 16U, 0LL);
    goto LAB4;

LAB8:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 16U, 0LL);
    goto LAB4;

LAB9:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 16U, 0LL);
    goto LAB4;

LAB16:;
LAB17:    xsi_size_not_matching(16U, t26, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(16U, t26, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(16U, t26, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, t26, 0);
    goto LAB24;

LAB25:    t3 = (t0 + 3400);
    *((int *)t3) = 0;
    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}

static void work_a_2270315936_3852387523_p_1(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 5560);
    t3 = (t0 + 3544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2270315936_3852387523_init()
{
	static char *pe[] = {(void *)work_a_2270315936_3852387523_p_0,(void *)work_a_2270315936_3852387523_p_1};
	xsi_register_didat("work_a_2270315936_3852387523", "isim/TLTEST_isim_beh.exe.sim/work/a_2270315936_3852387523.didat");
	xsi_register_executes(pe);
}
