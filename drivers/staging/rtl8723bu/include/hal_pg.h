/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/

#ifndef __HAL_PG_H__
#define __HAL_PG_H__

#define PPG_BB_GAIN_2G_TX_OFFSET_MASK	0x0F
#define PPG_BB_GAIN_2G_TXB_OFFSET_MASK	0xF0

#define PPG_BB_GAIN_5G_TX_OFFSET_MASK	0x1F
#define PPG_THERMAL_OFFSET_MASK			0x1F
#define KFREE_BB_GAIN_2G_TX_OFFSET(_ppg_v) (((_ppg_v) == PPG_BB_GAIN_2G_TX_OFFSET_MASK) ? 0 : (((_ppg_v) & 0x01) ? ((_ppg_v) >> 1) : (-((_ppg_v) >> 1))))
#define KFREE_BB_GAIN_5G_TX_OFFSET(_ppg_v) (((_ppg_v) == PPG_BB_GAIN_5G_TX_OFFSET_MASK) ? 0 : (((_ppg_v) & 0x01) ? ((_ppg_v) >> 1) : (-((_ppg_v) >> 1))))
#define KFREE_THERMAL_OFFSET(_ppg_v) (((_ppg_v) == PPG_THERMAL_OFFSET_MASK) ? 0 : (((_ppg_v) & 0x01) ? ((_ppg_v) >> 1) : (-((_ppg_v) >> 1))))

//====================================================
//			EEPROM/Efuse PG Offset for 88EE/88EU/88ES
//====================================================
#define EEPROM_TX_PWR_INX_88E					0x10

#define EEPROM_ChannelPlan_88E					0xB8
#define EEPROM_XTAL_88E						0xB9
#define EEPROM_THERMAL_METER_88E				0xBA
#define EEPROM_IQK_LCK_88E						0xBB

#define EEPROM_RF_BOARD_OPTION_88E			0xC1
#define EEPROM_RF_FEATURE_OPTION_88E			0xC2
#define EEPROM_RF_BT_SETTING_88E				0xC3
#define EEPROM_VERSION_88E						0xC4
#define EEPROM_CustomID_88E					0xC5
#define EEPROM_RF_ANTENNA_OPT_88E			0xC9
#define EEPROM_COUNTRY_CODE_88E				0xCB

// RTL88EE
#define EEPROM_MAC_ADDR_88EE					0xD0
#define EEPROM_VID_88EE						0xD6
#define EEPROM_DID_88EE						0xD8
#define EEPROM_SVID_88EE						0xDA
#define EEPROM_SMID_88EE						0xDC

//RTL88EU
#define EEPROM_MAC_ADDR_88EU					0xD7
#define EEPROM_VID_88EU						0xD0
#define EEPROM_PID_88EU						0xD2
#define EEPROM_USB_OPTIONAL_FUNCTION0		0xD4 //8188EU,8192EU, 8812AU is the same
#define EEPROM_USB_OPTIONAL_FUNCTION0_8811AU 0x104

// RTL88ES
#define EEPROM_MAC_ADDR_88ES					0x11A
//====================================================
//			EEPROM/Efuse PG Offset for 8192EE/8192EU/8192ES
//====================================================
#define GET_PG_KFREE_ON_8192E(_pg_m)			LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC1, 4, 1)
#define GET_PG_KFREE_THERMAL_K_ON_8192E(_pg_m)	LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 5, 1)

#define PPG_BB_GAIN_2G_TXA_OFFSET_8192E	0x1F6
#define PPG_THERMAL_OFFSET_8192E		0x1F5

// 0x10 ~ 0x63 = TX power area.
#define	EEPROM_TX_PWR_INX_8192E				0x10

#define	EEPROM_ChannelPlan_8192E				0xB8
#define	EEPROM_XTAL_8192E						0xB9
#define	EEPROM_THERMAL_METER_8192E			0xBA
#define	EEPROM_IQK_LCK_8192E					0xBB
#define	EEPROM_2G_5G_PA_TYPE_8192E			0xBC
#define	EEPROM_2G_LNA_TYPE_GAIN_SEL_8192E	0xBD
#define	EEPROM_5G_LNA_TYPE_GAIN_SEL_8192E	0xBF

