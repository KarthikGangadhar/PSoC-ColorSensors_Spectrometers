/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* I2C */
.set I2C_I2C_FF__ADR, CYREG_I2C_ADR
.set I2C_I2C_FF__CFG, CYREG_I2C_CFG
.set I2C_I2C_FF__CLK_DIV1, CYREG_I2C_CLK_DIV1
.set I2C_I2C_FF__CLK_DIV2, CYREG_I2C_CLK_DIV2
.set I2C_I2C_FF__CSR, CYREG_I2C_CSR
.set I2C_I2C_FF__D, CYREG_I2C_D
.set I2C_I2C_FF__MCSR, CYREG_I2C_MCSR
.set I2C_I2C_FF__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set I2C_I2C_FF__PM_ACT_MSK, 0x04
.set I2C_I2C_FF__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set I2C_I2C_FF__PM_STBY_MSK, 0x04
.set I2C_I2C_FF__TMOUT_CFG0, CYREG_I2C_TMOUT_CFG0
.set I2C_I2C_FF__TMOUT_CFG1, CYREG_I2C_TMOUT_CFG1
.set I2C_I2C_FF__TMOUT_CSR, CYREG_I2C_TMOUT_CSR
.set I2C_I2C_FF__TMOUT_SR, CYREG_I2C_TMOUT_SR
.set I2C_I2C_FF__XCFG, CYREG_I2C_XCFG
.set I2C_I2C_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set I2C_I2C_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set I2C_I2C_IRQ__INTC_MASK, 0x8000
.set I2C_I2C_IRQ__INTC_NUMBER, 15
.set I2C_I2C_IRQ__INTC_PRIOR_NUM, 7
.set I2C_I2C_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_15
.set I2C_I2C_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set I2C_I2C_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* LCD */
.set LCD_LCDPort__0__INTTYPE, CYREG_PICU2_INTTYPE0
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_LCDPort__0__PORT, 2
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__INTTYPE, CYREG_PICU2_INTTYPE1
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_LCDPort__1__PORT, 2
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__INTTYPE, CYREG_PICU2_INTTYPE2
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_LCDPort__2__PORT, 2
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__INTTYPE, CYREG_PICU2_INTTYPE3
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_LCDPort__3__PORT, 2
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__INTTYPE, CYREG_PICU2_INTTYPE4
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_LCDPort__4__PORT, 2
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__INTTYPE, CYREG_PICU2_INTTYPE5
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_LCDPort__5__PORT, 2
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__INTTYPE, CYREG_PICU2_INTTYPE6
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_LCDPort__6__PORT, 2
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT2_AG
.set LCD_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_LCDPort__DR, CYREG_PRT2_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LCD_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 2
.set LCD_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT2_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SLW, CYREG_PRT2_SLW

/* SCL */
.set SCL__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set SCL__0__MASK, 0x10
.set SCL__0__PC, CYREG_PRT12_PC4
.set SCL__0__PORT, 12
.set SCL__0__SHIFT, 4
.set SCL__AG, CYREG_PRT12_AG
.set SCL__BIE, CYREG_PRT12_BIE
.set SCL__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SCL__BYP, CYREG_PRT12_BYP
.set SCL__DM0, CYREG_PRT12_DM0
.set SCL__DM1, CYREG_PRT12_DM1
.set SCL__DM2, CYREG_PRT12_DM2
.set SCL__DR, CYREG_PRT12_DR
.set SCL__INP_DIS, CYREG_PRT12_INP_DIS
.set SCL__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SCL__MASK, 0x10
.set SCL__PORT, 12
.set SCL__PRT, CYREG_PRT12_PRT
.set SCL__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SCL__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SCL__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SCL__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SCL__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SCL__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SCL__PS, CYREG_PRT12_PS
.set SCL__SHIFT, 4
.set SCL__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SCL__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SCL__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SCL__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SCL__SLW, CYREG_PRT12_SLW

