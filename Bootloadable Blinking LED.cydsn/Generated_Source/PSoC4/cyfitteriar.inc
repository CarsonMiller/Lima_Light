#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* Red */
Red__0__DM__MASK EQU 0x1C0000
Red__0__DM__SHIFT EQU 18
Red__0__DR EQU CYREG_PRT1_DR
Red__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Red__0__HSIOM_MASK EQU 0x0F000000
Red__0__HSIOM_SHIFT EQU 24
Red__0__INTCFG EQU CYREG_PRT1_INTCFG
Red__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Red__0__MASK EQU 0x40
Red__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
Red__0__OUT_SEL_SHIFT EQU 12
Red__0__OUT_SEL_VAL EQU 0
Red__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Red__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Red__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Red__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Red__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Red__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Red__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Red__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Red__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Red__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Red__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Red__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Red__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Red__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Red__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Red__0__PC EQU CYREG_PRT1_PC
Red__0__PC2 EQU CYREG_PRT1_PC2
Red__0__PORT EQU 1
Red__0__PS EQU CYREG_PRT1_PS
Red__0__SHIFT EQU 6
Red__DR EQU CYREG_PRT1_DR
Red__INTCFG EQU CYREG_PRT1_INTCFG
Red__INTSTAT EQU CYREG_PRT1_INTSTAT
Red__MASK EQU 0x40
Red__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Red__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Red__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Red__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Red__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Red__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Red__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Red__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Red__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Red__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Red__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Red__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Red__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Red__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Red__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Red__PC EQU CYREG_PRT1_PC
Red__PC2 EQU CYREG_PRT1_PC2
Red__PORT EQU 1
Red__PS EQU CYREG_PRT1_PS
Red__SHIFT EQU 6

/* Blue */
Blue__0__DM__MASK EQU 0x7000
Blue__0__DM__SHIFT EQU 12
Blue__0__DR EQU CYREG_PRT1_DR
Blue__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Blue__0__HSIOM_MASK EQU 0x000F0000
Blue__0__HSIOM_SHIFT EQU 16
Blue__0__INTCFG EQU CYREG_PRT1_INTCFG
Blue__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Blue__0__MASK EQU 0x10
Blue__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
Blue__0__OUT_SEL_SHIFT EQU 8
Blue__0__OUT_SEL_VAL EQU 3
Blue__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Blue__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Blue__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Blue__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Blue__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Blue__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Blue__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Blue__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Blue__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Blue__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Blue__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Blue__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Blue__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Blue__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Blue__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Blue__0__PC EQU CYREG_PRT1_PC
Blue__0__PC2 EQU CYREG_PRT1_PC2
Blue__0__PORT EQU 1
Blue__0__PS EQU CYREG_PRT1_PS
Blue__0__SHIFT EQU 4
Blue__DR EQU CYREG_PRT1_DR
Blue__INTCFG EQU CYREG_PRT1_INTCFG
Blue__INTSTAT EQU CYREG_PRT1_INTSTAT
Blue__MASK EQU 0x10
Blue__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Blue__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Blue__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Blue__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Blue__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Blue__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Blue__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Blue__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Blue__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Blue__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Blue__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Blue__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Blue__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Blue__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Blue__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Blue__PC EQU CYREG_PRT1_PC
Blue__PC2 EQU CYREG_PRT1_PC2
Blue__PORT EQU 1
Blue__PS EQU CYREG_PRT1_PS
Blue__SHIFT EQU 4

/* Green */
Green__0__DM__MASK EQU 0x38
Green__0__DM__SHIFT EQU 3
Green__0__DR EQU CYREG_PRT2_DR
Green__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Green__0__HSIOM_MASK EQU 0x000000F0
Green__0__HSIOM_SHIFT EQU 4
Green__0__INTCFG EQU CYREG_PRT2_INTCFG
Green__0__INTSTAT EQU CYREG_PRT2_INTSTAT
Green__0__MASK EQU 0x02
Green__0__OUT_SEL EQU CYREG_UDB_PA2_CFG10
Green__0__OUT_SEL_SHIFT EQU 2
Green__0__OUT_SEL_VAL EQU 1
Green__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Green__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Green__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Green__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Green__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Green__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Green__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Green__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Green__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Green__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Green__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Green__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Green__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Green__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Green__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Green__0__PC EQU CYREG_PRT2_PC
Green__0__PC2 EQU CYREG_PRT2_PC2
Green__0__PORT EQU 2
Green__0__PS EQU CYREG_PRT2_PS
Green__0__SHIFT EQU 1
Green__DR EQU CYREG_PRT2_DR
Green__INTCFG EQU CYREG_PRT2_INTCFG
Green__INTSTAT EQU CYREG_PRT2_INTSTAT
Green__MASK EQU 0x02
Green__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Green__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Green__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Green__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Green__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Green__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Green__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Green__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Green__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Green__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Green__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Green__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Green__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Green__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Green__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Green__PC EQU CYREG_PRT2_PC
Green__PC2 EQU CYREG_PRT2_PC2
Green__PORT EQU 2
Green__PS EQU CYREG_PRT2_PS
Green__SHIFT EQU 1