#define	EEPROM_RF_BOARD_OPTION_8192E		0xC1
#define	EEPROM_RF_FEATURE_OPTION_8192E		0xC2
#define	EEPROM_RF_BT_SETTING_8192E			0xC3
#define	EEPROM_VERSION_8192E					0xC4
#define	EEPROM_CustomID_8192E				0xC5
#define	EEPROM_TX_BBSWING_2G_8192E			0xC6
#define	EEPROM_TX_BBSWING_5G_8192E			0xC7
#define	EEPROM_TX_PWR_CALIBRATE_RATE_8192E	0xC8
#define	EEPROM_RF_ANTENNA_OPT_8192E			0xC9
#define	EEPROM_RFE_OPTION_8192E				0xCA
#define	EEPROM_RFE_OPTION_8188E				0xCA
#define EEPROM_COUNTRY_CODE_8192E			0xCB

// RTL8192EE
#define	EEPROM_MAC_ADDR_8192EE				0xD0
#define	EEPROM_VID_8192EE						0xD6
#define	EEPROM_DID_8192EE						0xD8
#define	EEPROM_SVID_8192EE					0xDA
#define	EEPROM_SMID_8192EE					0xDC

//RTL8192EU
#define	EEPROM_MAC_ADDR_8192EU				0xD7
#define	EEPROM_VID_8192EU						0xD0
#define	EEPROM_PID_8192EU						0xD2
#define 	EEPROM_PA_TYPE_8192EU               		0xBC
#define 	EEPROM_LNA_TYPE_2G_8192EU           	0xBD
#define 	EEPROM_LNA_TYPE_5G_8192EU           	0xBF

// RTL8192ES
#define	EEPROM_MAC_ADDR_8192ES				0x11A
//====================================================
//			EEPROM/Efuse PG Offset for 8812AE/8812AU/8812AS
//====================================================
// 0x10 ~ 0x63 = TX power area.
#define EEPROM_USB_MODE_8812					0x08
#define EEPROM_TX_PWR_INX_8812				0x10

#define EEPROM_ChannelPlan_8812				0xB8
#define EEPROM_XTAL_8812						0xB9
#define EEPROM_THERMAL_METER_8812			0xBA
#define EEPROM_IQK_LCK_8812					0xBB
#define EEPROM_2G_5G_PA_TYPE_8812			0xBC
#define EEPROM_2G_LNA_TYPE_GAIN_SEL_8812	0xBD
#define EEPROM_5G_LNA_TYPE_GAIN_SEL_8812	0xBF

#define EEPROM_RF_BOARD_OPTION_8812			0xC1
#define EEPROM_RF_FEATURE_OPTION_8812		0xC2
#define EEPROM_RF_BT_SETTING_8812				0xC3
#define EEPROM_VERSION_8812					0xC4
#define EEPROM_CustomID_8812					0xC5
#define EEPROM_TX_BBSWING_2G_8812			0xC6
#define EEPROM_TX_BBSWING_5G_8812			0xC7
#define EEPROM_TX_PWR_CALIBRATE_RATE_8812	0xC8
#define EEPROM_RF_ANTENNA_OPT_8812			0xC9
#define EEPROM_RFE_OPTION_8812				0xCA
#define EEPROM_COUNTRY_CODE_8812			0xCB

// RTL8812AE
#define EEPROM_MAC_ADDR_8812AE				0xD0
#define EEPROM_VID_8812AE						0xD6
#define EEPROM_DID_8812AE						0xD8
#define EEPROM_SVID_8812AE						0xDA
#define EEPROM_SMID_8812AE					0xDC

//RTL8812AU
#define EEPROM_MAC_ADDR_8812AU				0xD7
#define EEPROM_VID_8812AU						0xD0
#define EEPROM_PID_8812AU						0xD2
#define EEPROM_PA_TYPE_8812AU					0xBC
#define EEPROM_LNA_TYPE_2G_8812AU			0xBD
#define EEPROM_LNA_TYPE_5G_8812AU			0xBF

//RTL8814AU
#define	EEPROM_MAC_ADDR_8814AU				0xD8
#define	EEPROM_VID_8814AU						0xD0
#define	EEPROM_PID_8814AU						0xD2
#define	EEPROM_PA_TYPE_8814AU				0xBC
#define	EEPROM_LNA_TYPE_2G_8814AU			0xBD
#define	EEPROM_LNA_TYPE_5G_8814AU			0xBF

/* RTL8814AE */
#define EEPROM_MAC_ADDR_8814AE				0xD0
#define EEPROM_VID_8814AE						0xD6
#define EEPROM_DID_8814AE						0xD8
#define EEPROM_SVID_8814AE						0xDA
#define EEPROM_SMID_8814AE					0xDC