/* SDA */
.set SDA__0__INTTYPE, CYREG_PICU12_INTTYPE5
.set SDA__0__MASK, 0x20
.set SDA__0__PC, CYREG_PRT12_PC5
.set SDA__0__PORT, 12
.set SDA__0__SHIFT, 5
.set SDA__AG, CYREG_PRT12_AG
.set SDA__BIE, CYREG_PRT12_BIE
.set SDA__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SDA__BYP, CYREG_PRT12_BYP
.set SDA__DM0, CYREG_PRT12_DM0
.set SDA__DM1, CYREG_PRT12_DM1
.set SDA__DM2, CYREG_PRT12_DM2
.set SDA__DR, CYREG_PRT12_DR
.set SDA__INP_DIS, CYREG_PRT12_INP_DIS
.set SDA__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SDA__MASK, 0x20
.set SDA__PORT, 12
.set SDA__PRT, CYREG_PRT12_PRT
.set SDA__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SDA__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SDA__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SDA__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SDA__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SDA__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SDA__PS, CYREG_PRT12_PS
.set SDA__SHIFT, 5
.set SDA__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SDA__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SDA__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SDA__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SDA__SLW, CYREG_PRT12_SLW

/* LED_3 */
.set LED_3__0__INTTYPE, CYREG_PICU6_INTTYPE2
.set LED_3__0__MASK, 0x04
.set LED_3__0__PC, CYREG_PRT6_PC2
.set LED_3__0__PORT, 6
.set LED_3__0__SHIFT, 2
.set LED_3__AG, CYREG_PRT6_AG
.set LED_3__AMUX, CYREG_PRT6_AMUX
.set LED_3__BIE, CYREG_PRT6_BIE
.set LED_3__BIT_MASK, CYREG_PRT6_BIT_MASK
.set LED_3__BYP, CYREG_PRT6_BYP
.set LED_3__CTL, CYREG_PRT6_CTL
.set LED_3__DM0, CYREG_PRT6_DM0
.set LED_3__DM1, CYREG_PRT6_DM1
.set LED_3__DM2, CYREG_PRT6_DM2
.set LED_3__DR, CYREG_PRT6_DR
.set LED_3__INP_DIS, CYREG_PRT6_INP_DIS
.set LED_3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU6_BASE
.set LED_3__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set LED_3__LCD_EN, CYREG_PRT6_LCD_EN
.set LED_3__MASK, 0x04
.set LED_3__PORT, 6
.set LED_3__PRT, CYREG_PRT6_PRT
.set LED_3__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set LED_3__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set LED_3__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set LED_3__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set LED_3__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set LED_3__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set LED_3__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set LED_3__PS, CYREG_PRT6_PS
.set LED_3__SHIFT, 2
.set LED_3__SLW, CYREG_PRT6_SLW

/* LED_4 */
.set LED_4__0__INTTYPE, CYREG_PICU6_INTTYPE3
.set LED_4__0__MASK, 0x08
.set LED_4__0__PC, CYREG_PRT6_PC3
.set LED_4__0__PORT, 6
.set LED_4__0__SHIFT, 3
.set LED_4__AG, CYREG_PRT6_AG
.set LED_4__AMUX, CYREG_PRT6_AMUX
.set LED_4__BIE, CYREG_PRT6_BIE
.set LED_4__BIT_MASK, CYREG_PRT6_BIT_MASK
.set LED_4__BYP, CYREG_PRT6_BYP
.set LED_4__CTL, CYREG_PRT6_CTL
.set LED_4__DM0, CYREG_PRT6_DM0
.set LED_4__DM1, CYREG_PRT6_DM1
.set LED_4__DM2, CYREG_PRT6_DM2
.set LED_4__DR, CYREG_PRT6_DR
.set LED_4__INP_DIS, CYREG_PRT6_INP_DIS
.set LED_4__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU6_BASE
.set LED_4__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set LED_4__LCD_EN, CYREG_PRT6_LCD_EN
.set LED_4__MASK, 0x08
.set LED_4__PORT, 6
.set LED_4__PRT, CYREG_PRT6_PRT
.set LED_4__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set LED_4__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set LED_4__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set LED_4__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set LED_4__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set LED_4__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set LED_4__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set LED_4__PS, CYREG_PRT6_PS
.set LED_4__SHIFT, 3
.set LED_4__SLW, CYREG_PRT6_SLW

