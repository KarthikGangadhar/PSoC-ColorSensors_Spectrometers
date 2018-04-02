;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* I2C */
I2C_I2C_FF__ADR EQU CYREG_I2C_ADR
I2C_I2C_FF__CFG EQU CYREG_I2C_CFG
I2C_I2C_FF__CLK_DIV1 EQU CYREG_I2C_CLK_DIV1
I2C_I2C_FF__CLK_DIV2 EQU CYREG_I2C_CLK_DIV2
I2C_I2C_FF__CSR EQU CYREG_I2C_CSR
I2C_I2C_FF__D EQU CYREG_I2C_D
I2C_I2C_FF__MCSR EQU CYREG_I2C_MCSR
I2C_I2C_FF__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
I2C_I2C_FF__PM_ACT_MSK EQU 0x04
I2C_I2C_FF__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
I2C_I2C_FF__PM_STBY_MSK EQU 0x04
I2C_I2C_FF__TMOUT_CFG0 EQU CYREG_I2C_TMOUT_CFG0
I2C_I2C_FF__TMOUT_CFG1 EQU CYREG_I2C_TMOUT_CFG1
I2C_I2C_FF__TMOUT_CSR EQU CYREG_I2C_TMOUT_CSR
I2C_I2C_FF__TMOUT_SR EQU CYREG_I2C_TMOUT_SR
I2C_I2C_FF__XCFG EQU CYREG_I2C_XCFG
I2C_I2C_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
I2C_I2C_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
I2C_I2C_IRQ__INTC_MASK EQU 0x8000
I2C_I2C_IRQ__INTC_NUMBER EQU 15
I2C_I2C_IRQ__INTC_PRIOR_NUM EQU 7
I2C_I2C_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_15
I2C_I2C_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
I2C_I2C_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* LCD */
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

/* SCL */
SCL__0__INTTYPE EQU CYREG_PICU12_INTTYPE4
SCL__0__MASK EQU 0x10
SCL__0__PC EQU CYREG_PRT12_PC4
SCL__0__PORT EQU 12
SCL__0__SHIFT EQU 4
SCL__AG EQU CYREG_PRT12_AG
SCL__BIE EQU CYREG_PRT12_BIE
SCL__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SCL__BYP EQU CYREG_PRT12_BYP
SCL__DM0 EQU CYREG_PRT12_DM0
SCL__DM1 EQU CYREG_PRT12_DM1
SCL__DM2 EQU CYREG_PRT12_DM2
SCL__DR EQU CYREG_PRT12_DR
SCL__INP_DIS EQU CYREG_PRT12_INP_DIS
SCL__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SCL__MASK EQU 0x10
SCL__PORT EQU 12
SCL__PRT EQU CYREG_PRT12_PRT
SCL__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SCL__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SCL__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SCL__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SCL__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SCL__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SCL__PS EQU CYREG_PRT12_PS
SCL__SHIFT EQU 4
SCL__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SCL__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SCL__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SCL__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SCL__SLW EQU CYREG_PRT12_SLW

/* SDA */
SDA__0__INTTYPE EQU CYREG_PICU12_INTTYPE5
SDA__0__MASK EQU 0x20
SDA__0__PC EQU CYREG_PRT12_PC5
SDA__0__PORT EQU 12
SDA__0__SHIFT EQU 5
SDA__AG EQU CYREG_PRT12_AG
SDA__BIE EQU CYREG_PRT12_BIE
SDA__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SDA__BYP EQU CYREG_PRT12_BYP
SDA__DM0 EQU CYREG_PRT12_DM0
SDA__DM1 EQU CYREG_PRT12_DM1
SDA__DM2 EQU CYREG_PRT12_DM2
SDA__DR EQU CYREG_PRT12_DR
SDA__INP_DIS EQU CYREG_PRT12_INP_DIS
SDA__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SDA__MASK EQU 0x20
SDA__PORT EQU 12
SDA__PRT EQU CYREG_PRT12_PRT
SDA__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SDA__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SDA__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SDA__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SDA__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SDA__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SDA__PS EQU CYREG_PRT12_PS
SDA__SHIFT EQU 5
SDA__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SDA__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SDA__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SDA__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SDA__SLW EQU CYREG_PRT12_SLW