/* White */
White__0__DM__MASK EQU 0xE00000
White__0__DM__SHIFT EQU 21
White__0__DR EQU CYREG_PRT1_DR
White__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
White__0__HSIOM_MASK EQU 0xF0000000
White__0__HSIOM_SHIFT EQU 28
White__0__INTCFG EQU CYREG_PRT1_INTCFG
White__0__INTSTAT EQU CYREG_PRT1_INTSTAT
White__0__MASK EQU 0x80
White__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
White__0__OUT_SEL_SHIFT EQU 14
White__0__OUT_SEL_VAL EQU 1
White__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
White__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
White__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
White__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
White__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
White__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
White__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
White__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
White__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
White__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
White__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
White__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
White__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
White__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
White__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
White__0__PC EQU CYREG_PRT1_PC
White__0__PC2 EQU CYREG_PRT1_PC2
White__0__PORT EQU 1
White__0__PS EQU CYREG_PRT1_PS
White__0__SHIFT EQU 7
White__DR EQU CYREG_PRT1_DR
White__INTCFG EQU CYREG_PRT1_INTCFG
White__INTSTAT EQU CYREG_PRT1_INTSTAT
White__MASK EQU 0x80
White__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
White__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
White__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
White__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
White__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
White__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
White__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
White__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
White__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
White__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
White__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
White__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
White__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
White__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
White__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
White__PC EQU CYREG_PRT1_PC
White__PC2 EQU CYREG_PRT1_PC2
White__PORT EQU 1
White__PS EQU CYREG_PRT1_PS
White__SHIFT EQU 7

/* Yellow */
Yellow__0__DM__MASK EQU 0xE00
Yellow__0__DM__SHIFT EQU 9
Yellow__0__DR EQU CYREG_PRT2_DR
Yellow__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Yellow__0__HSIOM_MASK EQU 0x0000F000
Yellow__0__HSIOM_SHIFT EQU 12
Yellow__0__INTCFG EQU CYREG_PRT2_INTCFG
Yellow__0__INTSTAT EQU CYREG_PRT2_INTSTAT
Yellow__0__MASK EQU 0x08
Yellow__0__OUT_SEL EQU CYREG_UDB_PA2_CFG10
Yellow__0__OUT_SEL_SHIFT EQU 6
Yellow__0__OUT_SEL_VAL EQU 2
Yellow__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Yellow__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Yellow__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Yellow__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Yellow__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Yellow__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Yellow__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Yellow__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Yellow__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Yellow__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Yellow__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Yellow__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Yellow__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Yellow__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Yellow__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Yellow__0__PC EQU CYREG_PRT2_PC
Yellow__0__PC2 EQU CYREG_PRT2_PC2
Yellow__0__PORT EQU 2
Yellow__0__PS EQU CYREG_PRT2_PS
Yellow__0__SHIFT EQU 3
Yellow__DR EQU CYREG_PRT2_DR
Yellow__INTCFG EQU CYREG_PRT2_INTCFG
Yellow__INTSTAT EQU CYREG_PRT2_INTSTAT
Yellow__MASK EQU 0x08
Yellow__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Yellow__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Yellow__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Yellow__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Yellow__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Yellow__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Yellow__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Yellow__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Yellow__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Yellow__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Yellow__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Yellow__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Yellow__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Yellow__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Yellow__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Yellow__PC EQU CYREG_PRT2_PC
Yellow__PC2 EQU CYREG_PRT2_PC2
Yellow__PORT EQU 2
Yellow__PS EQU CYREG_PRT2_PS
Yellow__SHIFT EQU 3

/* Clock_1 */
Clock_1__DIVIDER_MASK EQU 0x0000FFFF
Clock_1__ENABLE EQU CYREG_CLK_DIVIDER_C00
Clock_1__ENABLE_MASK EQU 0x80000000
Clock_1__MASK EQU 0x80000000
Clock_1__REGISTER EQU CYREG_CLK_DIVIDER_C00

/* Clock_2 */
Clock_2__DIVIDER_MASK EQU 0x0000FFFF
Clock_2__ENABLE EQU CYREG_CLK_DIVIDER_B00
Clock_2__ENABLE_MASK EQU 0x80000000
Clock_2__MASK EQU 0x80000000
Clock_2__REGISTER EQU CYREG_CLK_DIVIDER_B00

/* Clock_3 */
Clock_3__DIVIDER_MASK EQU 0x0000FFFF
Clock_3__ENABLE EQU CYREG_CLK_DIVIDER_A00
Clock_3__ENABLE_MASK EQU 0x80000000
Clock_3__MASK EQU 0x80000000
Clock_3__REGISTER EQU CYREG_CLK_DIVIDER_A00

/* PWM_Red_PWMUDB */
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK_02
PWM_Red_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
PWM_Red_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_Red_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_Red_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_UDB_W8_CTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
PWM_Red_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_UDB_W8_CTL_02
PWM_Red_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
PWM_Red_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_Red_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Red_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Red_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_UDB_W8_MSK_02
PWM_Red_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_Red_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_Red_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
PWM_Red_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_02
PWM_Red_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_Red_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_Red_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_Red_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_Red_PWMUDB_genblk8_stsreg__5__MASK EQU 0x20
PWM_Red_PWMUDB_genblk8_stsreg__5__POS EQU 5
PWM_Red_PWMUDB_genblk8_stsreg__MASK EQU 0x2D
PWM_Red_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK_02
PWM_Red_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Red_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Red_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
PWM_Red_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST_02
PWM_Red_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST_02
PWM_Red_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A0_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A1_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D0_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D1_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F0_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F1_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_UDB_W8_A0_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_UDB_W8_A1_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_UDB_W8_D0_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_UDB_W8_D1_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_UDB_W8_F0_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_UDB_W8_F1_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Red_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02

/* PWM_BlueWhite_PWMUDB */
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__32BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__32BIT_CONTROL_REG EQU CYREG_UDB_W32_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__32BIT_COUNT_REG EQU CYREG_UDB_W32_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__32BIT_PERIOD_REG EQU CYREG_UDB_W32_MSK_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_UDB_W8_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_UDB_W8_CTL_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00
PWM_BlueWhite_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_UDB_W8_MSK_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_BlueWhite_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_BlueWhite_PWMUDB_genblk8_stsreg__1__MASK EQU 0x02
PWM_BlueWhite_PWMUDB_genblk8_stsreg__1__POS EQU 1
PWM_BlueWhite_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_BlueWhite_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_BlueWhite_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_BlueWhite_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_BlueWhite_PWMUDB_genblk8_stsreg__32BIT_MASK_REG EQU CYREG_UDB_W32_MSK_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__32BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__32BIT_STATUS_REG EQU CYREG_UDB_W32_ST_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__5__MASK EQU 0x20
PWM_BlueWhite_PWMUDB_genblk8_stsreg__5__POS EQU 5
PWM_BlueWhite_PWMUDB_genblk8_stsreg__MASK EQU 0x2F
PWM_BlueWhite_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST_00
PWM_BlueWhite_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__32BIT_A0_REG EQU CYREG_UDB_W32_A0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__32BIT_A1_REG EQU CYREG_UDB_W32_A1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__32BIT_D0_REG EQU CYREG_UDB_W32_D0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__32BIT_D1_REG EQU CYREG_UDB_W32_D1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__32BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__32BIT_F0_REG EQU CYREG_UDB_W32_F0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__32BIT_F1_REG EQU CYREG_UDB_W32_F1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_UDB_W8_A0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_UDB_W8_A1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_UDB_W8_D0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_UDB_W8_D1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_UDB_W8_F0_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_UDB_W8_F1_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00
PWM_BlueWhite_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00

/* PWM_GreenYellow_PWMUDB */
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_UDB_W8_CTL_03
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_03
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_UDB_W8_CTL_03
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_03
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
PWM_GreenYellow_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_UDB_W8_MSK_03
PWM_GreenYellow_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_GreenYellow_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_GreenYellow_PWMUDB_genblk8_stsreg__1__MASK EQU 0x02
PWM_GreenYellow_PWMUDB_genblk8_stsreg__1__POS EQU 1
PWM_GreenYellow_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_GreenYellow_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_GreenYellow_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_GreenYellow_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_GreenYellow_PWMUDB_genblk8_stsreg__5__MASK EQU 0x20
PWM_GreenYellow_PWMUDB_genblk8_stsreg__5__POS EQU 5
PWM_GreenYellow_PWMUDB_genblk8_stsreg__MASK EQU 0x2F
PWM_GreenYellow_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK_03
PWM_GreenYellow_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
PWM_GreenYellow_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
PWM_GreenYellow_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
PWM_GreenYellow_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST_03
PWM_GreenYellow_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST_03
PWM_GreenYellow_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_UDB_W8_A0_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_UDB_W8_A1_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_UDB_W8_D0_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_UDB_W8_D1_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_UDB_W8_F0_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_UDB_W8_F1_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
PWM_GreenYellow_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 3000000
CYDEV_BCLK__HFCLK__KHZ EQU 3000
CYDEV_BCLK__HFCLK__MHZ EQU 3
CYDEV_BCLK__SYSCLK__HZ EQU 3000000
CYDEV_BCLK__SYSCLK__KHZ EQU 3000
CYDEV_BCLK__SYSCLK__MHZ EQU 3
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 4
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_PSOC5LP EQU 5
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_MEMBER_4D EQU 3
CYDEV_CHIP_MEMBER_5A EQU 4
CYDEV_CHIP_MEMBER_5B EQU 5
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_ES0 EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_HEAP_SIZE EQU 0x0100
CYDEV_PROJ_TYPE EQU 2
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
