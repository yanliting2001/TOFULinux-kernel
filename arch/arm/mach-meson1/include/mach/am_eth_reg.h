/*******************************************************************
 *
 *  Copyright C 2005 by Amlogic, Inc. All Rights Reserved.
 *
 *  Description: phriphs register definitions for nike.
 *
 *  Author: zhouzhi
 *  Created: 2008-8-10
 *
 *******************************************************************/
#ifndef __ETH_REG_H_
#define __ETH_REG_H_
#define ETH_DMA_0_Bus_Mode                  (0x1000)
#define ETH_DMA_1_Tr_Poll_Demand        (0x1004)
#define ETH_DMA_2_Re_Poll_Demand        (0x1008)
#define ETH_DMA_3_Re_Descriptor_List_Addr   (0x100C)
#define ETH_DMA_4_Tr_Descriptor_List_Addr   (0x1010)
#define ETH_DMA_5_Status            (0x1014)
#define ETH_DMA_6_Operation_Mode        (0x1018)
#define ETH_DMA_7_Interrupt_Enable      (0x101C)
#define ETH_DMA_8_Missed_Frame_and_Overflow (0x1020)
#define ETH_DMA_9_Reserved          (0x1024)
#define ETH_DMA_10_Reserved         (0x1028)
#define ETH_DMA_11_Reserved         (0x102c)
#define ETH_DMA_12_Reserved         (0x1030)
#define ETH_DMA_13_Reserved         (0x1034)
#define ETH_DMA_14_Reserved         (0x1038)
#define ETH_DMA_15_Reserved         (0x103c)
#define ETH_DMA_16_Reserved         (0x1040)
#define ETH_DMA_17_Reserved         (0x1044)
#define ETH_DMA_18_Curr_Host_Tr_Descriptor  (0x1048)
#define ETH_DMA_19_Curr_Host_Re_Descriptor  (0x104C)
#define ETH_DMA_20_Curr_Host_Tr_Buffer_Addr (0x1050)
#define ETH_DMA_21_Curr_Host_Re_Buffer_Addr (0x1054)
#define ETH_MAC_0_Configuration         (0x0000)
#define ETH_MAC_1_Frame_Filter          (0x0004)
#define ETH_MAC_2_Hash_Table_High       (0x0008)
#define ETH_MAC_3_Hash_Table_Low        (0x000C)
#define ETH_MAC_4_GMII_Addr         (0x0010)
#define ETH_MAC_5_GMII_Data         (0x0014)
#define ETH_MAC_6_Flow_Control          (0x0018)
#define ETH_MAC_7_VLAN_Tag          (0x001C)
#define ETH_MAC_8_Version           (0x0020)
#define ETH_MAC_9_Reserved          (0x0024)
#define ETH_MAC_Remote_Wake_Up_Frame_Filter (0x0028)
#define ETH_MAC_PMT_Control_and_Status      (0x002C)
#define ETH_MAC_12_Reserved         (0x0030)
#define ETH_MAC_13_Reserved         (0x0034)
#define ETH_MAC_Interrupt           (0x0038)
#define ETH_MAC_Interrupt_Mask          (0x003C)
#define ETH_MAC_Addr0_High          (0x0040)
#define ETH_MAC_Addr0_Low           (0x0044)
#define ETH_MAC_Addr1_High          (0x0048)
#define ETH_MAC_Addr1_Low           (0x004C)
#define ETH_MAC_Addr2_High          (0x0050)
#define ETH_MAC_Addr2_Low           (0x0054)
#define ETH_MAC_Addr3_High          (0x0058)
#define ETH_MAC_Addr3_Low           (0x005C)
#define ETH_MAC_Addr4_High          (0x0060)
#define ETH_MAC_Addr4_Low           (0x0064)
#define ETH_MAC_Addr5_High          (0x0068)
#define ETH_MAC_Addr5_Low           (0x006C)
#define ETH_MAC_Addr6_High          (0x0070)
#define ETH_MAC_Addr6_Low           (0x0074)
#define ETH_MAC_Addr7_High          (0x0078)
#define ETH_MAC_Addr7_Low           (0x007C)
#define ETH_MAC_Addr8_High          (0x0080)
#define ETH_MAC_Addr8_Low           (0x0084)
#define ETH_MAC_Addr9_High          (0x0088)
#define ETH_MAC_Addr9_Low           (0x008C)
#define ETH_MAC_Addr10_High         (0x0090)
#define ETH_MAC_Addr10_Low          (0x0094)
#define ETH_MAC_Addr11_High         (0x0098)
#define ETH_MAC_Addr11_Low          (0x009C)
#define ETH_MAC_Addr12_High         (0x00A0)
#define ETH_MAC_Addr12_Low          (0x00A4)
#define ETH_MAC_Addr13_High         (0x00A8)
#define ETH_MAC_Addr13_Low          (0x00AC)
#define ETH_MAC_Addr14_High         (0x00B0)
#define ETH_MAC_Addr14_Low          (0x00B4)
#define ETH_MAC_Addr15_High         (0x00B8)
#define ETH_MAC_Addr15_Low          (0x00BC)
#define ETH_MAC_48_AN_Control           (0x00C0)
#define ETH_MAC_49_AN_Status            (0x00C4)
#define ETH_MAC_50_AN_Advertisement     (0x00C8)
#define ETH_MAC_51_AN_Link_Partner_Ability  (0x00CC)
#define ETH_MAC_52_AN_Expansion         (0x00D0)
#define ETH_MAC_53_TBI_Extended_Status      (0x00D4)
#define ETH_MAC_54_SGMII_RGMII_Status       (0x00D8)
#define ETH_MAC_55_Reserved         (0x00DC)
#define ETH_MAC_56_Reserved         (0x00E0)
#define ETH_MAC_57_Reserved         (0x00E4)
#define ETH_MAC_58_Reserved         (0x00E8)
#define ETH_MAC_59_Reserved         (0x00EC)
#define ETH_MAC_60_Reserved         (0x00F0)
#define ETH_MAC_61_Reserved         (0x00F4)
#define ETH_MAC_62_Reserved         (0x00F8)
#define ETH_MAC_63_Reserved         (0x00FC)
#define ETH_MMC_cntrl               (0x0100)
#define ETH_MMC_intr_rx             (0x0104)
#define ETH_MMC_intr_tx             (0x0108)
#define ETH_MMC_intr_mask_rx            (0x010C)
#define ETH_MMC_intr_mask_tx            (0x0110)
#define ETH_MMC_txoctetcount_gb         (0x0114)
#define ETH_MMC_txframecount_gb         (0x0118)
#define ETH_MMC_txbroadcastframes_g     (0x011C)
#define ETH_MMC_txmulticastframes_g     (0x0120)
#define ETH_MMC_tx64octets_gb           (0x0124)
#define ETH_MMC_tx65to127octets_gb      (0x0128)
#define ETH_MMC_tx128to255octets_gb     (0x012C)
#define ETH_MMC_tx256to511octets_gb     (0x0130)
#define ETH_MMC_tx512to1023octets_gb        (0x0134)
#define ETH_MMC_tx1024tomaxoctets_gb        (0x0138)
#define ETH_MMC_txunicastframes_gb      (0x013C)
#define ETH_MMC_txmulticastframes_gb        (0x0140)
#define ETH_MMC_txbroadcastframes_gb        (0x0144)
#define ETH_MMC_txunderflowerror        (0x0148)
#define ETH_MMC_txsinglecol_g           (0x014C)
#define ETH_MMC_txmulticol_g            (0x0150)
#define ETH_MMC_txdeferred          (0x0154)
#define ETH_MMC_txlatecol           (0x0158)
#define ETH_MMC_txexesscol          (0x015C)
#define ETH_MMC_txcarriererror          (0x0160)
#define ETH_MMC_txoctetcount_g          (0x0164)
#define ETH_MMC_txframecount_g          (0x0168)
#define ETH_MMC_txexcessdef         (0x016C)
#define ETH_MMC_txpauseframes           (0x0170)
#define ETH_MMC_txvlanframes_g          (0x0174)
#define ETH_MMC_94_Reserved         (0x0178)
#define ETH_MMC_95_Reserved         (0x017C)
#define ETH_MMC_rxframecount_gb         (0x0180)
#define ETH_MMC_rxoctetcount_gb         (0x0184)
#define ETH_MMC_rxoctetcount_g          (0x0188)
#define ETH_MMC_rxbroadcastframes_g     (0x018C)
#define ETH_MMC_rxmulticastframes_g     (0x0190)
#define ETH_MMC_rxcrcerror          (0x0194)
#define ETH_MMC_rxalignmenterror        (0x0198)
#define ETH_MMC_rxrunterror         (0x019C)
#define ETH_MMC_rxjabbererror           (0x01A0)
#define ETH_MMC_rxundersize_g           (0x01A4)
#define ETH_MMC_rxoversize_g            (0x01A8)
#define ETH_MMC_rx64octets_gb           (0x01AC)
#define ETH_MMC_rx65to127octets_gb      (0x01B0)
#define ETH_MMC_rx128to255octets_gb     (0x01B4)
#define ETH_MMC_rx256to511octets_gb     (0x01B8)
#define ETH_MMC_rx512to1023octets_gb        (0x01BC)
#define ETH_MMC_rx1024tomaxoctets_gb        (0x01C0)
#define ETH_MMC_rxunicastframes_g       (0x01C4)
#define ETH_MMC_rxlengtherror           (0x01C8)
#define ETH_MMC_rxoutofrangetype        (0x01CC)
#define ETH_MMC_rxpauseframes           (0x01D0)
#define ETH_MMC_rxfifooverflow          (0x01D4)
#define ETH_MMC_rxvlanframes_gb         (0x01D8)
#define ETH_MMC_rxwatchdogerror         (0x01DC)
#define ETH_MMC_120_Reserved            (0x01E0)
#define ETH_MMC_121_Reserved            (0x01E4)
#define ETH_MMC_122_Reserved            (0x01E8)
#define ETH_MMC_123_Reserved            (0x01EC)
#define ETH_MMC_124_Reserved            (0x01F0)
#define ETH_MMC_125_Reserved            (0x01F4)
#define ETH_MMC_126_Reserved            (0x01F8)
#define ETH_MMC_127_Reserved            (0x01FC)
#define ETH_MMC_ipc_intr_mask_rx        (0x0200)
#define ETH_MMC_129_Reserved            (0x0204)
#define ETH_MMC_ipc_intr_rx         (0x0208)
#define ETH_MMC_131_Reserved            (0x020C)
#define ETH_MMC_rxipv4_gd_frms          (0x0210)
#define ETH_MMC_rxipv4_hdrerr_frms      (0x0214)
#define ETH_MMC_rxipv4_nopay_frms       (0x0218)
#define ETH_MMC_rxipv4_frag_frms        (0x021C)
#define ETH_MMC_rxipv4_udsbl_frms       (0x0220)
#define ETH_MMC_rxipv6_gd_frms          (0x0224)
#define ETH_MMC_rxipv6_hdrerr_frms      (0x0228)
#define ETH_MMC_rxipv6_nopay_frms       (0x022C)
#define ETH_MMC_rxudp_gd_frms           (0x0230)
#define ETH_MMC_rxudp_err_frms          (0x0234)
#define ETH_MMC_rxtcp_gd_frms           (0x0238)
#define ETH_MMC_rxtcp_err_frms          (0x023C)
#define ETH_MMC_rxicmp_gd_frms          (0x0240)
#define ETH_MMC_rxicmp_err_frms         (0x0244)
#define ETH_MMC_146_Reserved            (0x0248)
#define ETH_MMC_147_Reserved            (0x024C)
#define ETH_MMC_rxipv4_gd_octets        (0x0250)
#define ETH_MMC_rxipv4_hdrerr_octets        (0x0254)
#define ETH_MMC_rxipv4_nopay_octets     (0x0258)
#define ETH_MMC_rxipv4_frag_octets      (0x025C)
#define ETH_MMC_rxipv4_udsbl_octets     (0x0260)
#define ETH_MMC_rxipv6_gd_octets        (0x0264)
#define ETH_MMC_rxipv6_hdrerr_octets        (0x0268)
#define ETH_MMC_rxipv6_nopay_octets     (0x026C)
#define ETH_MMC_rxudp_gd_octets         (0x0270)
#define ETH_MMC_rxudp_err_octets        (0x0274)
#define ETH_MMC_rxtcp_gd_octets         (0x0278)
#define ETH_MMC_rxtcp_err_octets        (0x027C)
#define ETH_MMC_rxicmp_gd_octets        (0x0280)
#define ETH_MMC_rxicmp_err_octets       (0x0284)

#endif