/* USBFS */
.set USBFS_arb_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_arb_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_arb_int__INTC_MASK, 0x400000
.set USBFS_arb_int__INTC_NUMBER, 22
.set USBFS_arb_int__INTC_PRIOR_NUM, 7
.set USBFS_arb_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_22
.set USBFS_arb_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_arb_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBFS_bus_reset__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_bus_reset__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_bus_reset__INTC_MASK, 0x800000
.set USBFS_bus_reset__INTC_NUMBER, 23
.set USBFS_bus_reset__INTC_PRIOR_NUM, 7
.set USBFS_bus_reset__INTC_PRIOR_REG, CYREG_NVIC_PRI_23
.set USBFS_bus_reset__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_bus_reset__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBFS_Dm__0__INTTYPE, CYREG_PICU15_INTTYPE7
.set USBFS_Dm__0__MASK, 0x80
.set USBFS_Dm__0__PC, CYREG_IO_PC_PRT15_7_6_PC1
.set USBFS_Dm__0__PORT, 15
.set USBFS_Dm__0__SHIFT, 7
.set USBFS_Dm__AG, CYREG_PRT15_AG
.set USBFS_Dm__AMUX, CYREG_PRT15_AMUX
.set USBFS_Dm__BIE, CYREG_PRT15_BIE
.set USBFS_Dm__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBFS_Dm__BYP, CYREG_PRT15_BYP
.set USBFS_Dm__CTL, CYREG_PRT15_CTL
.set USBFS_Dm__DM0, CYREG_PRT15_DM0
.set USBFS_Dm__DM1, CYREG_PRT15_DM1
.set USBFS_Dm__DM2, CYREG_PRT15_DM2
.set USBFS_Dm__DR, CYREG_PRT15_DR
.set USBFS_Dm__INP_DIS, CYREG_PRT15_INP_DIS
.set USBFS_Dm__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set USBFS_Dm__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBFS_Dm__LCD_EN, CYREG_PRT15_LCD_EN
.set USBFS_Dm__MASK, 0x80
.set USBFS_Dm__PORT, 15
.set USBFS_Dm__PRT, CYREG_PRT15_PRT
.set USBFS_Dm__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBFS_Dm__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBFS_Dm__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBFS_Dm__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBFS_Dm__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBFS_Dm__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBFS_Dm__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBFS_Dm__PS, CYREG_PRT15_PS
.set USBFS_Dm__SHIFT, 7
.set USBFS_Dm__SLW, CYREG_PRT15_SLW
.set USBFS_Dp__0__INTTYPE, CYREG_PICU15_INTTYPE6
.set USBFS_Dp__0__MASK, 0x40
.set USBFS_Dp__0__PC, CYREG_IO_PC_PRT15_7_6_PC0
.set USBFS_Dp__0__PORT, 15
.set USBFS_Dp__0__SHIFT, 6
.set USBFS_Dp__AG, CYREG_PRT15_AG
.set USBFS_Dp__AMUX, CYREG_PRT15_AMUX
.set USBFS_Dp__BIE, CYREG_PRT15_BIE
.set USBFS_Dp__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBFS_Dp__BYP, CYREG_PRT15_BYP
.set USBFS_Dp__CTL, CYREG_PRT15_CTL
.set USBFS_Dp__DM0, CYREG_PRT15_DM0
.set USBFS_Dp__DM1, CYREG_PRT15_DM1
.set USBFS_Dp__DM2, CYREG_PRT15_DM2
.set USBFS_Dp__DR, CYREG_PRT15_DR
.set USBFS_Dp__INP_DIS, CYREG_PRT15_INP_DIS
.set USBFS_Dp__INTSTAT, CYREG_PICU15_INTSTAT
.set USBFS_Dp__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set USBFS_Dp__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBFS_Dp__LCD_EN, CYREG_PRT15_LCD_EN
.set USBFS_Dp__MASK, 0x40
.set USBFS_Dp__PORT, 15
.set USBFS_Dp__PRT, CYREG_PRT15_PRT
.set USBFS_Dp__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBFS_Dp__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBFS_Dp__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBFS_Dp__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBFS_Dp__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBFS_Dp__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBFS_Dp__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBFS_Dp__PS, CYREG_PRT15_PS
.set USBFS_Dp__SHIFT, 6
.set USBFS_Dp__SLW, CYREG_PRT15_SLW
.set USBFS_Dp__SNAP, CYREG_PICU_15_SNAP_15
.set USBFS_dp_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_dp_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_dp_int__INTC_MASK, 0x1000
.set USBFS_dp_int__INTC_NUMBER, 12
.set USBFS_dp_int__INTC_PRIOR_NUM, 7
.set USBFS_dp_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_12
.set USBFS_dp_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_dp_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBFS_ep_0__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_ep_0__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_ep_0__INTC_MASK, 0x1000000
.set USBFS_ep_0__INTC_NUMBER, 24
.set USBFS_ep_0__INTC_PRIOR_NUM, 7
.set USBFS_ep_0__INTC_PRIOR_REG, CYREG_NVIC_PRI_24
.set USBFS_ep_0__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_ep_0__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBFS_ep_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_ep_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_ep_1__INTC_MASK, 0x01
.set USBFS_ep_1__INTC_NUMBER, 0
.set USBFS_ep_1__INTC_PRIOR_NUM, 7
.set USBFS_ep_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set USBFS_ep_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_ep_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBFS_ep_2__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_ep_2__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_ep_2__INTC_MASK, 0x02
.set USBFS_ep_2__INTC_NUMBER, 1
.set USBFS_ep_2__INTC_PRIOR_NUM, 7
.set USBFS_ep_2__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set USBFS_ep_2__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_ep_2__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBFS_USB__ARB_CFG, CYREG_USB_ARB_CFG
.set USBFS_USB__ARB_EP1_CFG, CYREG_USB_ARB_EP1_CFG
.set USBFS_USB__ARB_EP1_INT_EN, CYREG_USB_ARB_EP1_INT_EN
.set USBFS_USB__ARB_EP1_SR, CYREG_USB_ARB_EP1_SR
.set USBFS_USB__ARB_EP2_CFG, CYREG_USB_ARB_EP2_CFG
.set USBFS_USB__ARB_EP2_INT_EN, CYREG_USB_ARB_EP2_INT_EN
.set USBFS_USB__ARB_EP2_SR, CYREG_USB_ARB_EP2_SR
.set USBFS_USB__ARB_EP3_CFG, CYREG_USB_ARB_EP3_CFG
.set USBFS_USB__ARB_EP3_INT_EN, CYREG_USB_ARB_EP3_INT_EN
.set USBFS_USB__ARB_EP3_SR, CYREG_USB_ARB_EP3_SR
.set USBFS_USB__ARB_EP4_CFG, CYREG_USB_ARB_EP4_CFG
.set USBFS_USB__ARB_EP4_INT_EN, CYREG_USB_ARB_EP4_INT_EN
.set USBFS_USB__ARB_EP4_SR, CYREG_USB_ARB_EP4_SR
.set USBFS_USB__ARB_EP5_CFG, CYREG_USB_ARB_EP5_CFG
.set USBFS_USB__ARB_EP5_INT_EN, CYREG_USB_ARB_EP5_INT_EN
.set USBFS_USB__ARB_EP5_SR, CYREG_USB_ARB_EP5_SR
.set USBFS_USB__ARB_EP6_CFG, CYREG_USB_ARB_EP6_CFG
.set USBFS_USB__ARB_EP6_INT_EN, CYREG_USB_ARB_EP6_INT_EN
.set USBFS_USB__ARB_EP6_SR, CYREG_USB_ARB_EP6_SR
.set USBFS_USB__ARB_EP7_CFG, CYREG_USB_ARB_EP7_CFG
.set USBFS_USB__ARB_EP7_INT_EN, CYREG_USB_ARB_EP7_INT_EN
.set USBFS_USB__ARB_EP7_SR, CYREG_USB_ARB_EP7_SR
.set USBFS_USB__ARB_EP8_CFG, CYREG_USB_ARB_EP8_CFG
.set USBFS_USB__ARB_EP8_INT_EN, CYREG_USB_ARB_EP8_INT_EN
.set USBFS_USB__ARB_EP8_SR, CYREG_USB_ARB_EP8_SR
.set USBFS_USB__ARB_INT_EN, CYREG_USB_ARB_INT_EN
.set USBFS_USB__ARB_INT_SR, CYREG_USB_ARB_INT_SR
.set USBFS_USB__ARB_RW1_DR, CYREG_USB_ARB_RW1_DR
.set USBFS_USB__ARB_RW1_RA, CYREG_USB_ARB_RW1_RA
.set USBFS_USB__ARB_RW1_RA_MSB, CYREG_USB_ARB_RW1_RA_MSB
.set USBFS_USB__ARB_RW1_WA, CYREG_USB_ARB_RW1_WA
.set USBFS_USB__ARB_RW1_WA_MSB, CYREG_USB_ARB_RW1_WA_MSB
.set USBFS_USB__ARB_RW2_DR, CYREG_USB_ARB_RW2_DR
.set USBFS_USB__ARB_RW2_RA, CYREG_USB_ARB_RW2_RA
.set USBFS_USB__ARB_RW2_RA_MSB, CYREG_USB_ARB_RW2_RA_MSB
.set USBFS_USB__ARB_RW2_WA, CYREG_USB_ARB_RW2_WA
.set USBFS_USB__ARB_RW2_WA_MSB, CYREG_USB_ARB_RW2_WA_MSB
.set USBFS_USB__ARB_RW3_DR, CYREG_USB_ARB_RW3_DR
.set USBFS_USB__ARB_RW3_RA, CYREG_USB_ARB_RW3_RA
.set USBFS_USB__ARB_RW3_RA_MSB, CYREG_USB_ARB_RW3_RA_MSB
.set USBFS_USB__ARB_RW3_WA, CYREG_USB_ARB_RW3_WA
.set USBFS_USB__ARB_RW3_WA_MSB, CYREG_USB_ARB_RW3_WA_MSB
.set USBFS_USB__ARB_RW4_DR, CYREG_USB_ARB_RW4_DR
.set USBFS_USB__ARB_RW4_RA, CYREG_USB_ARB_RW4_RA
.set USBFS_USB__ARB_RW4_RA_MSB, CYREG_USB_ARB_RW4_RA_MSB
.set USBFS_USB__ARB_RW4_WA, CYREG_USB_ARB_RW4_WA
.set USBFS_USB__ARB_RW4_WA_MSB, CYREG_USB_ARB_RW4_WA_MSB
.set USBFS_USB__ARB_RW5_DR, CYREG_USB_ARB_RW5_DR
.set USBFS_USB__ARB_RW5_RA, CYREG_USB_ARB_RW5_RA
.set USBFS_USB__ARB_RW5_RA_MSB, CYREG_USB_ARB_RW5_RA_MSB
.set USBFS_USB__ARB_RW5_WA, CYREG_USB_ARB_RW5_WA
.set USBFS_USB__ARB_RW5_WA_MSB, CYREG_USB_ARB_RW5_WA_MSB
.set USBFS_USB__ARB_RW6_DR, CYREG_USB_ARB_RW6_DR
.set USBFS_USB__ARB_RW6_RA, CYREG_USB_ARB_RW6_RA
.set USBFS_USB__ARB_RW6_RA_MSB, CYREG_USB_ARB_RW6_RA_MSB
.set USBFS_USB__ARB_RW6_WA, CYREG_USB_ARB_RW6_WA
.set USBFS_USB__ARB_RW6_WA_MSB, CYREG_USB_ARB_RW6_WA_MSB
.set USBFS_USB__ARB_RW7_DR, CYREG_USB_ARB_RW7_DR
.set USBFS_USB__ARB_RW7_RA, CYREG_USB_ARB_RW7_RA
.set USBFS_USB__ARB_RW7_RA_MSB, CYREG_USB_ARB_RW7_RA_MSB
.set USBFS_USB__ARB_RW7_WA, CYREG_USB_ARB_RW7_WA
.set USBFS_USB__ARB_RW7_WA_MSB, CYREG_USB_ARB_RW7_WA_MSB
.set USBFS_USB__ARB_RW8_DR, CYREG_USB_ARB_RW8_DR
.set USBFS_USB__ARB_RW8_RA, CYREG_USB_ARB_RW8_RA
.set USBFS_USB__ARB_RW8_RA_MSB, CYREG_USB_ARB_RW8_RA_MSB
.set USBFS_USB__ARB_RW8_WA, CYREG_USB_ARB_RW8_WA
.set USBFS_USB__ARB_RW8_WA_MSB, CYREG_USB_ARB_RW8_WA_MSB
.set USBFS_USB__BUF_SIZE, CYREG_USB_BUF_SIZE
.set USBFS_USB__BUS_RST_CNT, CYREG_USB_BUS_RST_CNT
.set USBFS_USB__CR0, CYREG_USB_CR0
.set USBFS_USB__CR1, CYREG_USB_CR1
.set USBFS_USB__CWA, CYREG_USB_CWA
.set USBFS_USB__CWA_MSB, CYREG_USB_CWA_MSB
.set USBFS_USB__DMA_THRES, CYREG_USB_DMA_THRES
.set USBFS_USB__DMA_THRES_MSB, CYREG_USB_DMA_THRES_MSB
.set USBFS_USB__DYN_RECONFIG, CYREG_USB_DYN_RECONFIG
.set USBFS_USB__EP_ACTIVE, CYREG_USB_EP_ACTIVE
.set USBFS_USB__EP_TYPE, CYREG_USB_EP_TYPE
.set USBFS_USB__EP0_CNT, CYREG_USB_EP0_CNT
.set USBFS_USB__EP0_CR, CYREG_USB_EP0_CR
.set USBFS_USB__EP0_DR0, CYREG_USB_EP0_DR0
.set USBFS_USB__EP0_DR1, CYREG_USB_EP0_DR1
.set USBFS_USB__EP0_DR2, CYREG_USB_EP0_DR2
.set USBFS_USB__EP0_DR3, CYREG_USB_EP0_DR3
.set USBFS_USB__EP0_DR4, CYREG_USB_EP0_DR4
.set USBFS_USB__EP0_DR5, CYREG_USB_EP0_DR5
.set USBFS_USB__EP0_DR6, CYREG_USB_EP0_DR6
.set USBFS_USB__EP0_DR7, CYREG_USB_EP0_DR7
.set USBFS_USB__MEM_DATA, CYREG_USB_MEM_DATA_MBASE
.set USBFS_USB__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set USBFS_USB__PM_ACT_MSK, 0x01
.set USBFS_USB__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set USBFS_USB__PM_STBY_MSK, 0x01
.set USBFS_USB__SIE_EP_INT_EN, CYREG_USB_SIE_EP_INT_EN
.set USBFS_USB__SIE_EP_INT_SR, CYREG_USB_SIE_EP_INT_SR
.set USBFS_USB__SIE_EP1_CNT0, CYREG_USB_SIE_EP1_CNT0
.set USBFS_USB__SIE_EP1_CNT1, CYREG_USB_SIE_EP1_CNT1
.set USBFS_USB__SIE_EP1_CR0, CYREG_USB_SIE_EP1_CR0
.set USBFS_USB__SIE_EP2_CNT0, CYREG_USB_SIE_EP2_CNT0
.set USBFS_USB__SIE_EP2_CNT1, CYREG_USB_SIE_EP2_CNT1
.set USBFS_USB__SIE_EP2_CR0, CYREG_USB_SIE_EP2_CR0
.set USBFS_USB__SIE_EP3_CNT0, CYREG_USB_SIE_EP3_CNT0
.set USBFS_USB__SIE_EP3_CNT1, CYREG_USB_SIE_EP3_CNT1
.set USBFS_USB__SIE_EP3_CR0, CYREG_USB_SIE_EP3_CR0
.set USBFS_USB__SIE_EP4_CNT0, CYREG_USB_SIE_EP4_CNT0
.set USBFS_USB__SIE_EP4_CNT1, CYREG_USB_SIE_EP4_CNT1
.set USBFS_USB__SIE_EP4_CR0, CYREG_USB_SIE_EP4_CR0
.set USBFS_USB__SIE_EP5_CNT0, CYREG_USB_SIE_EP5_CNT0
.set USBFS_USB__SIE_EP5_CNT1, CYREG_USB_SIE_EP5_CNT1
.set USBFS_USB__SIE_EP5_CR0, CYREG_USB_SIE_EP5_CR0
.set USBFS_USB__SIE_EP6_CNT0, CYREG_USB_SIE_EP6_CNT0
.set USBFS_USB__SIE_EP6_CNT1, CYREG_USB_SIE_EP6_CNT1
.set USBFS_USB__SIE_EP6_CR0, CYREG_USB_SIE_EP6_CR0
.set USBFS_USB__SIE_EP7_CNT0, CYREG_USB_SIE_EP7_CNT0
.set USBFS_USB__SIE_EP7_CNT1, CYREG_USB_SIE_EP7_CNT1
.set USBFS_USB__SIE_EP7_CR0, CYREG_USB_SIE_EP7_CR0
.set USBFS_USB__SIE_EP8_CNT0, CYREG_USB_SIE_EP8_CNT0
.set USBFS_USB__SIE_EP8_CNT1, CYREG_USB_SIE_EP8_CNT1
.set USBFS_USB__SIE_EP8_CR0, CYREG_USB_SIE_EP8_CR0
.set USBFS_USB__SOF0, CYREG_USB_SOF0
.set USBFS_USB__SOF1, CYREG_USB_SOF1
.set USBFS_USB__USB_CLK_EN, CYREG_USB_USB_CLK_EN
.set USBFS_USB__USBIO_CR0, CYREG_USB_USBIO_CR0
.set USBFS_USB__USBIO_CR1, CYREG_USB_USBIO_CR1

