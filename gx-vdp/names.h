/* gx-vdp/names.h, Copyright (C) 2013 Alex Iadicicco */

#ifndef __INC_GX_VDP_NAMES_H__
#define __INC_GX_VDP_NAMES_H__   1

/* The VDP used in the Sega Mega Drive is an enhanced version of the
   TMS9918 from Texas Instruments */

#define VDP_DATA   0xc00000
#define VDP_CTL    0xc00004

#define VDP_REG(n) (0x8000 | ((n) << 8))
#define VDP_MSR1   VDP_REG(0)  /* mode set reg 1 */
#define VDP_MSR2   VDP_REG(1)  /* mode set reg 2 */
#define VDP_PNTSA  VDP_REG(2)  /* pat name table base for scroll a */
#define VDP_PNTWN  VDP_REG(3)  /* pat name table base for window */
#define VDP_PNTSB  VDP_REG(4)  /* pat name table base for scroll b */
#define VDP_SAT    VDP_REG(5)  /* sprite attr table base */
#define VDP_BGCOL  VDP_REG(7)  /* background color */
#define VDP_HINT   VDP_REG(10) /* h interrupt register */
#define VDP_MSR3   VDP_REG(11) /* mode set reg 3 */
#define VDP_MSR4   VDP_REG(12) /* mode set reg 4 */
#define VDP_HSDT   VDP_REG(13) /* h scroll data table base addr */
#define VDP_INCR   VDP_REG(15) /* auto increment data */
#define VDP_SSZ    VDP_REG(16) /* scroll size */
#define VDP_WINH   VDP_REG(17) /* window h position */
#define VDP_WINV   VDP_REG(18) /* window v position */
#define VDP_DMALCL VDP_REG(19) /* dma length counter low */
#define VDP_DMALCH VDP_REG(20) /* dma length counter high */
#define VDP_DMASAL VDP_REG(21) /* dma source address low */
#define VDP_DMASAM VDP_REG(22) /* dma source address mid */
#define VDP_DMASAH VDP_REG(23) /* dma source address high */

#define VDPS_FIFOEMPTY   0x0200 /* FIFO empty */
#define VDPS_FIFOFULL    0x0100 /* FIFO full */
#define VDPS_VINTPEND    0x0080 /* vertical interrupt pending */
#define VDPS_SPRITEOFL   0x0040 /* sprite overflow on this scan line */
#define VDPS_SPRITECOLL  0x0020 /* sprite collision */
#define VDPS_ODDFRAME    0x0010 /* odd frame */
#define VDPS_VBLANK      0x0008 /* vertical blanking */
#define VDPS_HBLANK      0x0004 /* horizontal blanking */
#define VDPS_DMAINP      0x0002 /* DMA in progress */
#define VDPS_PALMODE     0x0001 /* PAL mode flag */

#endif