/* LED_3 */
LED_3__0__INTTYPE EQU CYREG_PICU6_INTTYPE2
LED_3__0__MASK EQU 0x04
LED_3__0__PC EQU CYREG_PRT6_PC2
LED_3__0__PORT EQU 6
LED_3__0__SHIFT EQU 2
LED_3__AG EQU CYREG_PRT6_AG
LED_3__AMUX EQU CYREG_PRT6_AMUX
LED_3__BIE EQU CYREG_PRT6_BIE
LED_3__BIT_MASK EQU CYREG_PRT6_BIT_MASK
LED_3__BYP EQU CYREG_PRT6_BYP
LED_3__CTL EQU CYREG_PRT6_CTL
LED_3__DM0 EQU CYREG_PRT6_DM0
LED_3__DM1 EQU CYREG_PRT6_DM1
LED_3__DM2 EQU CYREG_PRT6_DM2
LED_3__DR EQU CYREG_PRT6_DR
LED_3__INP_DIS EQU CYREG_PRT6_INP_DIS
LED_3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU6_BASE
LED_3__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
LED_3__LCD_EN EQU CYREG_PRT6_LCD_EN
LED_3__MASK EQU 0x04
LED_3__PORT EQU 6
LED_3__PRT EQU CYREG_PRT6_PRT
LED_3__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
LED_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
LED_3__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
LED_3__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
LED_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
LED_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
LED_3__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
LED_3__PS EQU CYREG_PRT6_PS
LED_3__SHIFT EQU 2
LED_3__SLW EQU CYREG_PRT6_SLW

/* LED_4 */
LED_4__0__INTTYPE EQU CYREG_PICU6_INTTYPE3
LED_4__0__MASK EQU 0x08
LED_4__0__PC EQU CYREG_PRT6_PC3
LED_4__0__PORT EQU 6
LED_4__0__SHIFT EQU 3
LED_4__AG EQU CYREG_PRT6_AG
LED_4__AMUX EQU CYREG_PRT6_AMUX
LED_4__BIE EQU CYREG_PRT6_BIE
LED_4__BIT_MASK EQU CYREG_PRT6_BIT_MASK
LED_4__BYP EQU CYREG_PRT6_BYP
LED_4__CTL EQU CYREG_PRT6_CTL
LED_4__DM0 EQU CYREG_PRT6_DM0
LED_4__DM1 EQU CYREG_PRT6_DM1
LED_4__DM2 EQU CYREG_PRT6_DM2
LED_4__DR EQU CYREG_PRT6_DR
LED_4__INP_DIS EQU CYREG_PRT6_INP_DIS
LED_4__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU6_BASE
LED_4__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
LED_4__LCD_EN EQU CYREG_PRT6_LCD_EN
LED_4__MASK EQU 0x08
LED_4__PORT EQU 6
LED_4__PRT EQU CYREG_PRT6_PRT
LED_4__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
LED_4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
LED_4__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
LED_4__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
LED_4__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
LED_4__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
LED_4__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
LED_4__PS EQU CYREG_PRT6_PS
LED_4__SHIFT EQU 3
LED_4__SLW EQU CYREG_PRT6_SLW