//====================================================
//			EEPROM/Efuse PG Offset for 8814AU
//====================================================
#define GET_PG_KFREE_ON_8814A(_pg_m)			LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 4, 1)
#define GET_PG_KFREE_THERMAL_K_ON_8814A(_pg_m)	LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 5, 1)
#define GET_PG_TX_POWER_TRACKING_MODE_8814A(_pg_m)	LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 6, 2)

#define KFREE_GAIN_DATA_LENGTH_8814A	22

#define PPG_BB_GAIN_2G_TXBA_OFFSET_8814A	0x3EE

#define PPG_THERMAL_OFFSET_8814A		0x3EF

#define EEPROM_TX_PWR_INX_8814				0x10
#define EEPROM_ChannelPlan_8814				0xB8
#define EEPROM_XTAL_8814					0xB9
#define EEPROM_THERMAL_METER_8814			0xBA
#define	EEPROM_IQK_LCK_8814					0xBB


#define EEPROM_PA_TYPE_8814					0xBC
#define EEPROM_LNA_TYPE_AB_2G_8814			0xBD
#define	EEPROM_LNA_TYPE_CD_2G_8814			0xBE
#define EEPROM_LNA_TYPE_AB_5G_8814			0xBF
#define EEPROM_LNA_TYPE_CD_5G_8814			0xC0
#define	EEPROM_RF_BOARD_OPTION_8814			0xC1
#define	EEPROM_RF_BT_SETTING_8814			0xC3
#define	EEPROM_VERSION_8814					0xC4
#define	EEPROM_CustomID_8814				0xC5
#define	EEPROM_TX_BBSWING_2G_8814			0xC6
#define	EEPROM_TX_BBSWING_5G_8814			0xC7
#define EEPROM_TRX_ANTENNA_OPTION_8814		0xC9
#define	EEPROM_RFE_OPTION_8814				0xCA
#define EEPROM_COUNTRY_CODE_8814			0xCB

/*Extra Info for 8814A Initial Gain Fine Tune  suggested by Willis, JIRA: MP123*/
#define	EEPROM_IG_OFFSET_4_AB_2G_8814A				0x120
#define	EEPROM_IG_OFFSET_4_CD_2G_8814A				0x121
#define	EEPROM_IG_OFFSET_4_AB_5GL_8814A				0x122
#define	EEPROM_IG_OFFSET_4_CD_5GL_8814A				0x123
#define	EEPROM_IG_OFFSET_4_AB_5GM_8814A				0x124
#define	EEPROM_IG_OFFSET_4_CD_5GM_8814A				0x125
#define	EEPROM_IG_OFFSET_4_AB_5GH_8814A				0x126
#define	EEPROM_IG_OFFSET_4_CD_5GH_8814A				0x127

//====================================================
//			EEPROM/Efuse PG Offset for 8821AE/8821AU/8821AS
//====================================================

#define GET_PG_KFREE_ON_8821A(_pg_m)			LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 4, 1)
#define GET_PG_KFREE_THERMAL_K_ON_8821A(_pg_m)	LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 5, 1)

#define PPG_BB_GAIN_2G_TXA_OFFSET_8821A		0x1F6
#define PPG_THERMAL_OFFSET_8821A			0x1F5
#define PPG_BB_GAIN_5GLB1_TXA_OFFSET_8821A	0x1F4
#define PPG_BB_GAIN_5GLB2_TXA_OFFSET_8821A	0x1F3
#define PPG_BB_GAIN_5GMB1_TXA_OFFSET_8821A	0x1F2
#define PPG_BB_GAIN_5GMB2_TXA_OFFSET_8821A	0x1F1
#define PPG_BB_GAIN_5GHB_TXA_OFFSET_8821A	0x1F0

#define EEPROM_TX_PWR_INX_8821				0x10

#define EEPROM_ChannelPlan_8821				0xB8
#define EEPROM_XTAL_8821						0xB9
#define EEPROM_THERMAL_METER_8821			0xBA
#define EEPROM_IQK_LCK_8821					0xBB


#define EEPROM_RF_BOARD_OPTION_8821			0xC1
#define EEPROM_RF_FEATURE_OPTION_8821		0xC2
#define EEPROM_RF_BT_SETTING_8821				0xC3
#define EEPROM_VERSION_8821					0xC4
#define EEPROM_CustomID_8821					0xC5
#define EEPROM_RF_ANTENNA_OPT_8821			0xC9

// RTL8821AE
#define EEPROM_MAC_ADDR_8821AE				0xD0
#define EEPROM_VID_8821AE						0xD6
#define EEPROM_DID_8821AE						0xD8
#define EEPROM_SVID_8821AE						0xDA
#define EEPROM_SMID_8821AE					0xDC

//RTL8821AU
#define EEPROM_PA_TYPE_8821AU					0xBC
#define EEPROM_LNA_TYPE_8821AU				0xBF

// RTL8821AS
#define EEPROM_MAC_ADDR_8821AS				0x11A

//RTL8821AU
#define EEPROM_MAC_ADDR_8821AU				0x107
#define EEPROM_VID_8821AU						0x100
#define EEPROM_PID_8821AU						0x102


//====================================================
//			EEPROM/Efuse PG Offset for 8192 SE/SU
//====================================================
#define EEPROM_VID_92SE						0x0A
#define EEPROM_DID_92SE						0x0C
#define EEPROM_SVID_92SE						0x0E
#define EEPROM_SMID_92SE						0x10

#define EEPROM_MAC_ADDR_92S					0x12

#define EEPROM_TSSI_A_92SE						0x74
#define EEPROM_TSSI_B_92SE						0x75

#define EEPROM_Version_92SE					0x7C


#define EEPROM_VID_92SU						0x08
#define EEPROM_PID_92SU						0x0A 

#define EEPROM_Version_92SU					0x50
#define EEPROM_TSSI_A_92SU						0x6b 
#define EEPROM_TSSI_B_92SU						0x6c 

/* ====================================================
	EEPROM/Efuse PG Offset for 8188FE/8188FU/8188FS
   ====================================================
 */

#define GET_PG_KFREE_ON_8188F(_pg_m)			LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC1, 4, 1)
#define GET_PG_KFREE_THERMAL_K_ON_8188F(_pg_m)	LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 5, 1)

#define PPG_BB_GAIN_2G_TXA_OFFSET_8188F	0xEE
#define PPG_THERMAL_OFFSET_8188F		0xEF

/* 0x10 ~ 0x63 = TX power area. */
#define	EEPROM_TX_PWR_INX_8188F				0x10

#define	EEPROM_ChannelPlan_8188F			0xB8
#define	EEPROM_XTAL_8188F					0xB9
#define	EEPROM_THERMAL_METER_8188F			0xBA
#define	EEPROM_IQK_LCK_8188F				0xBB
#define	EEPROM_2G_5G_PA_TYPE_8188F			0xBC
#define	EEPROM_2G_LNA_TYPE_GAIN_SEL_8188F	0xBD
#define	EEPROM_5G_LNA_TYPE_GAIN_SEL_8188F	0xBF

#define	EEPROM_RF_BOARD_OPTION_8188F		0xC1
#define	EEPROM_FEATURE_OPTION_8188F			0xC2
#define	EEPROM_RF_BT_SETTING_8188F			0xC3
#define	EEPROM_VERSION_8188F				0xC4
#define	EEPROM_CustomID_8188F				0xC5
#define	EEPROM_TX_BBSWING_2G_8188F			0xC6
#define	EEPROM_TX_PWR_CALIBRATE_RATE_8188F	0xC8
#define	EEPROM_RF_ANTENNA_OPT_8188F			0xC9
#define	EEPROM_RFE_OPTION_8188F				0xCA
#define EEPROM_COUNTRY_CODE_8188F			0xCB
#define EEPROM_CUSTOMER_ID_8188F			0x7F
#define EEPROM_SUBCUSTOMER_ID_8188F			0x59

/* RTL8188FU */
#define EEPROM_MAC_ADDR_8188FU				0xD7
#define EEPROM_VID_8188FU					0xD0
#define EEPROM_PID_8188FU					0xD2
#define EEPROM_PA_TYPE_8188FU				0xBC
#define EEPROM_LNA_TYPE_2G_8188FU			0xBD
#define EEPROM_USB_OPTIONAL_FUNCTION0_8188FU 0xD4

/* RTL8188FS */
#define	EEPROM_MAC_ADDR_8188FS				0x11A
#define EEPROM_Voltage_ADDR_8188F			0x8

//====================================================
//			EEPROM/Efuse PG Offset for 8723BE/8723BU/8723BS
//====================================================
// 0x10 ~ 0x63 = TX power area.
#define	EEPROM_TX_PWR_INX_8723B				0x10

#define	EEPROM_ChannelPlan_8723B				0xB8
#define	EEPROM_XTAL_8723B						0xB9
#define	EEPROM_THERMAL_METER_8723B			0xBA
#define	EEPROM_IQK_LCK_8723B					0xBB
#define	EEPROM_2G_5G_PA_TYPE_8723B			0xBC
#define	EEPROM_2G_LNA_TYPE_GAIN_SEL_8723B	0xBD
#define	EEPROM_5G_LNA_TYPE_GAIN_SEL_8723B	0xBF

#define	EEPROM_RF_BOARD_OPTION_8723B		0xC1
#define	EEPROM_FEATURE_OPTION_8723B			0xC2
#define	EEPROM_RF_BT_SETTING_8723B			0xC3
#define	EEPROM_VERSION_8723B					0xC4
#define	EEPROM_CustomID_8723B				0xC5
#define	EEPROM_TX_BBSWING_2G_8723B			0xC6
#define	EEPROM_TX_PWR_CALIBRATE_RATE_8723B	0xC8
#define	EEPROM_RF_ANTENNA_OPT_8723B		0xC9
#define	EEPROM_RFE_OPTION_8723B				0xCA
#define EEPROM_COUNTRY_CODE_8723B			0xCB

// RTL8723BE
#define EEPROM_MAC_ADDR_8723BE				0xD0
#define EEPROM_VID_8723BE						0xD6
#define EEPROM_DID_8723BE						0xD8
#define EEPROM_SVID_8723BE						0xDA
#define EEPROM_SMID_8723BE						0xDC

//RTL8723BU
#define EEPROM_MAC_ADDR_8723BU				0x107
#define EEPROM_VID_8723BU						0x100
#define EEPROM_PID_8723BU						0x102
#define EEPROM_PA_TYPE_8723BU					0xBC
#define EEPROM_LNA_TYPE_2G_8723BU				0xBD


//RTL8723BS
#define	EEPROM_MAC_ADDR_8723BS				0x11A
#define EEPROM_Voltage_ADDR_8723B			0x8

//====================================================
/*			EEPROM/Efuse PG Offset for 8703B		*/
//====================================================
#define GET_PG_KFREE_ON_8703B(_pg_m)			LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC1, 4, 1)
#define GET_PG_KFREE_THERMAL_K_ON_8703B(_pg_m)	LE_BITS_TO_1BYTE(((u8 *)(_pg_m)) + 0xC8, 5, 1)

#define PPG_BB_GAIN_2G_TXA_OFFSET_8703B	0xEE
#define PPG_THERMAL_OFFSET_8703B		0xEF

#define	EEPROM_TX_PWR_INX_8703B				0x10

#define	EEPROM_ChannelPlan_8703B				0xB8
#define	EEPROM_XTAL_8703B					0xB9
#define	EEPROM_THERMAL_METER_8703B			0xBA
#define	EEPROM_IQK_LCK_8703B					0xBB
#define	EEPROM_2G_5G_PA_TYPE_8703B			0xBC
#define	EEPROM_2G_LNA_TYPE_GAIN_SEL_8703B	0xBD
#define	EEPROM_5G_LNA_TYPE_GAIN_SEL_8703B	0xBF

#define	EEPROM_RF_BOARD_OPTION_8703B		0xC1
#define	EEPROM_FEATURE_OPTION_8703B			0xC2
#define	EEPROM_RF_BT_SETTING_8703B			0xC3
#define	EEPROM_VERSION_8703B					0xC4
#define	EEPROM_CustomID_8703B					0xC5
#define	EEPROM_TX_BBSWING_2G_8703B			0xC6
#define	EEPROM_TX_PWR_CALIBRATE_RATE_8703B	0xC8
#define	EEPROM_RF_ANTENNA_OPT_8703B		0xC9
#define	EEPROM_RFE_OPTION_8703B				0xCA
#define EEPROM_COUNTRY_CODE_8703B			0xCB

/* MAC Hidden */
#define PPG_MAC_HIDDEN_START_8703B			0xF0
#define PPG_MAC_HIDDEN_END_8703B			0xFF
#define EEPROM_HCI_AND_PACKAGE_TYPE_8703B	0xF8
#define EEPROM_WL_FUNC_CAP_8703B			0xF9
#define EEPROM_BW_AND_ANT_NUM_CAP_8703B		0xFB
#define GET_PMH_HCI_TYPE_8703B(_pmh_m)		LE_BITS_TO_1BYTE(((u8 *)(_pmh_m)) + EEPROM_HCI_AND_PACKAGE_TYPE_8703B - PPG_MAC_HIDDEN_START_8703B, 0, 4)
#define	GET_PMH_PACKAGE_TYPE_8703B(_pmh_m)	LE_BITS_TO_1BYTE(((u8 *)(_pmh_m)) + EEPROM_HCI_AND_PACKAGE_TYPE_8703B - PPG_MAC_HIDDEN_START_8703B, 4, 4)
#define GET_PMH_WL_FUNC_CAP_8703B(_pmh_m)	LE_BITS_TO_1BYTE(((u8 *)(_pmh_m)) + EEPROM_WL_FUNC_CAP_8703B - PPG_MAC_HIDDEN_START_8703B, 0, 4)
#define GET_PMH_BW_CAP_8703B(_pmh_m)		LE_BITS_TO_1BYTE(((u8 *)(_pmh_m)) + EEPROM_BW_AND_ANT_NUM_CAP_8703B - PPG_MAC_HIDDEN_START_8703B, 0, 3)
#define GET_PMH_ANT_NUM_CAP_8703B(_pmh_m)	LE_BITS_TO_1BYTE(((u8 *)(_pmh_m)) + EEPROM_BW_AND_ANT_NUM_CAP_8703B - PPG_MAC_HIDDEN_START_8703B, 5, 3)

/* RTL8703BU */
#define EEPROM_MAC_ADDR_8703BU                          0x107
#define EEPROM_VID_8703BU                               0x100
#define EEPROM_PID_8703BU                               0x102
#define EEPROM_USB_OPTIONAL_FUNCTION0_8703BU            0x104
#define EEPROM_PA_TYPE_8703BU                           0xBC
#define EEPROM_LNA_TYPE_2G_8703BU                       0xBD

//RTL8703BS
#define	EEPROM_MAC_ADDR_8703BS				0x11A
#define 	EEPROM_Voltage_ADDR_8703B			0x8

//====================================================
//			EEPROM/Efuse Value Type
//====================================================
#define EETYPE_TX_PWR							0x0
//====================================================
//			EEPROM/Efuse Default Value
//====================================================
#define EEPROM_CID_DEFAULT					0x0
#define EEPROM_CID_DEFAULT_EXT				0xFF // Reserved for Realtek
#define EEPROM_CID_TOSHIBA						0x4
#define EEPROM_CID_CCX							0x10
#define EEPROM_CID_QMI							0x0D
#define EEPROM_CID_WHQL 						0xFE

#define EEPROM_CHANNEL_PLAN_FCC				0x0
#define EEPROM_CHANNEL_PLAN_IC				0x1
#define EEPROM_CHANNEL_PLAN_ETSI				0x2
#define EEPROM_CHANNEL_PLAN_SPAIN			0x3
#define EEPROM_CHANNEL_PLAN_FRANCE			0x4
#define EEPROM_CHANNEL_PLAN_MKK				0x5
#define EEPROM_CHANNEL_PLAN_MKK1				0x6
#define EEPROM_CHANNEL_PLAN_ISRAEL			0x7
#define EEPROM_CHANNEL_PLAN_TELEC			0x8
#define EEPROM_CHANNEL_PLAN_GLOBAL_DOMAIN	0x9
#define EEPROM_CHANNEL_PLAN_WORLD_WIDE_13	0xA
#define EEPROM_CHANNEL_PLAN_NCC_TAIWAN		0xB
#define EEPROM_CHANNEL_PLAN_CHIAN			0XC
#define EEPROM_CHANNEL_PLAN_SINGAPORE_INDIA_MEXICO  0XD
#define EEPROM_CHANNEL_PLAN_KOREA			0xE
#define EEPROM_CHANNEL_PLAN_TURKEY              	0xF
#define EEPROM_CHANNEL_PLAN_JAPAN                 	0x10
#define EEPROM_CHANNEL_PLAN_FCC_NO_DFS		0x11
#define EEPROM_CHANNEL_PLAN_JAPAN_NO_DFS	0x12
#define EEPROM_CHANNEL_PLAN_WORLD_WIDE_5G	0x13
#define EEPROM_CHANNEL_PLAN_TAIWAN_NO_DFS 	0x14

#define EEPROM_USB_OPTIONAL1					0xE
#define EEPROM_CHANNEL_PLAN_BY_HW_MASK		0x80

#define RTL_EEPROM_ID							0x8129
#define EEPROM_Default_TSSI						0x0
#define EEPROM_Default_BoardType				0x02
#define EEPROM_Default_ThermalMeter			0x12
#define EEPROM_Default_ThermalMeter_92SU		0x7
#define EEPROM_Default_ThermalMeter_88E		0x18
#define EEPROM_Default_ThermalMeter_8812		0x18
#define	EEPROM_Default_ThermalMeter_8192E			0x1A
#define	EEPROM_Default_ThermalMeter_8723B		0x18
#define	EEPROM_Default_ThermalMeter_8703B		0x18
#define	EEPROM_Default_ThermalMeter_8188F		0x18
#define EEPROM_Default_ThermalMeter_8814A		0x18


#define EEPROM_Default_CrystalCap				0x0
#define EEPROM_Default_CrystalCap_8723A		0x20
#define EEPROM_Default_CrystalCap_88E 			0x20
#define EEPROM_Default_CrystalCap_8812			0x20
#define EEPROM_Default_CrystalCap_8814			0x20
#define EEPROM_Default_CrystalCap_8192E			0x20
#define EEPROM_Default_CrystalCap_8723B			0x20
#define EEPROM_Default_CrystalCap_8703B			0x20
#define EEPROM_Default_CrystalCap_8188F			0x20
#define EEPROM_Default_CrystalFreq				0x0
#define EEPROM_Default_TxPowerLevel_92C		0x22
#define EEPROM_Default_TxPowerLevel_2G			0x2C
#define EEPROM_Default_TxPowerLevel_5G			0x22
#define EEPROM_Default_TxPowerLevel			0x22
#define EEPROM_Default_HT40_2SDiff				0x0
#define EEPROM_Default_HT20_Diff				2
#define EEPROM_Default_LegacyHTTxPowerDiff		0x3
#define EEPROM_Default_LegacyHTTxPowerDiff_92C	0x3
#define EEPROM_Default_LegacyHTTxPowerDiff_92D	0x4	
#define EEPROM_Default_HT40_PwrMaxOffset		0
#define EEPROM_Default_HT20_PwrMaxOffset		0

#define EEPROM_Default_PID						0x1234
#define EEPROM_Default_VID						0x5678
#define EEPROM_Default_CustomerID				0xAB
#define EEPROM_Default_CustomerID_8188E		0x00
#define EEPROM_Default_SubCustomerID			0xCD
#define EEPROM_Default_Version					0

#define EEPROM_Default_externalPA_C9		0x00
#define EEPROM_Default_externalPA_CC		0xFF
#define EEPROM_Default_internalPA_SP3T_C9	0xAA
#define EEPROM_Default_internalPA_SP3T_CC	0xAF
#define EEPROM_Default_internalPA_SPDT_C9	0xAA
#ifdef CONFIG_PCI_HCI
#define EEPROM_Default_internalPA_SPDT_CC	0xA0
#else
#define EEPROM_Default_internalPA_SPDT_CC	0xFA
#endif
#define EEPROM_Default_PAType						0
#define EEPROM_Default_LNAType						0

//New EFUSE deafult value
#define EEPROM_DEFAULT_24G_INDEX			0x2D
#define EEPROM_DEFAULT_24G_HT20_DIFF		0X02
#define EEPROM_DEFAULT_24G_OFDM_DIFF	0X04

#define EEPROM_DEFAULT_5G_INDEX			0X2A
#define EEPROM_DEFAULT_5G_HT20_DIFF		0X00
#define EEPROM_DEFAULT_5G_OFDM_DIFF		0X04

#define EEPROM_DEFAULT_DIFF				0XFE
#define EEPROM_DEFAULT_CHANNEL_PLAN		0x7F
#define EEPROM_DEFAULT_BOARD_OPTION		0x00
#define EEPROM_DEFAULT_RFE_OPTION_8192E 0xFF
#define EEPROM_DEFAULT_RFE_OPTION_8188E 0xFF
#define EEPROM_DEFAULT_RFE_OPTION		0x04
#define EEPROM_DEFAULT_FEATURE_OPTION	0x00
#define EEPROM_DEFAULT_BT_OPTION			0x10


#define EEPROM_DEFAULT_TX_CALIBRATE_RATE	0x00

// PCIe related
#define	EEPROM_PCIE_DEV_CAP_01				0xE0 // Express device capability in PCIe configuration space, i.e., map to offset 0x74
#define	EEPROM_PCIE_DEV_CAP_02				0xE1 // Express device capability in PCIe configuration space, i.e., map to offset 0x75


//
// For VHT series TX power by rate table.
// VHT TX power by rate off setArray = 
// Band:-2G&5G = 0 / 1
// RF: at most 4*4 = ABCD=0/1/2/3
// CCK=0 OFDM=1/2 HT-MCS 0-15=3/4/56 VHT=7/8/9/10/11			
//
#define TX_PWR_BY_RATE_NUM_BAND			2
#define TX_PWR_BY_RATE_NUM_RF			4
#define TX_PWR_BY_RATE_NUM_RATE			84

#define TXPWR_LMT_MAX_RF				4

//----------------------------------------------------------------------------
//       EEPROM/EFUSE data structure definition.
//----------------------------------------------------------------------------

//For 88E new structure

/*
2.4G: 
{
{1,2},
{3,4,5},
{6,7,8},
{9,10,11},
{12,13},
{14}
}

5G:
{
{36,38,40},
{44,46,48},
{52,54,56},
{60,62,64},
{100,102,104},
{108,110,112},
{116,118,120},
{124,126,128},
{132,134,136},
{140,142,144},
{149,151,153},
{157,159,161},
{173,175,177},
}
*/
#define	MAX_RF_PATH				1
#define RF_PATH_MAX				MAX_RF_PATH	
#define	MAX_CHNL_GROUP_24G		6 
#define	MAX_CHNL_GROUP_5G		14 

//It must always set to 4, otherwise read efuse table secquence will be wrong.
#define 	MAX_TX_COUNT				4

typedef struct _TxPowerInfo24G{
	u8 IndexCCK_Base[MAX_RF_PATH][MAX_CHNL_GROUP_24G];
	u8 IndexBW40_Base[MAX_RF_PATH][MAX_CHNL_GROUP_24G];
	//If only one tx, only BW20 and OFDM are used.
	s8 CCK_Diff[MAX_RF_PATH][MAX_TX_COUNT];	
	s8 OFDM_Diff[MAX_RF_PATH][MAX_TX_COUNT];
	s8 BW20_Diff[MAX_RF_PATH][MAX_TX_COUNT];
	s8 BW40_Diff[MAX_RF_PATH][MAX_TX_COUNT];
}TxPowerInfo24G, *PTxPowerInfo24G;

typedef struct _TxPowerInfo5G{
	u8 IndexBW40_Base[MAX_RF_PATH][MAX_CHNL_GROUP_5G];
	//If only one tx, only BW20, OFDM, BW80 and BW160 are used.
	s8 OFDM_Diff[MAX_RF_PATH][MAX_TX_COUNT];
	s8 BW20_Diff[MAX_RF_PATH][MAX_TX_COUNT];
	s8 BW40_Diff[MAX_RF_PATH][MAX_TX_COUNT];
	s8 BW80_Diff[MAX_RF_PATH][MAX_TX_COUNT];
	s8 BW160_Diff[MAX_RF_PATH][MAX_TX_COUNT];
}TxPowerInfo5G, *PTxPowerInfo5G;


typedef	enum _BT_Ant_NUM{
	Ant_x2	= 0,		
	Ant_x1	= 1
} BT_Ant_NUM, *PBT_Ant_NUM;

typedef	enum _BT_CoType{
	BT_2WIRE		= 0,		
	BT_ISSC_3WIRE	= 1,
	BT_ACCEL		= 2,
	BT_CSR_BC4		= 3,
	BT_CSR_BC8		= 4,
	BT_RTL8756		= 5,
	BT_RTL8723A		= 6,
	BT_RTL8821		= 7,
	BT_RTL8723B		= 8,
	BT_RTL8192E		= 9,
	BT_RTL8814A		= 10,
	BT_RTL8812A		= 11,
	BT_RTL8703B		= 12
} BT_CoType, *PBT_CoType;

typedef	enum _BT_RadioShared{
	BT_Radio_Shared 	= 0,	
	BT_Radio_Individual	= 1,
} BT_RadioShared, *PBT_RadioShared;


#endif
