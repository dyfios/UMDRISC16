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
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/ProjectLab1/ProgramCounter.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1007874614_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4376);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 9U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4280);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1007874614_3212880686_p_1(char *t0)
{
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6884U);
    t5 = (t0 + 2728U);
    t6 = *((char **)t5);
    t5 = (t0 + 6868U);
    t3 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4296);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 6953);
    t6 = (t0 + 4440);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 6962);
    t9 = (t0 + 4440);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t16 = *((unsigned char *)t6);
    t17 = (t16 == (unsigned char)3);
    if (t17 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6884U);
    t5 = (t0 + 2608U);
    t6 = *((char **)t5);
    t5 = (t0 + 6852U);
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t18, t2, t1, t6, t5);
    t8 = (t18 + 12U);
    t19 = *((unsigned int *)t8);
    t20 = (1U * t19);
    t3 = (9U != t20);
    if (t3 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 4440);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 9U);
    xsi_driver_first_trans_fast(t9);

LAB16:
LAB13:    goto LAB3;

LAB9:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t14 = *((unsigned char *)t5);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB11;

LAB12:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t2 = (t0 + 4440);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 9U);
    xsi_driver_first_trans_fast(t2);
    goto LAB13;

LAB15:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 6884U);
    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t6 = (t0 + 6820U);
    t8 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t18, t5, t1, t7, t6);
    t9 = (t18 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t14 = (9U != t20);
    if (t14 == 1)
        goto LAB18;

LAB19:    t10 = (t0 + 4440);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t21 = *((char **)t13);
    memcpy(t21, t8, 9U);
    xsi_driver_first_trans_fast(t10);
    goto LAB16;

LAB18:    xsi_size_not_matching(9U, t20, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(9U, t20, 0);
    goto LAB21;

}


extern void work_a_1007874614_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1007874614_3212880686_p_0,(void *)work_a_1007874614_3212880686_p_1};
	xsi_register_didat("work_a_1007874614_3212880686", "isim/TLTEST_isim_beh.exe.sim/work/a_1007874614_3212880686.didat");
	xsi_register_executes(pe);
}