/* USBFS */
USBFS_arb_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBFS_arb_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBFS_arb_int__INTC_MASK EQU 0x400000
USBFS_arb_int__INTC_NUMBER EQU 22
USBFS_arb_int__INTC_PRIOR_NUM EQU 7
USBFS_arb_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_22
USBFS_arb_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBFS_arb_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBFS_bus_reset__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBFS_bus_reset__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBFS_bus_reset__INTC_MASK EQU 0x800000
USBFS_bus_reset__INTC_NUMBER EQU 23
USBFS_bus_reset__INTC_PRIOR_NUM EQU 7
USBFS_bus_reset__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_23
USBFS_bus_reset__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBFS_bus_reset__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBFS_Dm__0__INTTYPE EQU CYREG_PICU15_INTTYPE7
USBFS_Dm__0__MASK EQU 0x80
USBFS_Dm__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC1
USBFS_Dm__0__PORT EQU 15
USBFS_Dm__0__SHIFT EQU 7
USBFS_Dm__AG EQU CYREG_PRT15_AG
USBFS_Dm__AMUX EQU CYREG_PRT15_AMUX
USBFS_Dm__BIE EQU CYREG_PRT15_BIE
USBFS_Dm__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBFS_Dm__BYP EQU CYREG_PRT15_BYP
USBFS_Dm__CTL EQU CYREG_PRT15_CTL
USBFS_Dm__DM0 EQU CYREG_PRT15_DM0
USBFS_Dm__DM1 EQU CYREG_PRT15_DM1
USBFS_Dm__DM2 EQU CYREG_PRT15_DM2
USBFS_Dm__DR EQU CYREG_PRT15_DR
USBFS_Dm__INP_DIS EQU CYREG_PRT15_INP_DIS
USBFS_Dm__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBFS_Dm__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBFS_Dm__LCD_EN EQU CYREG_PRT15_LCD_EN
USBFS_Dm__MASK EQU 0x80
USBFS_Dm__PORT EQU 15
USBFS_Dm__PRT EQU CYREG_PRT15_PRT
USBFS_Dm__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBFS_Dm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBFS_Dm__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBFS_Dm__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBFS_Dm__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBFS_Dm__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBFS_Dm__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBFS_Dm__PS EQU CYREG_PRT15_PS
USBFS_Dm__SHIFT EQU 7
USBFS_Dm__SLW EQU CYREG_PRT15_SLW
USBFS_Dp__0__INTTYPE EQU CYREG_PICU15_INTTYPE6
USBFS_Dp__0__MASK EQU 0x40
USBFS_Dp__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC0
USBFS_Dp__0__PORT EQU 15
USBFS_Dp__0__SHIFT EQU 6
USBFS_Dp__AG EQU CYREG_PRT15_AG
USBFS_Dp__AMUX EQU CYREG_PRT15_AMUX
USBFS_Dp__BIE EQU CYREG_PRT15_BIE
USBFS_Dp__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBFS_Dp__BYP EQU CYREG_PRT15_BYP
USBFS_Dp__CTL EQU CYREG_PRT15_CTL
USBFS_Dp__DM0 EQU CYREG_PRT15_DM0
USBFS_Dp__DM1 EQU CYREG_PRT15_DM1
USBFS_Dp__DM2 EQU CYREG_PRT15_DM2
USBFS_Dp__DR EQU CYREG_PRT15_DR
USBFS_Dp__INP_DIS EQU CYREG_PRT15_INP_DIS
USBFS_Dp__INTSTAT EQU CYREG_PICU15_INTSTAT
USBFS_Dp__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBFS_Dp__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBFS_Dp__LCD_EN EQU CYREG_PRT15_LCD_EN
USBFS_Dp__MASK EQU 0x40
USBFS_Dp__PORT EQU 15
USBFS_Dp__PRT EQU CYREG_PRT15_PRT
USBFS_Dp__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBFS_Dp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBFS_Dp__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBFS_Dp__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBFS_Dp__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBFS_Dp__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBFS_Dp__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBFS_Dp__PS EQU CYREG_PRT15_PS
USBFS_Dp__SHIFT EQU 6
USBFS_Dp__SLW EQU CYREG_PRT15_SLW
USBFS_Dp__SNAP EQU CYREG_PICU_15_SNAP_15
USBFS_dp_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBFS_dp_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBFS_dp_int__INTC_MASK EQU 0x1000
USBFS_dp_int__INTC_NUMBER EQU 12
USBFS_dp_int__INTC_PRIOR_NUM EQU 7
USBFS_dp_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_12
USBFS_dp_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBFS_dp_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBFS_ep_0__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBFS_ep_0__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBFS_ep_0__INTC_MASK EQU 0x1000000
USBFS_ep_0__INTC_NUMBER EQU 24
USBFS_ep_0__INTC_PRIOR_NUM EQU 7
USBFS_ep_0__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_24
USBFS_ep_0__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBFS_ep_0__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBFS_ep_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBFS_ep_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBFS_ep_1__INTC_MASK EQU 0x01
USBFS_ep_1__INTC_NUMBER EQU 0
USBFS_ep_1__INTC_PRIOR_NUM EQU 7
USBFS_ep_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
USBFS_ep_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBFS_ep_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBFS_ep_2__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBFS_ep_2__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBFS_ep_2__INTC_MASK EQU 0x02
USBFS_ep_2__INTC_NUMBER EQU 1
USBFS_ep_2__INTC_PRIOR_NUM EQU 7
USBFS_ep_2__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
USBFS_ep_2__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBFS_ep_2__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBFS_USB__ARB_CFG EQU CYREG_USB_ARB_CFG
USBFS_USB__ARB_EP1_CFG EQU CYREG_USB_ARB_EP1_CFG
USBFS_USB__ARB_EP1_INT_EN EQU CYREG_USB_ARB_EP1_INT_EN
USBFS_USB__ARB_EP1_SR EQU CYREG_USB_ARB_EP1_SR
USBFS_USB__ARB_EP2_CFG EQU CYREG_USB_ARB_EP2_CFG
USBFS_USB__ARB_EP2_INT_EN EQU CYREG_USB_ARB_EP2_INT_EN
USBFS_USB__ARB_EP2_SR EQU CYREG_USB_ARB_EP2_SR
USBFS_USB__ARB_EP3_CFG EQU CYREG_USB_ARB_EP3_CFG
USBFS_USB__ARB_EP3_INT_EN EQU CYREG_USB_ARB_EP3_INT_EN
USBFS_USB__ARB_EP3_SR EQU CYREG_USB_ARB_EP3_SR
USBFS_USB__ARB_EP4_CFG EQU CYREG_USB_ARB_EP4_CFG
USBFS_USB__ARB_EP4_INT_EN EQU CYREG_USB_ARB_EP4_INT_EN
USBFS_USB__ARB_EP4_SR EQU CYREG_USB_ARB_EP4_SR
USBFS_USB__ARB_EP5_CFG EQU CYREG_USB_ARB_EP5_CFG
USBFS_USB__ARB_EP5_INT_EN EQU CYREG_USB_ARB_EP5_INT_EN
USBFS_USB__ARB_EP5_SR EQU CYREG_USB_ARB_EP5_SR
USBFS_USB__ARB_EP6_CFG EQU CYREG_USB_ARB_EP6_CFG
USBFS_USB__ARB_EP6_INT_EN EQU CYREG_USB_ARB_EP6_INT_EN
USBFS_USB__ARB_EP6_SR EQU CYREG_USB_ARB_EP6_SR
USBFS_USB__ARB_EP7_CFG EQU CYREG_USB_ARB_EP7_CFG
USBFS_USB__ARB_EP7_INT_EN EQU CYREG_USB_ARB_EP7_INT_EN
USBFS_USB__ARB_EP7_SR EQU CYREG_USB_ARB_EP7_SR
USBFS_USB__ARB_EP8_CFG EQU CYREG_USB_ARB_EP8_CFG
USBFS_USB__ARB_EP8_INT_EN EQU CYREG_USB_ARB_EP8_INT_EN
USBFS_USB__ARB_EP8_SR EQU CYREG_USB_ARB_EP8_SR
USBFS_USB__ARB_INT_EN EQU CYREG_USB_ARB_INT_EN
USBFS_USB__ARB_INT_SR EQU CYREG_USB_ARB_INT_SR
USBFS_USB__ARB_RW1_DR EQU CYREG_USB_ARB_RW1_DR
USBFS_USB__ARB_RW1_RA EQU CYREG_USB_ARB_RW1_RA
USBFS_USB__ARB_RW1_RA_MSB EQU CYREG_USB_ARB_RW1_RA_MSB
USBFS_USB__ARB_RW1_WA EQU CYREG_USB_ARB_RW1_WA
USBFS_USB__ARB_RW1_WA_MSB EQU CYREG_USB_ARB_RW1_WA_MSB
USBFS_USB__ARB_RW2_DR EQU CYREG_USB_ARB_RW2_DR
USBFS_USB__ARB_RW2_RA EQU CYREG_USB_ARB_RW2_RA
USBFS_USB__ARB_RW2_RA_MSB EQU CYREG_USB_ARB_RW2_RA_MSB
USBFS_USB__ARB_RW2_WA EQU CYREG_USB_ARB_RW2_WA
USBFS_USB__ARB_RW2_WA_MSB EQU CYREG_USB_ARB_RW2_WA_MSB
USBFS_USB__ARB_RW3_DR EQU CYREG_USB_ARB_RW3_DR
USBFS_USB__ARB_RW3_RA EQU CYREG_USB_ARB_RW3_RA
USBFS_USB__ARB_RW3_RA_MSB EQU CYREG_USB_ARB_RW3_RA_MSB
USBFS_USB__ARB_RW3_WA EQU CYREG_USB_ARB_RW3_WA
USBFS_USB__ARB_RW3_WA_MSB EQU CYREG_USB_ARB_RW3_WA_MSB
USBFS_USB__ARB_RW4_DR EQU CYREG_USB_ARB_RW4_DR
USBFS_USB__ARB_RW4_RA EQU CYREG_USB_ARB_RW4_RA
USBFS_USB__ARB_RW4_RA_MSB EQU CYREG_USB_ARB_RW4_RA_MSB
USBFS_USB__ARB_RW4_WA EQU CYREG_USB_ARB_RW4_WA
USBFS_USB__ARB_RW4_WA_MSB EQU CYREG_USB_ARB_RW4_WA_MSB
USBFS_USB__ARB_RW5_DR EQU CYREG_USB_ARB_RW5_DR
USBFS_USB__ARB_RW5_RA EQU CYREG_USB_ARB_RW5_RA
USBFS_USB__ARB_RW5_RA_MSB EQU CYREG_USB_ARB_RW5_RA_MSB
USBFS_USB__ARB_RW5_WA EQU CYREG_USB_ARB_RW5_WA
USBFS_USB__ARB_RW5_WA_MSB EQU CYREG_USB_ARB_RW5_WA_MSB
USBFS_USB__ARB_RW6_DR EQU CYREG_USB_ARB_RW6_DR
USBFS_USB__ARB_RW6_RA EQU CYREG_USB_ARB_RW6_RA
USBFS_USB__ARB_RW6_RA_MSB EQU CYREG_USB_ARB_RW6_RA_MSB
USBFS_USB__ARB_RW6_WA EQU CYREG_USB_ARB_RW6_WA
USBFS_USB__ARB_RW6_WA_MSB EQU CYREG_USB_ARB_RW6_WA_MSB
USBFS_USB__ARB_RW7_DR EQU CYREG_USB_ARB_RW7_DR
USBFS_USB__ARB_RW7_RA EQU CYREG_USB_ARB_RW7_RA
USBFS_USB__ARB_RW7_RA_MSB EQU CYREG_USB_ARB_RW7_RA_MSB
USBFS_USB__ARB_RW7_WA EQU CYREG_USB_ARB_RW7_WA
USBFS_USB__ARB_RW7_WA_MSB EQU CYREG_USB_ARB_RW7_WA_MSB
USBFS_USB__ARB_RW8_DR EQU CYREG_USB_ARB_RW8_DR
USBFS_USB__ARB_RW8_RA EQU CYREG_USB_ARB_RW8_RA
USBFS_USB__ARB_RW8_RA_MSB EQU CYREG_USB_ARB_RW8_RA_MSB
USBFS_USB__ARB_RW8_WA EQU CYREG_USB_ARB_RW8_WA
USBFS_USB__ARB_RW8_WA_MSB EQU CYREG_USB_ARB_RW8_WA_MSB
USBFS_USB__BUF_SIZE EQU CYREG_USB_BUF_SIZE
USBFS_USB__BUS_RST_CNT EQU CYREG_USB_BUS_RST_CNT
USBFS_USB__CR0 EQU CYREG_USB_CR0
USBFS_USB__CR1 EQU CYREG_USB_CR1
USBFS_USB__CWA EQU CYREG_USB_CWA
USBFS_USB__CWA_MSB EQU CYREG_USB_CWA_MSB
USBFS_USB__DMA_THRES EQU CYREG_USB_DMA_THRES
USBFS_USB__DMA_THRES_MSB EQU CYREG_USB_DMA_THRES_MSB
USBFS_USB__DYN_RECONFIG EQU CYREG_USB_DYN_RECONFIG
USBFS_USB__EP_ACTIVE EQU CYREG_USB_EP_ACTIVE
USBFS_USB__EP_TYPE EQU CYREG_USB_EP_TYPE
USBFS_USB__EP0_CNT EQU CYREG_USB_EP0_CNT
USBFS_USB__EP0_CR EQU CYREG_USB_EP0_CR
USBFS_USB__EP0_DR0 EQU CYREG_USB_EP0_DR0
USBFS_USB__EP0_DR1 EQU CYREG_USB_EP0_DR1
USBFS_USB__EP0_DR2 EQU CYREG_USB_EP0_DR2
USBFS_USB__EP0_DR3 EQU CYREG_USB_EP0_DR3
USBFS_USB__EP0_DR4 EQU CYREG_USB_EP0_DR4
USBFS_USB__EP0_DR5 EQU CYREG_USB_EP0_DR5
USBFS_USB__EP0_DR6 EQU CYREG_USB_EP0_DR6
USBFS_USB__EP0_DR7 EQU CYREG_USB_EP0_DR7
USBFS_USB__MEM_DATA EQU CYREG_USB_MEM_DATA_MBASE
USBFS_USB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
USBFS_USB__PM_ACT_MSK EQU 0x01
USBFS_USB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
USBFS_USB__PM_STBY_MSK EQU 0x01
USBFS_USB__SIE_EP_INT_EN EQU CYREG_USB_SIE_EP_INT_EN
USBFS_USB__SIE_EP_INT_SR EQU CYREG_USB_SIE_EP_INT_SR
USBFS_USB__SIE_EP1_CNT0 EQU CYREG_USB_SIE_EP1_CNT0
USBFS_USB__SIE_EP1_CNT1 EQU CYREG_USB_SIE_EP1_CNT1
USBFS_USB__SIE_EP1_CR0 EQU CYREG_USB_SIE_EP1_CR0
USBFS_USB__SIE_EP2_CNT0 EQU CYREG_USB_SIE_EP2_CNT0
USBFS_USB__SIE_EP2_CNT1 EQU CYREG_USB_SIE_EP2_CNT1
USBFS_USB__SIE_EP2_CR0 EQU CYREG_USB_SIE_EP2_CR0
USBFS_USB__SIE_EP3_CNT0 EQU CYREG_USB_SIE_EP3_CNT0
USBFS_USB__SIE_EP3_CNT1 EQU CYREG_USB_SIE_EP3_CNT1
USBFS_USB__SIE_EP3_CR0 EQU CYREG_USB_SIE_EP3_CR0
USBFS_USB__SIE_EP4_CNT0 EQU CYREG_USB_SIE_EP4_CNT0
USBFS_USB__SIE_EP4_CNT1 EQU CYREG_USB_SIE_EP4_CNT1
USBFS_USB__SIE_EP4_CR0 EQU CYREG_USB_SIE_EP4_CR0
USBFS_USB__SIE_EP5_CNT0 EQU CYREG_USB_SIE_EP5_CNT0
USBFS_USB__SIE_EP5_CNT1 EQU CYREG_USB_SIE_EP5_CNT1
USBFS_USB__SIE_EP5_CR0 EQU CYREG_USB_SIE_EP5_CR0
USBFS_USB__SIE_EP6_CNT0 EQU CYREG_USB_SIE_EP6_CNT0
USBFS_USB__SIE_EP6_CNT1 EQU CYREG_USB_SIE_EP6_CNT1
USBFS_USB__SIE_EP6_CR0 EQU CYREG_USB_SIE_EP6_CR0
USBFS_USB__SIE_EP7_CNT0 EQU CYREG_USB_SIE_EP7_CNT0
USBFS_USB__SIE_EP7_CNT1 EQU CYREG_USB_SIE_EP7_CNT1
USBFS_USB__SIE_EP7_CR0 EQU CYREG_USB_SIE_EP7_CR0
USBFS_USB__SIE_EP8_CNT0 EQU CYREG_USB_SIE_EP8_CNT0
USBFS_USB__SIE_EP8_CNT1 EQU CYREG_USB_SIE_EP8_CNT1
USBFS_USB__SIE_EP8_CR0 EQU CYREG_USB_SIE_EP8_CR0
USBFS_USB__SOF0 EQU CYREG_USB_SOF0
USBFS_USB__SOF1 EQU CYREG_USB_SOF1
USBFS_USB__USB_CLK_EN EQU CYREG_USB_USB_CLK_EN
USBFS_USB__USBIO_CR0 EQU CYREG_USB_USBIO_CR0
USBFS_USB__USBIO_CR1 EQU CYREG_USB_USBIO_CR1

/* Timer_1 */
Timer_1_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
Timer_1_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
Timer_1_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
Timer_1_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
Timer_1_TimerHW__CFG2 EQU CYREG_TMR0_CFG2
Timer_1_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Timer_1_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Timer_1_TimerHW__PER0 EQU CYREG_TMR0_PER0
Timer_1_TimerHW__PER1 EQU CYREG_TMR0_PER1
Timer_1_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Timer_1_TimerHW__PM_ACT_MSK EQU 0x01
Timer_1_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Timer_1_TimerHW__PM_STBY_MSK EQU 0x01
Timer_1_TimerHW__RT0 EQU CYREG_TMR0_RT0
Timer_1_TimerHW__RT1 EQU CYREG_TMR0_RT1
Timer_1_TimerHW__SR0 EQU CYREG_TMR0_SR0

/* AS7262_INT */
AS7262_INT__0__INTTYPE EQU CYREG_PICU3_INTTYPE2
AS7262_INT__0__MASK EQU 0x04
AS7262_INT__0__PC EQU CYREG_PRT3_PC2
AS7262_INT__0__PORT EQU 3
AS7262_INT__0__SHIFT EQU 2
AS7262_INT__AG EQU CYREG_PRT3_AG
AS7262_INT__AMUX EQU CYREG_PRT3_AMUX
AS7262_INT__BIE EQU CYREG_PRT3_BIE
AS7262_INT__BIT_MASK EQU CYREG_PRT3_BIT_MASK
AS7262_INT__BYP EQU CYREG_PRT3_BYP
AS7262_INT__CTL EQU CYREG_PRT3_CTL
AS7262_INT__DM0 EQU CYREG_PRT3_DM0
AS7262_INT__DM1 EQU CYREG_PRT3_DM1
AS7262_INT__DM2 EQU CYREG_PRT3_DM2
AS7262_INT__DR EQU CYREG_PRT3_DR
AS7262_INT__INP_DIS EQU CYREG_PRT3_INP_DIS
AS7262_INT__INTSTAT EQU CYREG_PICU3_INTSTAT
AS7262_INT__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
AS7262_INT__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
AS7262_INT__LCD_EN EQU CYREG_PRT3_LCD_EN
AS7262_INT__MASK EQU 0x04
AS7262_INT__PORT EQU 3
AS7262_INT__PRT EQU CYREG_PRT3_PRT
AS7262_INT__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
AS7262_INT__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
AS7262_INT__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
AS7262_INT__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
AS7262_INT__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
AS7262_INT__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
AS7262_INT__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
AS7262_INT__PS EQU CYREG_PRT3_PS
AS7262_INT__SHIFT EQU 2
AS7262_INT__SLW EQU CYREG_PRT3_SLW
AS7262_INT__SNAP EQU CYREG_PICU3_SNAP

/* timer_clock */
timer_clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
timer_clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
timer_clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
timer_clock__CFG2_SRC_SEL_MASK EQU 0x07
timer_clock__INDEX EQU 0x00
timer_clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
timer_clock__PM_ACT_MSK EQU 0x01
timer_clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
timer_clock__PM_STBY_MSK EQU 0x01

/* isr_as7262_int */
isr_as7262_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_as7262_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_as7262_int__INTC_MASK EQU 0x80
isr_as7262_int__INTC_NUMBER EQU 7
isr_as7262_int__INTC_PRIOR_NUM EQU 7
isr_as7262_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_7
isr_as7262_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_as7262_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* isr_as7262_pin */
isr_as7262_pin__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_as7262_pin__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_as7262_pin__INTC_MASK EQU 0x04
isr_as7262_pin__INTC_NUMBER EQU 2
isr_as7262_pin__INTC_PRIOR_NUM EQU 7
isr_as7262_pin__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
isr_as7262_pin__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_as7262_pin__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* isr_as7262_timer */
isr_as7262_timer__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_as7262_timer__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_as7262_timer__INTC_MASK EQU 0x20000
isr_as7262_timer__INTC_NUMBER EQU 17
isr_as7262_timer__INTC_PRIOR_NUM EQU 7
isr_as7262_timer__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_17
isr_as7262_timer__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_as7262_timer__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 48000000
BCLK__BUS_CLK__KHZ EQU 48000
BCLK__BUS_CLK__MHZ EQU 48
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x0800
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00008004
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP EQU 1
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */