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
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/UMDRISC16/GenPurposeRegBank.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_4211215617_3212880686_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 992U);
    t4 = xsi_signal_has_event(t3);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 4520);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 2792U);
    t12 = *((char **)t5);
    t5 = (t0 + 1672U);
    t13 = *((char **)t5);
    t5 = (t0 + 7528U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t13, t5);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t14);
    t17 = (16U * t16);
    t18 = (0 + t17);
    t19 = (t12 + t18);
    t20 = (t0 + 4616);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t19, 16U);
    xsi_driver_first_trans_fast_port(t20);
    xsi_set_current_line(36, ng0);
    t3 = (t0 + 2792U);
    t5 = *((char **)t3);
    t3 = (t0 + 1832U);
    t6 = *((char **)t3);
    t3 = (t0 + 7544U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t3);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t14);
    t17 = (16U * t16);
    t18 = (0 + t17);
    t9 = (t5 + t18);
    t12 = (t0 + 4680);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB3;

LAB5:    t5 = (t0 + 1512U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t2 = t8;
    goto LAB10;

}

static void work_a_4211215617_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    int t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t15 = xsi_signal_has_event(t1);
    if (t15 == 1)
        goto LAB15;

LAB16:    t8 = (unsigned char)0;

LAB17:    if (t8 == 1)
        goto LAB12;

LAB13:    t4 = (unsigned char)0;

LAB14:    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4536);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t1 = xsi_get_transient_memory(256U);
    memset(t1, 0, 256U);
    t5 = t1;
    t6 = (16U * 1U);
    t7 = t5;
    memset(t7, (unsigned char)2, t6);
    t8 = (t6 != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 4744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 256U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t9 = (256U / t6);
    xsi_mem_set_data(t5, t5, t6, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2152U);
    t11 = *((char **)t2);
    t2 = (t0 + 1992U);
    t12 = *((char **)t2);
    t2 = (t0 + 7560U);
    t22 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t12, t2);
    t23 = (t22 - 0);
    t6 = (t23 * 1);
    t9 = (16U * t6);
    t24 = (0U + t9);
    t13 = (t0 + 4744);
    t14 = (t13 + 56U);
    t25 = *((char **)t14);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t11, 16U);
    xsi_driver_first_trans_delta(t13, t24, 16U, 0LL);
    goto LAB3;

LAB9:    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t20 = *((unsigned char *)t10);
    t21 = (t20 == (unsigned char)3);
    t3 = t21;
    goto LAB11;

LAB12:    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t18 = *((unsigned char *)t7);
    t19 = (t18 == (unsigned char)3);
    t4 = t19;
    goto LAB14;

LAB15:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)3);
    t8 = t17;
    goto LAB17;

}


extern void work_a_4211215617_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4211215617_3212880686_p_0,(void *)work_a_4211215617_3212880686_p_1};
	xsi_register_didat("work_a_4211215617_3212880686", "isim/TLTEST_isim_beh.exe.sim/work/a_4211215617_3212880686.didat");
	xsi_register_executes(pe);
}