/* Timer_1 */
.set Timer_1_TimerHW__CAP0, CYREG_TMR0_CAP0
.set Timer_1_TimerHW__CAP1, CYREG_TMR0_CAP1
.set Timer_1_TimerHW__CFG0, CYREG_TMR0_CFG0
.set Timer_1_TimerHW__CFG1, CYREG_TMR0_CFG1
.set Timer_1_TimerHW__CFG2, CYREG_TMR0_CFG2
.set Timer_1_TimerHW__CNT_CMP0, CYREG_TMR0_CNT_CMP0
.set Timer_1_TimerHW__CNT_CMP1, CYREG_TMR0_CNT_CMP1
.set Timer_1_TimerHW__PER0, CYREG_TMR0_PER0
.set Timer_1_TimerHW__PER1, CYREG_TMR0_PER1
.set Timer_1_TimerHW__PM_ACT_CFG, CYREG_PM_ACT_CFG3
.set Timer_1_TimerHW__PM_ACT_MSK, 0x01
.set Timer_1_TimerHW__PM_STBY_CFG, CYREG_PM_STBY_CFG3
.set Timer_1_TimerHW__PM_STBY_MSK, 0x01
.set Timer_1_TimerHW__RT0, CYREG_TMR0_RT0
.set Timer_1_TimerHW__RT1, CYREG_TMR0_RT1
.set Timer_1_TimerHW__SR0, CYREG_TMR0_SR0

/* AS7262_INT */
.set AS7262_INT__0__INTTYPE, CYREG_PICU3_INTTYPE2
.set AS7262_INT__0__MASK, 0x04
.set AS7262_INT__0__PC, CYREG_PRT3_PC2
.set AS7262_INT__0__PORT, 3
.set AS7262_INT__0__SHIFT, 2
.set AS7262_INT__AG, CYREG_PRT3_AG
.set AS7262_INT__AMUX, CYREG_PRT3_AMUX
.set AS7262_INT__BIE, CYREG_PRT3_BIE
.set AS7262_INT__BIT_MASK, CYREG_PRT3_BIT_MASK
.set AS7262_INT__BYP, CYREG_PRT3_BYP
.set AS7262_INT__CTL, CYREG_PRT3_CTL
.set AS7262_INT__DM0, CYREG_PRT3_DM0
.set AS7262_INT__DM1, CYREG_PRT3_DM1
.set AS7262_INT__DM2, CYREG_PRT3_DM2
.set AS7262_INT__DR, CYREG_PRT3_DR
.set AS7262_INT__INP_DIS, CYREG_PRT3_INP_DIS
.set AS7262_INT__INTSTAT, CYREG_PICU3_INTSTAT
.set AS7262_INT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set AS7262_INT__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set AS7262_INT__LCD_EN, CYREG_PRT3_LCD_EN
.set AS7262_INT__MASK, 0x04
.set AS7262_INT__PORT, 3
.set AS7262_INT__PRT, CYREG_PRT3_PRT
.set AS7262_INT__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set AS7262_INT__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set AS7262_INT__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set AS7262_INT__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set AS7262_INT__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set AS7262_INT__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set AS7262_INT__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set AS7262_INT__PS, CYREG_PRT3_PS
.set AS7262_INT__SHIFT, 2
.set AS7262_INT__SLW, CYREG_PRT3_SLW
.set AS7262_INT__SNAP, CYREG_PICU3_SNAP

/* timer_clock */
.set timer_clock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set timer_clock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set timer_clock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set timer_clock__CFG2_SRC_SEL_MASK, 0x07
.set timer_clock__INDEX, 0x00
.set timer_clock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set timer_clock__PM_ACT_MSK, 0x01
.set timer_clock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set timer_clock__PM_STBY_MSK, 0x01

/* isr_as7262_int */
.set isr_as7262_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_as7262_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_as7262_int__INTC_MASK, 0x80
.set isr_as7262_int__INTC_NUMBER, 7
.set isr_as7262_int__INTC_PRIOR_NUM, 7
.set isr_as7262_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_7
.set isr_as7262_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_as7262_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* isr_as7262_pin */
.set isr_as7262_pin__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_as7262_pin__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_as7262_pin__INTC_MASK, 0x04
.set isr_as7262_pin__INTC_NUMBER, 2
.set isr_as7262_pin__INTC_PRIOR_NUM, 7
.set isr_as7262_pin__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set isr_as7262_pin__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_as7262_pin__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* isr_as7262_timer */
.set isr_as7262_timer__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_as7262_timer__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_as7262_timer__INTC_MASK, 0x20000
.set isr_as7262_timer__INTC_NUMBER, 17
.set isr_as7262_timer__INTC_PRIOR_NUM, 7
.set isr_as7262_timer__INTC_PRIOR_REG, CYREG_NVIC_PRI_17
.set isr_as7262_timer__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_as7262_timer__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 48000000
.set BCLK__BUS_CLK__KHZ, 48000
.set BCLK__BUS_CLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x0800
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00008004
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP, 1
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif