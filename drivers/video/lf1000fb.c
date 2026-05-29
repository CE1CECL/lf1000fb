#undef LF1000_DIDJ
#undef LF1000_STER
#undef LF1000_PAD

//#define LF1000_DIDJ
#define LF1000_STER
//#define LF1000_PAD

#include <asm/io.h>
#include <asm/uaccess.h>
#include <linux/cpufreq.h>
#include <linux/delay.h>
#include <linux/errno.h>
#include <linux/fb.h>
#include <linux/init.h>
#include <linux/interrupt.h>
#include <linux/ioport.h>
#include <linux/kernel.h>
#include <linux/mm.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/platform_device.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <mach/mlc.h>
#include <mach/platform.h>
#undef ALPHA
#undef BCLKMODE
#undef BDITHER
#undef BIT_CLR
#undef BIT_MASK_ONES
#undef BIT_SET
#undef BLENDENB
#undef BOTTOM
#undef CLKDIV0
#undef CLKDIV1
#undef CLKSRCSEL0
#undef CLKSRCSEL1
#undef CPCYC
#undef DACENB
#undef DELAYDE
#undef DELAYHS
#undef DELAYRGB
#undef DELAYVS
#undef DIRTYFLAG
#undef DISPLAY_VID_PRI_HSYNC_ACTIVEHIGH
#undef DISPLAY_VID_PRI_HSYNC_BACK_PORCH
#undef DISPLAY_VID_PRI_HSYNC_FRONT_PORCH
#undef DISPLAY_VID_PRI_HSYNC_SWIDTH
#undef DISPLAY_VID_PRI_OUTORDER
#undef DISPLAY_VID_PRI_OUTPUT_FORMAT
#undef DISPLAY_VID_PRI_PAD_VCLK
#undef DISPLAY_VID_PRI_SWAP_RGB
#undef DISPLAY_VID_PRI_VCLK2_DIV
#undef DISPLAY_VID_PRI_VCLK2_SOURCE
#undef DISPLAY_VID_PRI_VCLK_DELAY
#undef DISPLAY_VID_PRI_VCLK_INV
#undef DISPLAY_VID_PRI_VCLK_OUT_ENB
#undef DISPLAY_VID_PRI_VCLK_SOURCE
#undef DISPLAY_VID_PRI_VSYNC_ACTIVEHIGH
#undef DISPLAY_VID_PRI_VSYNC_BACK_PORCH
#undef DISPLAY_VID_PRI_VSYNC_FRONT_PORCH
#undef DISPLAY_VID_PRI_VSYNC_SWIDTH
#undef DITTYFLAG
#undef DPCCLKENB
#undef DPCCLKGEN0
#undef DPCCLKGEN1
#undef DPCCTRL0
#undef DPCCTRL1
#undef DPCCTRL2
#undef DPCDELAY0
#undef DPCENB
#undef DPCEVAEND
#undef DPCEVASTART
#undef DPCEVSEOFFSET
#undef DPCEVSSOFFSET
#undef DPCEVSWIDTH
#undef DPCEVTOTAL
#undef DPCHAEND
#undef DPCHASTART
#undef DPCHSWIDTH
#undef DPCHTOTAL
#undef DPCVAEND
#undef DPCVASTART
#undef DPCVSEOFFSET
#undef DPCVSSOFFSET
#undef DPCVSWIDTH
#undef DPCVTOTAL
#undef DPC_DESIRED_CLOCK_HZ
#undef DPUPSCALECON0
#undef DPUPSCALECON1
#undef DPUPSCALECON2
#undef ENCENB
#undef FBIO_DISABLE_TVOUT
#undef FBIO_ENABLE_TVOUT
#undef FIELDENB
#undef FORMAT
#undef FORMAT1
#undef GDITHER
#undef GRP3DENB
#undef HFILTERENB
#undef HSCALE
#undef INVALIDBOTTOM
#undef INVALIDENB
#undef INVALIDLEFT
#undef INVALIDRIGHT
#undef INVALIDTOP
#undef INVCOLOR
#undef INVENB
#undef IS_CLR
#undef IS_SET
#undef LAYERENB
#undef LCDTYPE
#undef LEFT
#undef LOCKSIZE
#undef MLCADDRESS0
#undef MLCADDRESS1
#undef MLCADDRESS2
#undef MLCADDRESSCB
#undef MLCADDRESSCR
#undef MLCBGCOLOR
#undef MLCCLKENB
#undef MLCCONTROL0
#undef MLCCONTROL1
#undef MLCCONTROL2
#undef MLCCONTROLT
#undef MLCENB
#undef MLCHSCALE
#undef MLCHSTRIDE0
#undef MLCHSTRIDE1
#undef MLCINVCOLOR0
#undef MLCINVCOLOR1
#undef MLCINVCOLOR2
#undef MLCLEFTOP0
#undef MLCLEFTOP1
#undef MLCLEFTOP2
#undef MLCLEFTRIGHT0
#undef MLCLEFTRIGHT0_0
#undef MLCLEFTRIGHT1
#undef MLCLEFTRIGHT1_0
#undef MLCLEFTRIGHT2
#undef MLCRIGHTBOTTOM0
#undef MLCRIGHTBOTTOM1
#undef MLCRIGHTBOTTOM2
#undef MLCSCREENSIZE
#undef MLCSTRIDECB
#undef MLCSTRIDECR
#undef MLCTOPBOTTOM0
#undef MLCTOPBOTTOM0_0
#undef MLCTOPBOTTOM1
#undef MLCTOPBOTTOM1_0
#undef MLCTOPBOTTOM2
#undef MLCTPCOLOR0
#undef MLCTPCOLOR1
#undef MLCTPCOLOR2
#undef MLCVSCALE
#undef MLCVSTRIDE0
#undef MLCVSTRIDE1
#undef MLCVSTRIDE2
#undef MLC_IOCGINVISIBLEAREA
#undef MLC_IOCGOVERLAYSIZE
#undef MLC_IOCGPOSITION
#undef MLC_IOCGSCREENSIZE
#undef MLC_IOCQ3DENB
#undef MLC_IOCQADDRESS
#undef MLC_IOCQADDRESSCB
#undef MLC_IOCQADDRESSCR
#undef MLC_IOCQALPHA
#undef MLC_IOCQBACKGND
#undef MLC_IOCQBLEND
#undef MLC_IOCQDIRTY
#undef MLC_IOCQFBSIZE
#undef MLC_IOCQFORMAT
#undef MLC_IOCQHSTRIDE
#undef MLC_IOCQINVCOLOR
#undef MLC_IOCQINVERT
#undef MLC_IOCQINVISIBLE
#undef MLC_IOCQLOCKSIZE
#undef MLC_IOCQPRIORITY
#undef MLC_IOCQTPCOLOR
#undef MLC_IOCQTRANSP
#undef MLC_IOCQVSTRIDE
#undef MLC_IOCSINVISIBLEAREA
#undef MLC_IOCSOVERLAYSIZE
#undef MLC_IOCSPOSITION
#undef MLC_IOCSSCREENSIZE
#undef MLC_IOCT3DENB
#undef MLC_IOCTADDRESS
#undef MLC_IOCTADDRESSCB
#undef MLC_IOCTADDRESSCR
#undef MLC_IOCTALPHA
#undef MLC_IOCTBACKGND
#undef MLC_IOCTBLEND
#undef MLC_IOCTDIRTY
#undef MLC_IOCTENABLE
#undef MLC_IOCTFORMAT
#undef MLC_IOCTHSTRIDE
#undef MLC_IOCTINVCOLOR
#undef MLC_IOCTINVERT
#undef MLC_IOCTINVISIBLE
#undef MLC_IOCTLAYEREN
#undef MLC_IOCTLOCKSIZE
#undef MLC_IOCTPRIORITY
#undef MLC_IOCTTOPDIRTY
#undef MLC_IOCTTPCOLOR
#undef MLC_IOCTTRANSP
#undef MLC_IOCTVSTRIDE
#undef MLC_IOC_MAGIC
#undef MLC_NUM_LAYERS
#undef MLC_VIDEO_LAYER
#undef OUTCLKDELAY0
#undef OUTCLKDELAY1
#undef OUTCLKENB
#undef OUTCLKINV0
#undef OUTCLKINV1
#undef PADCLKSEL
#undef PALETTEPWD
#undef PALETTESLD
#undef PALETTE_CLEAR
#undef PIXELBUFFER_PWD
#undef PIXELBUFFER_SLD
#undef POLFIELD
#undef POLHSYNC
#undef POLVSYNC
#undef PRIORITY
#undef RDITHER
#undef RGBMODE
#undef RIGHT
#undef SCANMODE
#undef SCREENHEIGHT
#undef SCREENWIDTH
#undef SEAVENB
#undef STNLCDBITWIDTH
#undef SWAPRB
#undef TOP
#undef TPCOLOR
#undef TPENB
#undef VENCBRT
#undef VENCCRT
#undef VENCCTRLA
#undef VENCCTRLB
#undef VENCDACSEL
#undef VENCFSCADJH
#undef VENCFSCADJL
#undef VENCHSOE
#undef VENCHSOS
#undef VENCHSVS0
#undef VENCHUE
#undef VENCICNTL
#undef VENCSAT
#undef VENCSCH
#undef VENCVSOE
#undef VENCVSOS
#undef VFILTERENB
#undef VISUALTYPE
#undef VSCALE
#undef X_RESOLUTION
#undef YCORDER
#undef YCRANGE
#undef Y_RESOLUTION
#undef _CLKGENENB
#undef _INTENB
#undef _INTPEND
#undef _PCLKMODE
#define ALPHA 28
#define BCLKMODE 0
#define BDITHER 4
#define BIT_CLR(v, b) (v &= ~(1 << (b)))
#define BIT_MASK_ONES(b) ((1 << (b)) - 1)
#define BIT_SET(v, b) (v |= (1 << (b)))
#define BLENDENB 2
#define BOTTOM 0
#define CLKDIV0 4
#define CLKDIV1 4
#define CLKSRCSEL0 1
#define CLKSRCSEL1 1
#define CPCYC 12
#define DACENB 13
#define DELAYDE 8
#define DELAYHS 0
#define DELAYRGB 4
#define DELAYVS 4
#define DIRTYFLAG 4
#define DISPLAY_VID_PRI_HSYNC_ACTIVEHIGH 0
#define DISPLAY_VID_PRI_HSYNC_BACK_PORCH 36
#define DISPLAY_VID_PRI_HSYNC_FRONT_PORCH 50
#define DISPLAY_VID_PRI_HSYNC_SWIDTH 2
#define DISPLAY_VID_PRI_OUTORDER VID_ORDER_CbYCrY
#define DISPLAY_VID_PRI_OUTPUT_FORMAT VID_FORMAT_RGB888
#define DISPLAY_VID_PRI_PAD_VCLK VID_PADVCLK_nVCLK2
#define DISPLAY_VID_PRI_SWAP_RGB 0
#define DISPLAY_VID_PRI_VCLK2_DIV 0
#define DISPLAY_VID_PRI_VCLK2_SOURCE VID_VCLK_SOURCE_VCLK2
#define DISPLAY_VID_PRI_VCLK_DELAY 0
#define DISPLAY_VID_PRI_VCLK_INV 1
#define DISPLAY_VID_PRI_VCLK_OUT_ENB 0
#define DISPLAY_VID_PRI_VCLK_SOURCE VID_VCLK_SOURCE_PLL1
#define DISPLAY_VID_PRI_VSYNC_ACTIVEHIGH 0
#define DISPLAY_VID_PRI_VSYNC_BACK_PORCH 17
#define DISPLAY_VID_PRI_VSYNC_FRONT_PORCH 4
#define DISPLAY_VID_PRI_VSYNC_SWIDTH 1
#define DITTYFLAG 3
#define DPCCLKENB 0x1C0
#define DPCCLKGEN0 0x1C4
#define DPCCLKGEN1 0x1C8
#define DPCCTRL0 0x08C
#define DPCCTRL1 0x08E
#define DPCCTRL2 0x098
#define DPCDELAY0 0x0A2
#define DPCENB 15
#define DPCEVAEND 0x096
#define DPCEVASTART 0x094
#define DPCEVSEOFFSET 0x09E
#define DPCEVSSOFFSET 0x0A0
#define DPCEVSWIDTH 0x092
#define DPCEVTOTAL 0x090
#define DPCHAEND 0x082
#define DPCHASTART 0x080
#define DPCHSWIDTH 0x07E
#define DPCHTOTAL 0x07C
#define DPCVAEND 0x08A
#define DPCVASTART 0x088
#define DPCVSEOFFSET 0x09A
#define DPCVSSOFFSET 0x09C
#define DPCVSWIDTH 0x086
#define DPCVTOTAL 0x084
#define DPC_DESIRED_CLOCK_HZ 6400000
#define DPUPSCALECON0 0x0A4
#define DPUPSCALECON1 0x0A6
#define DPUPSCALECON2 0x0A8
#define ENCENB 14
#define FBIO_DISABLE_TVOUT _IO(MLC_IOC_MAGIC, 49)
#define FBIO_ENABLE_TVOUT _IO(MLC_IOC_MAGIC, 48)
#define FIELDENB 0
#define FORMAT 16
#define FORMAT1 8
#define GDITHER 2
#define GRP3DENB 8
#define HFILTERENB 28
#define HSCALE 0
#define INVALIDBOTTOM 0
#define INVALIDENB 28
#define INVALIDLEFT 16
#define INVALIDRIGHT 0
#define INVALIDTOP 16
#define INVCOLOR 0
#define INVENB 1
#define IS_CLR(v, b) !(v & (1 << (b)))
#define IS_SET(v, b) (v & (1 << (b)))
#define LAYERENB 5
#define LCDTYPE 8
#define LEFT 16
#define LOCKSIZE 12
#define MLCADDRESS0 0x38
#define MLCADDRESS1 0x6C
#define MLCADDRESS2 0x8C
#define MLCADDRESSCB 0x8C
#define MLCADDRESSCR 0x90
#define MLCBGCOLOR 0x8
#define MLCCLKENB 0x3C0
#define MLCCONTROL0 0x24
#define MLCCONTROL1 0x58
#define MLCCONTROL2 0x7C
#define MLCCONTROLT 0x00
#define MLCENB 1
#define MLCHSCALE 0x9C
#define MLCHSTRIDE0 0x28
#define MLCHSTRIDE1 0x5C
#define MLCINVCOLOR0 0x24
#define MLCINVCOLOR1 0x44
#define MLCINVCOLOR2 0x64
#define MLCLEFTOP0 0x0C
#define MLCLEFTOP1 0x2C
#define MLCLEFTOP2 0x4C
#define MLCLEFTRIGHT0 0x0C
#define MLCLEFTRIGHT0_0 0x14
#define MLCLEFTRIGHT1 0x40
#define MLCLEFTRIGHT1_0 0x48
#define MLCLEFTRIGHT2 0x74
#define MLCRIGHTBOTTOM0 0x10
#define MLCRIGHTBOTTOM1 0x30
#define MLCRIGHTBOTTOM2 0x50
#define MLCSCREENSIZE 0x04
#define MLCSTRIDECB 0x98
#define MLCSTRIDECR 0x9C
#define MLCTOPBOTTOM0 0x10
#define MLCTOPBOTTOM0_0 0x18
#define MLCTOPBOTTOM1 0x44
#define MLCTOPBOTTOM1_0 0x4C
#define MLCTOPBOTTOM2 0x78
#define MLCTPCOLOR0 0x30
#define MLCTPCOLOR1 0x64
#define MLCTPCOLOR2 0x84
#define MLCVSCALE 0xA0
#define MLCVSTRIDE0 0x2C
#define MLCVSTRIDE1 0x60
#define MLCVSTRIDE2 0x80
#define MLC_IOCGINVISIBLEAREA _IOR(MLC_IOC_MAGIC, 37, struct position_cmd *)
#define MLC_IOCGOVERLAYSIZE _IOR(MLC_IOC_MAGIC, 31, struct overlaysize_cmd *)
#define MLC_IOCGPOSITION _IOR(MLC_IOC_MAGIC, 14, struct position_cmd *)
#define MLC_IOCGSCREENSIZE _IOR(MLC_IOC_MAGIC, 7, struct screensize_cmd *)
#define MLC_IOCQ3DENB _IO(MLC_IOC_MAGIC, 33)
#define MLC_IOCQADDRESS _IO(MLC_IOC_MAGIC, 25)
#define MLC_IOCQADDRESSCB _IO(MLC_IOC_MAGIC, 45)
#define MLC_IOCQADDRESSCR _IO(MLC_IOC_MAGIC, 46)
#define MLC_IOCQALPHA _IO(MLC_IOC_MAGIC, 28)
#define MLC_IOCQBACKGND _IO(MLC_IOC_MAGIC, 2)
#define MLC_IOCQBLEND _IO(MLC_IOC_MAGIC, 41)
#define MLC_IOCQDIRTY _IO(MLC_IOC_MAGIC, 32)
#define MLC_IOCQFBSIZE _IO(MLC_IOC_MAGIC, 29)
#define MLC_IOCQFORMAT _IO(MLC_IOC_MAGIC, 16)
#define MLC_IOCQHSTRIDE _IO(MLC_IOC_MAGIC, 26)
#define MLC_IOCQINVCOLOR _IO(MLC_IOC_MAGIC, 44)
#define MLC_IOCQINVERT _IO(MLC_IOC_MAGIC, 43)
#define MLC_IOCQINVISIBLE _IO(MLC_IOC_MAGIC, 35)
#define MLC_IOCQLOCKSIZE _IO(MLC_IOC_MAGIC, 47)
#define MLC_IOCQPRIORITY _IO(MLC_IOC_MAGIC, 4)
#define MLC_IOCQTPCOLOR _IO(MLC_IOC_MAGIC, 40)
#define MLC_IOCQTRANSP _IO(MLC_IOC_MAGIC, 42)
#define MLC_IOCQVSTRIDE _IO(MLC_IOC_MAGIC, 27)
#define MLC_IOCSINVISIBLEAREA _IOW(MLC_IOC_MAGIC, 36, struct position_cmd *)
#define MLC_IOCSOVERLAYSIZE _IOW(MLC_IOC_MAGIC, 30, struct overlaysize_cmd *)
#define MLC_IOCSPOSITION _IOW(MLC_IOC_MAGIC, 13, struct position_cmd *)
#define MLC_IOCSSCREENSIZE _IOW(MLC_IOC_MAGIC, 6, struct screensize_cmd *)
#define MLC_IOCT3DENB _IO(MLC_IOC_MAGIC, 18)
#define MLC_IOCTADDRESS _IO(MLC_IOC_MAGIC, 9)
#define MLC_IOCTADDRESSCB _IO(MLC_IOC_MAGIC, 38)
#define MLC_IOCTADDRESSCR _IO(MLC_IOC_MAGIC, 39)
#define MLC_IOCTALPHA _IO(MLC_IOC_MAGIC, 19)
#define MLC_IOCTBACKGND _IO(MLC_IOC_MAGIC, 1)
#define MLC_IOCTBLEND _IO(MLC_IOC_MAGIC, 21)
#define MLC_IOCTDIRTY _IO(MLC_IOC_MAGIC, 17)
#define MLC_IOCTENABLE _IO(MLC_IOC_MAGIC, 0)
#define MLC_IOCTFORMAT _IO(MLC_IOC_MAGIC, 15)
#define MLC_IOCTHSTRIDE _IO(MLC_IOC_MAGIC, 10)
#define MLC_IOCTINVCOLOR _IO(MLC_IOC_MAGIC, 24)
#define MLC_IOCTINVERT _IO(MLC_IOC_MAGIC, 23)
#define MLC_IOCTINVISIBLE _IO(MLC_IOC_MAGIC, 34)
#define MLC_IOCTLAYEREN _IO(MLC_IOC_MAGIC, 8)
#define MLC_IOCTLOCKSIZE _IO(MLC_IOC_MAGIC, 12)
#define MLC_IOCTPRIORITY _IO(MLC_IOC_MAGIC, 3)
#define MLC_IOCTTOPDIRTY _IO(MLC_IOC_MAGIC, 5)
#define MLC_IOCTTPCOLOR _IO(MLC_IOC_MAGIC, 20)
#define MLC_IOCTTRANSP _IO(MLC_IOC_MAGIC, 22)
#define MLC_IOCTVSTRIDE _IO(MLC_IOC_MAGIC, 11)
#define MLC_IOC_MAGIC 'm'
#define MLC_NUM_LAYERS 3
#define MLC_VIDEO_LAYER (MLC_NUM_LAYERS - 1)
#define OUTCLKDELAY0 12
#define OUTCLKDELAY1 12
#define OUTCLKENB 15
#define OUTCLKINV0 0
#define OUTCLKINV1 0
#define PADCLKSEL 0
#define PALETTEPWD 15
#define PALETTESLD 14
#define PALETTE_CLEAR 0x80000000
#define PIXELBUFFER_PWD 11
#define PIXELBUFFER_SLD 10
#define POLFIELD 2
#define POLHSYNC 0
#define POLVSYNC 1
#define PRIORITY 8
#define RDITHER 0
#define RGBMODE 12
#define RIGHT 0
#define SCANMODE 9
#define SCREENHEIGHT 16
#define SCREENWIDTH 0
#define SEAVENB 8
#define STNLCDBITWIDTH 9
#define SWAPRB 15
#define TOP 16
#define TPCOLOR 0
#define TPENB 0
#define VENCBRT 0x010
#define VENCCRT 0x00E
#define VENCCTRLA 0x002
#define VENCCTRLB 0x004
#define VENCDACSEL 0x020
#define VENCFSCADJH 0x012
#define VENCFSCADJL 0x014
#define VENCHSOE 0x04C
#define VENCHSOS 0x04A
#define VENCHSVS0 0x048
#define VENCHUE 0x00A
#define VENCICNTL 0x040
#define VENCSAT 0x00C
#define VENCSCH 0x008
#define VENCVSOE 0x050
#define VENCVSOS 0x04E
#define VFILTERENB 28
#define VISUALTYPE FB_VISUAL_TRUECOLOR
#define VSCALE 0
#if defined(LF1000_DIDJ)
#define X_RESOLUTION 320
#elif defined(LF1000_STER)
#define X_RESOLUTION 320
#elif defined(LF1000_PAD)
#define X_RESOLUTION 480
#else
#error
#endif
#define YCORDER 6
#define YCRANGE 13
#if defined(LF1000_DIDJ)
#define Y_RESOLUTION 240
#elif defined(LF1000_STER)
#define Y_RESOLUTION 240
#elif defined(LF1000_PAD)
#define Y_RESOLUTION 272
#else
#error
#endif
#define _CLKGENENB 2
#define _INTENB 11
#define _INTPEND 10
#define _PCLKMODE 3
struct position_cmd {
  unsigned int top;
  unsigned int left;
  unsigned int right;
  unsigned int bottom;
};
struct screensize_cmd {
  unsigned int width;
  unsigned int height;
};
struct overlaysize_cmd {
  unsigned int srcwidth;
  unsigned int srcheight;
  unsigned int dstwidth;
  unsigned int dstheight;
};
union mlc_cmd {
  struct position_cmd position;
  struct screensize_cmd screensize;
  struct overlaysize_cmd overlaysize;
};
int mlc_GetAddressCb(u8 layer, int *addr);
int mlc_GetAddressCr(u8 layer, int *addr);
enum {
  VID_VCLK_SOURCE_PLL0 = 0,
  VID_VCLK_SOURCE_PLL1 = 1,
  VID_VCLK_SOURCE_XTI = 5,
  VID_VCLK_SOURCE_VCLK2 = 7,
};
enum {
  VID_ORDER_CbYCrY = 0,
  VID_ORDER_CrYCbY = 1,
  VID_ORDER_YCbYCr = 2,
  VID_ORDER_YCrYCb = 3
};
enum {
  VID_PADVCLK_VCLK = 0,
  VID_PADVCLK_nVCLK = 1,
  VID_PADVCLK_VCLK2 = 2,
  VID_PADVCLK_nVCLK2 = 3
};
enum DITHER {
  DITHER_BYPASS = 0,
  DITHER_5BIT = 2,
  DITHER_6BIT = 3,
};
enum {
  VID_FORMAT_RGB555 = 0,
  VID_FORMAT_RGB565 = 1,
  VID_FORMAT_RGB666 = 2,
  VID_FORMAT_RGB888 = 3,
  VID_FORMAT_MRGB555A = 4,
  VID_FORMAT_MRGB555B = 5,
  VID_FORMAT_MRGB565 = 6,
  VID_FORMAT_MRGB666 = 7,
  VID_FORMAT_MRGB888A = 8,
  VID_FORMAT_MRGB888B = 9,
  VID_FORMAT_CCIR656 = 10,
  VID_FORMAT_CCIR601A = 12,
  VID_FORMAT_CCIR601B = 13,
};
struct lf1000fb_info {
  struct fb_info fb;
  struct device *dev;
  void *fbmem;
  int pseudo_pal[16];
  int palette_buf[256];
  int pix_fmt;
};
static void *mlcregs;
static void *dpcregs;
static void enable_tvout_dpc(struct fb_info *info);
static void enable_tvout_mlc(struct fb_info *info);
static void disable_tvout();
static struct fb_fix_screeninfo lf1000fb_fix __initdata = {
    .id = "lf1000-fb",
    .smem_start = 0,
    .smem_len = 0,
    .type = FB_TYPE_PACKED_PIXELS,
    .visual = VISUALTYPE,
    .type_aux = 0,
    .xpanstep = 0,
    .ypanstep = 0,
    .ywrapstep = 0,
    .line_length = X_RESOLUTION * 2,
    .accel = FB_ACCEL_NONE,
};
#if defined(LF1000_DIDJ)
static u32 mlc_fb_addr = 0x01f00000;
static u32 mlc_fb_size = 0x00100000;
#elif defined(LF1000_STER)
static u32 mlc_fb_addr = 0x83f00000;
static u32 mlc_fb_size = 0x00100000;
#elif defined(LF1000_PAD)
static u32 mlc_fb_addr = 0x83e00000;
static u32 mlc_fb_size = 0x00200000;
#else
#error
#endif
static void schedule_palette_update(struct lf1000fb_info *fbi,
                                    unsigned int regno, unsigned int val) {
  printk(KERN_INFO "lf1000fb_schedule_palette_update\n");
  unsigned long flags;
  local_irq_save(flags);
  fbi->palette_buf[regno] = val;
  local_irq_restore(flags);
}
static inline unsigned int chan_to_field(unsigned int chan,
                                         struct fb_bitfield *bf) {
  chan &= 0xffff;
  chan >>= 16 - bf->length;
  return chan << bf->offset;
}
static int lf1000fb_setcolreg(unsigned regno, unsigned red, unsigned green,
                              unsigned blue, unsigned transp,
                              struct fb_info *info) {
  struct lf1000fb_info *fbi = info->par;
  unsigned int val;
  switch (info->fix.visual) {
  case FB_VISUAL_TRUECOLOR:
    if (regno < 16) {
      u32 *pal = fbi->pseudo_pal;
      val = chan_to_field(red, &info->var.red);
      val |= chan_to_field(green, &info->var.green);
      val |= chan_to_field(blue, &info->var.blue);
      pal[regno] = val;
    }
    break;
  case FB_VISUAL_PSEUDOCOLOR:
    if (regno < 256) {
      val = ((red >> 8) & 0xF800);
      val |= ((green >> 5) & 0x07E0);
      val |= ((blue >> 11) & 0x001F);
      schedule_palette_update(fbi, regno, val);
    }
    break;
  default:
    return 1;
  }
  return 0;
}
static int lf1000fb_ioctl(struct fb_info *info, unsigned int cmd,
                          unsigned long arg) {
  int tvout_enable = info->var.reserved[0];
  int result = 0;
  void __user *argp = (void __user *)arg;
  union mlc_cmd c;
  if (_IOC_TYPE(cmd) != MLC_IOC_MAGIC)
    return -EINVAL;
  int layerID = 0;
  switch (cmd) {
  case MLC_IOCTENABLE:
    mlc_SetMLCEnable(arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      mlc_SetMLCEnable(arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQBACKGND:
    result = mlc_GetBackground();
    break;
  case MLC_IOCTBACKGND:
    mlc_SetBackground(arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      mlc_SetBackground(arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQPRIORITY:
    result = mlc_GetLayerPriority();
    break;
  case MLC_IOCTPRIORITY:
    result = mlc_SetLayerPriority(arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetLayerPriority(arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCTTOPDIRTY:
    mlc_SetTopDirtyFlag();
    if (tvout_enable) {
      mlcregs += 0x400;
      mlc_SetTopDirtyFlag();
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCSSCREENSIZE:
    if (!(_IOC_DIR(cmd) & _IOC_WRITE))
      return -EFAULT;
    if (copy_from_user((void *)&c, argp, sizeof(struct screensize_cmd)))
      return -EFAULT;
    result = mlc_SetScreenSize(c.screensize.width, c.screensize.height);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetScreenSize(c.screensize.width, c.screensize.height);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCGSCREENSIZE:
    if (!(_IOC_DIR(cmd) & _IOC_READ))
      return -EFAULT;
    mlc_GetScreenSize((struct mlc_screen_size *)&c);
    if (copy_to_user(argp, (void *)&c, sizeof(struct screensize_cmd)))
      return -EFAULT;
    break;
  case MLC_IOCTLAYEREN:
    result = mlc_SetLayerEnable(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetLayerEnable(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCTADDRESS:
    result = mlc_SetAddress(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetAddress(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCTHSTRIDE:
    result = mlc_SetHStride(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetHStride(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCTVSTRIDE:
    result = mlc_SetVStride(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetVStride(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQVSTRIDE:
    result = mlc_GetVStride(layerID);
    break;
  case MLC_IOCTLOCKSIZE:
    result = mlc_SetLockSize(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetLockSize(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQLOCKSIZE:
    if (mlc_GetLockSize(layerID, &result) < 0)
      ;
    return -EFAULT;
    break;
  case MLC_IOCSPOSITION:
    if (!(_IOC_DIR(cmd) & _IOC_WRITE))
      return -EFAULT;
    if (copy_from_user((void *)&c, argp, sizeof(struct position_cmd)))
      return -EFAULT;
    result = mlc_SetPosition(layerID, c.position.top, c.position.left,
                             c.position.right, c.position.bottom);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetPosition(layerID, c.position.top, c.position.left,
                               c.position.right, c.position.bottom);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCGPOSITION:
    if (!(_IOC_DIR(cmd) & _IOC_READ))
      return -EFAULT;
    result = mlc_GetPosition(layerID, (struct mlc_layer_position *)&c);
    if (result < 0)
      return result;
    if (copy_to_user(argp, (void *)&c, sizeof(struct position_cmd)))
      return -EFAULT;
    break;
  case MLC_IOCTFORMAT:
    result = mlc_SetFormat(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetFormat(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQFORMAT:
    if (mlc_GetFormat(layerID, &result) < 0)
      return -EFAULT;
    break;
  case MLC_IOCT3DENB:
    result = mlc_Set3DEnable(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_Set3DEnable(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQ3DENB:
    if (mlc_Get3DEnable(layerID, &result) < 0)
      return -EFAULT;
    break;
  case MLC_IOCTALPHA:
    result = mlc_SetTransparencyAlpha(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetTransparencyAlpha(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQALPHA:
    result = mlc_GetTransparencyAlpha(layerID);
    break;
  case MLC_IOCTTPCOLOR:
    result = mlc_SetTransparencyColor(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetTransparencyColor(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQTPCOLOR:
    if (mlc_GetTransparencyColor(layerID, &result) < 0)
      return -EFAULT;
    break;
  case MLC_IOCTBLEND:
    result = mlc_SetBlendEnable(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetBlendEnable(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQBLEND:
    if (mlc_GetBlendEnable(layerID, &result) < 0)
      ;
    return -EFAULT;
    break;
  case MLC_IOCTTRANSP:
    result = mlc_SetTransparencyEnable(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetTransparencyEnable(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQTRANSP:
    if (mlc_GetTransparencyEnable(layerID, &result) < 0)
      ;
    return -EFAULT;
    break;
  case MLC_IOCTINVERT:
    result = mlc_SetInvertEnable(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetInvertEnable(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQINVERT:
    if (mlc_GetInvertEnable(layerID, &result) < 0)
      ;
    return -EFAULT;
    break;
  case MLC_IOCTINVCOLOR:
    result = mlc_SetInvertColor(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetInvertColor(layerID, arg);
      mlcregs -= 0x400;
    }
  case MLC_IOCQINVCOLOR:
    if (mlc_GetInvertColor(layerID, &result) < 0)
      ;
    return -EFAULT;
    break;
  case MLC_IOCSOVERLAYSIZE:
    if (!(_IOC_DIR(cmd) & _IOC_WRITE))
      return -EFAULT;
    if (copy_from_user((void *)&c, argp, sizeof(struct overlaysize_cmd)))
      return -EFAULT;
    result = mlc_SetOverlaySize(layerID, c.overlaysize.srcwidth,
                                c.overlaysize.srcheight, c.overlaysize.dstwidth,
                                c.overlaysize.dstheight);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetOverlaySize(
          layerID, c.overlaysize.srcwidth, c.overlaysize.srcheight,
          c.overlaysize.dstwidth, c.overlaysize.dstheight);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCGOVERLAYSIZE:
    if (!(_IOC_DIR(cmd) & _IOC_READ))
      return -EFAULT;
    result = mlc_GetOverlaySize(layerID, (struct mlc_overlay_size *)&c);
    if (result < 0)
      return result;
    if (copy_to_user(argp, (void *)&c, sizeof(struct overlaysize_cmd)))
      return -EFAULT;
    break;
  case MLC_IOCTINVISIBLE:
    result = mlc_SetLayerInvisibleAreaEnable(layerID, arg);
    break;
  case MLC_IOCQINVISIBLE:
    result = mlc_GetLayerInvisibleAreaEnable(layerID);
    break;
  case MLC_IOCSINVISIBLEAREA:
    if (!(_IOC_DIR(cmd) & _IOC_WRITE))
      return -EFAULT;
    if (copy_from_user((void *)&c, argp, sizeof(struct position_cmd)))
      return -EFAULT;
    result = mlc_SetLayerInvisibleArea(layerID, c.position.top, c.position.left,
                                       c.position.right, c.position.bottom);
    break;
  case MLC_IOCGINVISIBLEAREA:
    if (!(_IOC_DIR(cmd) & _IOC_READ))
      return -EFAULT;
    result =
        mlc_GetLayerInvisibleArea(layerID, (struct mlc_layer_position *)&c);
    if (result < 0)
      return result;
    if (copy_to_user(argp, (void *)&c, sizeof(struct position_cmd)))
      return -EFAULT;
    break;
  case MLC_IOCTADDRESSCB:
    result = mlc_SetAddressCb(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetAddressCb(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCTADDRESSCR:
    result = mlc_SetAddressCr(layerID, arg);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetAddressCr(layerID, arg);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCTDIRTY:
    result = mlc_SetDirtyFlag(layerID);
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_SetDirtyFlag(layerID);
      mlcregs -= 0x400;
    }
    break;
  case MLC_IOCQDIRTY:
    if (tvout_enable) {
      mlcregs += 0x400;
      result = mlc_GetDirtyFlag(layerID);
      mlcregs -= 0x400;
    } else {
      result = mlc_GetDirtyFlag(layerID);
    }
    break;
  case MLC_IOCQHSTRIDE:
    result = mlc_GetHStride(layerID);
    break;
  case MLC_IOCQADDRESS:
    if (mlc_GetAddress(layerID, &result) < 0)
      return -EFAULT;
    break;
  case MLC_IOCQADDRESSCR:
    if (mlc_GetAddressCr(layerID, &result) < 0)
      return -EFAULT;
    break;
  case MLC_IOCQADDRESSCB:
    if (mlc_GetAddressCb(layerID, &result) < 0)
      return -EFAULT;
    break;
  case MLC_IOCQFBSIZE:
    if (layerID > MLC_NUM_LAYERS)
      return -EFAULT;
    result = mlc_fb_size;
    break;
  case FBIO_ENABLE_TVOUT:
    if (info->var.reserved[0] == 1)
      return -EFAULT;
    info->var.reserved[0] = 1;
    enable_tvout_dpc(info);
    enable_tvout_mlc(info);
    break;
  case FBIO_DISABLE_TVOUT:
    if (info->var.reserved[0] == 0)
      return -EFAULT;
    info->var.reserved[0] = 0;
    disable_tvout();
    break;
  default:
    return -ENOTTY;
  }
  return result;
}
void mlc_SetMLCEnable(u8 en) {
  u32 tmp = ioread32(mlcregs + MLCCONTROLT);
  BIT_CLR(tmp, DITTYFLAG);
  if (en) {
    BIT_SET(tmp, PIXELBUFFER_PWD);
    iowrite32(tmp, mlcregs + MLCCONTROLT);
    BIT_SET(tmp, PIXELBUFFER_SLD);
    iowrite32(tmp, mlcregs + MLCCONTROLT);
    BIT_SET(tmp, MLCENB);
    iowrite32(tmp, mlcregs + MLCCONTROLT);
    BIT_SET(tmp, DITTYFLAG);
  } else {
    BIT_CLR(tmp, MLCENB);
    BIT_SET(tmp, DITTYFLAG);
    iowrite32(tmp, mlcregs + MLCCONTROLT);
    do {
      tmp = ioread32(mlcregs + MLCCONTROLT);
    } while (IS_SET(tmp, DITTYFLAG));
    BIT_CLR(tmp, PIXELBUFFER_SLD);
    iowrite32(tmp, mlcregs + MLCCONTROLT);
    BIT_CLR(tmp, PIXELBUFFER_PWD);
  }
  iowrite32(tmp, mlcregs + MLCCONTROLT);
}
static void *SelectLayerControl(u8 layer) {
  void *ctl = mlcregs;
  if (!mlcregs) {
    return 0;
  }
  switch (layer) {
  case 0:
    ctl += MLCCONTROL0;
    break;
  case 1:
    ctl += MLCCONTROL1;
    break;
  case 2:
    ctl += MLCCONTROL2;
    break;
  default:
    return 0;
  }
  return ctl;
}
int mlc_SetLayerEnable(u8 layer, u8 en) {
  void *reg;
  u32 tmp;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  BIT_SET(tmp, PALETTEPWD);
  iowrite32(tmp, reg);
  en ? BIT_SET(tmp, PALETTESLD) : BIT_CLR(tmp, PALETTESLD);
  iowrite32(tmp, reg);
  en ? BIT_SET(tmp, LAYERENB) : BIT_CLR(tmp, LAYERENB);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetAddress(u8 layer, int *addr) {
  void *reg = NULL;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCADDRESS0;
    break;
  case 1:
    reg = mlcregs + MLCADDRESS1;
    break;
  case 2:
    reg = mlcregs + MLCADDRESS2;
    break;
  }
  *addr = ioread32(reg);
  return 0;
}
int mlc_GetAddressCb(u8 layer, int *addr) {
  void *reg = NULL;
  if (layer > MLC_NUM_LAYERS || layer != MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = mlcregs + MLCADDRESSCB;
  *addr = ioread32(reg);
  return 0;
}
int mlc_GetAddressCr(u8 layer, int *addr) {
  void *reg = NULL;
  if (layer > MLC_NUM_LAYERS || layer != MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = mlcregs + MLCADDRESSCR;
  *addr = ioread32(reg);
  return 0;
}
int mlc_SetAddress(u8 layer, u32 addr) {
  void *reg = NULL;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  if (!mlcregs)
    return -ENOMEM;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCADDRESS0;
    break;
  case 1:
    reg = mlcregs + MLCADDRESS1;
    break;
  case 2:
    reg = mlcregs + MLCADDRESS2;
    break;
  }
  iowrite32(addr, reg);
  return 0;
}
int mlc_GetHStride(u8 layer) {
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  return ioread32(mlcregs + MLCHSTRIDE0 + layer * 0x34);
}
int mlc_SetHStride(u8 layer, u32 hstride) {
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  iowrite32(hstride, mlcregs + MLCHSTRIDE0);
  return 0;
}
int mlc_SetVStride(u8 layer, u32 vstride) {
  void *reg = NULL;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCVSTRIDE0;
    break;
  case 1:
    reg = mlcregs + MLCVSTRIDE1;
    break;
  case 2:
    reg = mlcregs + MLCVSTRIDE2;
    break;
  }
  iowrite32(vstride, reg);
  if (layer == MLC_VIDEO_LAYER) {
    iowrite32(vstride, mlcregs + MLCSTRIDECB);
    iowrite32(vstride, mlcregs + MLCSTRIDECR);
  }
  return 0;
}
int mlc_GetVStride(u8 layer) {
  void *reg = NULL;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCVSTRIDE0;
    break;
  case 1:
    reg = mlcregs + MLCVSTRIDE1;
    break;
  case 2:
    reg = mlcregs + MLCVSTRIDE2;
    break;
  }
  return ioread32(reg);
}
int mlc_SetLockSize(u8 layer, u32 locksize) {
  u32 tmp;
  void *reg;
  if (!(locksize == 4 || locksize == 8 || locksize == 16))
    return -EINVAL;
  if (layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  tmp &= ~(3 << LOCKSIZE);
  tmp |= ((locksize / 8) << LOCKSIZE);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetLockSize(u8 layer, int *locksize) {
  u32 tmp;
  void *reg;
  if (layer == MLC_VIDEO_LAYER || layer > MLC_NUM_LAYERS)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  *locksize = ((tmp & (3 << LOCKSIZE)) >> LOCKSIZE) * 8;
  return 0;
}
int mlc_Set3DEnable(u8 layer, u8 en) {
  void *reg;
  u32 tmp;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  en ? BIT_SET(tmp, GRP3DENB) : BIT_CLR(tmp, GRP3DENB);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_Get3DEnable(u8 layer, int *en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  *en = IS_SET(tmp, GRP3DENB) ? 1 : 0;
  return 0;
}
u32 mlc_GetBackground(void) { return ioread32(mlcregs + MLCBGCOLOR); }
void mlc_SetBackground(u32 color) {
  iowrite32((0xFFFFFF & color), mlcregs + MLCBGCOLOR);
}
u32 mlc_GetLayerPriority(void) {
  u32 tmp = ioread32(mlcregs + MLCCONTROLT);
  return ((tmp & (0x3 << PRIORITY)) >> PRIORITY);
}
int mlc_SetLayerPriority(u32 priority) {
  u32 tmp;
  if (priority >= VID_PRIORITY_INVALID)
    return -EINVAL;
  tmp = ioread32(mlcregs + MLCCONTROLT);
  tmp &= ~(0x3 << PRIORITY);
  tmp |= (priority << PRIORITY);
  iowrite32(tmp, mlcregs + MLCCONTROLT);
  return 0;
}
void mlc_SetTopDirtyFlag(void) {
  u32 tmp = ioread32(mlcregs + MLCCONTROLT);
  BIT_SET(tmp, DITTYFLAG);
  iowrite32(tmp, mlcregs + MLCCONTROLT);
}
int mlc_SetScreenSize(u32 width, u32 height) {
  if (width - 1 >= 4096 || height - 1 >= 4096)
    return -EINVAL;
  iowrite32((((height - 1) << SCREENHEIGHT) | ((width - 1) << SCREENWIDTH)),
            mlcregs + MLCSCREENSIZE);
  return 0;
}
void mlc_GetScreenSize(struct mlc_screen_size *size) {
  u32 tmp = ioread32(mlcregs + MLCSCREENSIZE);
  size->width = ((tmp & (0x7FF << SCREENWIDTH)) >> SCREENWIDTH) + 1;
  size->height = ((tmp & (0x7FF << SCREENHEIGHT)) >> SCREENHEIGHT) + 1;
}
int mlc_SetFormat(u8 layer, enum RGBFMT format) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER || format > 0xFFFF)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  tmp &= ~(0xFFFF << FORMAT);
  tmp |= (format << FORMAT);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetFormat(u8 layer, int *format) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  *format = ((tmp & (0xFFFF << FORMAT)) >> FORMAT);
  return 0;
}
int mlc_SetPosition(u8 layer, s32 top, s32 left, s32 right, s32 bottom) {
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  right--;
  bottom--;
  top &= 0x7FF;
  left &= 0x7FF;
  right &= 0x7FF;
  bottom &= 0x7FF;
  iowrite32(((left << LEFT) | (right << RIGHT)),
            mlcregs + MLCLEFTRIGHT0 + 0x34 * layer);
  iowrite32(((top << TOP) | (bottom << BOTTOM)),
            mlcregs + MLCTOPBOTTOM0 + 0x34 * layer);
  return 0;
}
int mlc_GetPosition(u8 layer, struct mlc_layer_position *p) {
  u32 tmp;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  tmp = ioread32(mlcregs + MLCLEFTRIGHT0 + 0x34 * layer);
  p->left = ((tmp & (0x7FF << LEFT)) >> LEFT);
  p->right = ((tmp & (0x7FF << RIGHT)) >> RIGHT);
  tmp = ioread32(mlcregs + MLCTOPBOTTOM0 + 0x34 * layer);
  p->top = ((tmp & (0x7FF << TOP)) >> TOP);
  p->bottom = ((tmp & (0x7FF << BOTTOM)) >> BOTTOM);
  return 0;
}
int mlc_SetDirtyFlag(u8 layer) {
  void *reg;
  u32 tmp;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  BIT_SET(tmp, DIRTYFLAG);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetDirtyFlag(u8 layer) {
  void *reg;
  u32 tmp, ret = false;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  ret = IS_SET(tmp, DIRTYFLAG) ? 1 : 0;
  return ret;
}
int mlc_SetTransparencyAlpha(u8 layer, u8 alpha) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCTPCOLOR0;
    break;
  case 1:
    reg = mlcregs + MLCTPCOLOR1;
    break;
  case 2:
    reg = mlcregs + MLCTPCOLOR2;
    break;
  }
  tmp = ioread32(reg);
  tmp &= ~(0xF << ALPHA);
  tmp |= ((0xF & alpha) << ALPHA);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetTransparencyAlpha(u8 layer) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCTPCOLOR0;
    break;
  case 1:
    reg = mlcregs + MLCTPCOLOR1;
    break;
  case 2:
    reg = mlcregs + MLCTPCOLOR2;
    break;
  }
  tmp = ioread32(reg);
  return ((tmp & (0xF << ALPHA)) >> ALPHA);
}
int mlc_SetTransparencyColor(u8 layer, u32 color) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCTPCOLOR0;
    break;
  case 1:
    reg = mlcregs + MLCTPCOLOR1;
    break;
  case 2:
    reg = mlcregs + MLCTPCOLOR2;
    break;
  }
  tmp = ioread32(reg);
  tmp &= ~(0xFFFFFF << TPCOLOR);
  tmp |= ((0xFFFFFF & color) << TPCOLOR);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetTransparencyColor(u8 layer, int *color) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCTPCOLOR0;
    break;
  case 1:
    reg = mlcregs + MLCTPCOLOR1;
    break;
  case 2:
    reg = mlcregs + MLCTPCOLOR2;
    break;
  }
  tmp = ioread32(reg);
  *color = ((tmp & (0xFFFFFF << TPCOLOR)) >> TPCOLOR);
  return 0;
}
int mlc_SetBlendEnable(u8 layer, u8 en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  en ? BIT_SET(tmp, BLENDENB) : BIT_CLR(tmp, BLENDENB);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetBlendEnable(u8 layer, int *en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  *en = IS_SET(tmp, BLENDENB) ? 1 : 0;
  return 0;
}
int mlc_SetTransparencyEnable(u8 layer, u8 en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  en ? BIT_SET(tmp, TPENB) : BIT_CLR(tmp, TPENB);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetTransparencyEnable(u8 layer, int *en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  *en = IS_SET(tmp, TPENB) ? 1 : 0;
  return 0;
}
int mlc_SetInvertEnable(u8 layer, u8 en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  en ? BIT_SET(tmp, INVENB) : BIT_CLR(tmp, INVENB);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetInvertEnable(u8 layer, int *en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  reg = SelectLayerControl(layer);
  tmp = ioread32(reg);
  *en = IS_SET(tmp, INVENB) ? 1 : 0;
  return 0;
}
int mlc_SetInvertColor(u8 layer, u32 color) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCINVCOLOR0;
    break;
  case 1:
    reg = mlcregs + MLCINVCOLOR1;
    break;
  case 2:
    reg = mlcregs + MLCINVCOLOR2;
    break;
  }
  tmp = ioread32(reg);
  tmp &= ~(0xFFFFFF << INVCOLOR);
  tmp |= ((0xFFFFFF & color) << INVCOLOR);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetInvertColor(u8 layer, int *color) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCINVCOLOR0;
    break;
  case 1:
    reg = mlcregs + MLCINVCOLOR1;
    break;
  case 2:
    reg = mlcregs + MLCINVCOLOR2;
    break;
  }
  tmp = ioread32(reg);
  *color = ((tmp & (0xFFFFFF << INVCOLOR)) >> INVCOLOR);
  return 0;
}
int mlc_SetOverlaySize(u8 layer, u32 srcwidth, u32 srcheight, u32 dstwidth,
                       u32 dstheight) {
  if (srcwidth < dstwidth)
    iowrite32((1 << 28) | (((srcwidth - 1) << 11) / (dstwidth - 1)),
              mlcregs + MLCHSCALE);
  else
    iowrite32((srcwidth << 11) / (dstwidth), mlcregs + MLCHSCALE);
  if (srcheight < dstheight)
    iowrite32((1 << 28) | (((srcheight - 1) << 11) / (dstheight - 1)),
              mlcregs + MLCVSCALE);
  else
    iowrite32((srcheight << 11) / (dstheight), mlcregs + MLCVSCALE);
  return 0;
}
int mlc_GetOverlaySize(u8 layer, struct mlc_overlay_size *psize) {
  u32 hscale = ioread32(mlcregs + MLCHSCALE);
  u32 vscale = ioread32(mlcregs + MLCVSCALE);
  psize->srcwidth = (hscale >> 11) & 0x7FF;
  psize->srcheight = hscale & 0x7FF;
  psize->dstwidth = (vscale >> 11) & 0x7FF;
  psize->dstheight = vscale & 0x7FF;
  return 0;
}
int mlc_SetLayerInvisibleAreaEnable(u8 layer, u8 en) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCLEFTRIGHT0_0;
    break;
  case 1:
    reg = mlcregs + MLCLEFTRIGHT1_0;
    break;
  }
  tmp = ioread32(reg);
  en ? BIT_SET(tmp, INVALIDENB) : BIT_CLR(tmp, INVALIDENB);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetLayerInvisibleAreaEnable(u8 layer) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCLEFTRIGHT0_0;
    break;
  case 1:
    reg = mlcregs + MLCLEFTRIGHT1_0;
    break;
  }
  tmp = ioread32(reg);
  return IS_SET(tmp, INVALIDENB) ? 1 : 0;
}
int mlc_SetLayerInvisibleArea(u8 layer, s32 top, s32 left, s32 right,
                              s32 bottom) {
  u32 tmp;
  void *reg;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  top &= 0x7FF;
  left &= 0x7FF;
  right &= 0x7FF;
  bottom &= 0x7FF;
  switch (layer) {
  case 0:
    reg = mlcregs + MLCLEFTRIGHT0_0;
    break;
  case 1:
    reg = mlcregs + MLCLEFTRIGHT1_0;
    break;
  }
  tmp = ioread32(reg);
  tmp &= ~((0x7FF << INVALIDLEFT) | (0x7FF << INVALIDRIGHT));
  tmp |= (left << INVALIDLEFT) | (right << INVALIDRIGHT);
  iowrite32(tmp, reg);
  switch (layer) {
  case 0:
    reg = mlcregs + MLCTOPBOTTOM0_0;
    break;
  case 1:
    reg = mlcregs + MLCTOPBOTTOM1_0;
    break;
  }
  tmp = ioread32(reg);
  tmp &= ~((0x7FF << INVALIDTOP) | (0x7FF << INVALIDBOTTOM));
  tmp |= (left << INVALIDTOP) | (right << INVALIDBOTTOM);
  iowrite32(tmp, reg);
  return 0;
}
int mlc_GetLayerInvisibleArea(u8 layer, struct mlc_layer_position *p) {
  u32 tmp;
  if (layer > MLC_NUM_LAYERS || layer == MLC_VIDEO_LAYER)
    return -EINVAL;
  switch (layer) {
  case 0:
    tmp = mlcregs + MLCLEFTRIGHT0_0;
    break;
  case 1:
    tmp = mlcregs + MLCLEFTRIGHT1_0;
    break;
  }
  p->left = ((tmp & (0x7FF << LEFT)) >> LEFT);
  p->right = ((tmp & (0x7FF << RIGHT)) >> RIGHT);
  switch (layer) {
  case 0:
    tmp = mlcregs + MLCTOPBOTTOM0_0;
    break;
  case 1:
    tmp = mlcregs + MLCTOPBOTTOM1_0;
    break;
  }
  p->top = ((tmp & (0x7FF << TOP)) >> TOP);
  p->bottom = ((tmp & (0x7FF << BOTTOM)) >> BOTTOM);
  return 0;
}
int mlc_SetAddressCb(u8 layer, u32 addr) {
  if (layer != MLC_VIDEO_LAYER)
    return -EINVAL;
  iowrite32(addr, mlcregs + MLCADDRESSCB);
  return 0;
}
int mlc_SetAddressCr(u8 layer, u32 addr) {
  if (layer != MLC_VIDEO_LAYER)
    return -EINVAL;
  iowrite32(addr, mlcregs + MLCADDRESSCR);
  return 0;
}
void mlc_SetClockMode(u8 pclk, u8 bclk) {
  u32 tmp = ioread32(mlcregs + MLCCLKENB);
  tmp &= ~(0xF);
  tmp |= ((pclk << _PCLKMODE) | (bclk << BCLKMODE));
  iowrite32(tmp, mlcregs + MLCCLKENB);
}
void mlc_SetFieldEnable(u8 en) {
  u32 tmp = ioread32(mlcregs + MLCCONTROLT);
  en ? BIT_SET(tmp, FIELDENB) : BIT_CLR(tmp, FIELDENB);
  iowrite32(tmp, mlcregs + MLCCONTROLT);
}
int dpc_SetClock0(u8 source, u8 div, u8 delay, u8 out_inv, u8 out_en) {
  void *base = dpcregs;
  u32 tmp;
  if (source > 7 || delay > 6)
    return -EINVAL;
  tmp = ioread32(base + DPCCLKGEN0);
  tmp &= ~((7 << CLKSRCSEL0) | (0x3F << CLKDIV0) | (3 << OUTCLKDELAY0));
  tmp |= (source << CLKSRCSEL0);
  tmp |= ((0x3F & div) << CLKDIV0);
  tmp |= (delay << OUTCLKDELAY0);
  out_inv ? BIT_SET(tmp, OUTCLKINV0) : BIT_CLR(tmp, OUTCLKINV0);
  out_en ? BIT_SET(tmp, OUTCLKENB) : BIT_CLR(tmp, OUTCLKENB);
  iowrite32(tmp, base + DPCCLKGEN0);
  return 0;
}
void dpc_SetClockPClkMode(u8 mode) {
  void *base = dpcregs;
  u32 tmp = ioread32(base + DPCCLKENB);
  mode ? BIT_SET(tmp, _PCLKMODE) : BIT_CLR(tmp, _PCLKMODE);
  iowrite32(tmp, base + DPCCLKENB);
}
int dpc_SetClock1(u8 source, u8 div, u8 delay, u8 out_inv) {
  void *base = dpcregs;
  u32 tmp;
  if (source > 7 || delay > 6)
    return -EINVAL;
  tmp = ioread32(base + DPCCLKGEN1);
  tmp &= ~((7 << CLKSRCSEL1) | (0x3F << CLKDIV1) | (3 << OUTCLKDELAY1));
  tmp |= (source << CLKSRCSEL1);
  tmp |= ((0x3F & div) << CLKDIV1);
  tmp |= (delay << OUTCLKDELAY1);
  out_inv ? BIT_SET(tmp, OUTCLKINV1) : BIT_CLR(tmp, OUTCLKINV1);
  iowrite32(tmp, base + DPCCLKGEN1);
  return 0;
}
void dpc_SetClockEnable(u8 en) {
  void *base = dpcregs;
  u32 tmp = ioread32(base + DPCCLKENB);
  en ? BIT_SET(tmp, _CLKGENENB) : BIT_CLR(tmp, _CLKGENENB);
  iowrite32(tmp, base + DPCCLKENB);
}
void dpc_SetDPCEnable(u8 en) {
  void *base = dpcregs;
  u16 tmp = ioread16(base + DPCCTRL0);
  en ? BIT_SET(tmp, DPCENB) : BIT_CLR(tmp, DPCENB);
  BIT_CLR(tmp, _INTENB);
  iowrite16(tmp, base + DPCCTRL0);
}
int dpc_SetMode(u8 format, u8 interlace, u8 invert_field, u8 rgb_mode,
                u8 swap_rb, u8 ycorder, u8 clip_yc, u8 embedded_sync,
                u8 clock) {
  void *base = dpcregs;
  u16 tmp;
  if (format >= 14 || ycorder > 3 || clock > 3)
    return -EINVAL;
  tmp = ioread16(base + DPCCTRL0);
  BIT_CLR(tmp, _INTPEND);
  interlace ? BIT_SET(tmp, SCANMODE) : BIT_CLR(tmp, SCANMODE);
  invert_field ? BIT_SET(tmp, POLFIELD) : BIT_CLR(tmp, POLFIELD);
  rgb_mode ? BIT_SET(tmp, RGBMODE) : BIT_CLR(tmp, RGBMODE);
  embedded_sync ? BIT_SET(tmp, SEAVENB) : BIT_CLR(tmp, SEAVENB);
  iowrite16(tmp, base + DPCCTRL0);
  tmp = ioread16(base + DPCCTRL1);
  tmp &= ~(0xAFFF);
  tmp |= ((ycorder << YCORDER) | (format << FORMAT1));
  clip_yc ? BIT_CLR(tmp, YCRANGE) : BIT_SET(tmp, YCRANGE);
  swap_rb ? BIT_SET(tmp, SWAPRB) : BIT_CLR(tmp, SWAPRB);
  iowrite16(tmp, base + DPCCTRL1);
  tmp = ioread16(base + DPCCTRL2);
  tmp &= ~(3 << PADCLKSEL);
  tmp |= (clock << PADCLKSEL);
  iowrite16(tmp, base + DPCCTRL2);
  return 0;
}
int dpc_SetHSync(u32 avwidth, u32 hsw, u32 hfp, u32 hbp, u8 inv_hsync) {
  void *base = dpcregs;
  u16 tmp;
  if (avwidth + hfp + hsw + hbp > 65536 || hsw == 0)
    return -EINVAL;
  iowrite16((u16)(hsw + hbp + hfp + avwidth - 1), base + DPCHTOTAL);
  iowrite16((u16)(hsw - 1), base + DPCHSWIDTH);
  iowrite16((u16)(hsw + hbp - 1), base + DPCHASTART);
  iowrite16((u16)(hsw + hbp + avwidth - 1), base + DPCHAEND);
  tmp = ioread16(base + DPCCTRL0);
  BIT_CLR(tmp, _INTPEND);
  if (inv_hsync)
    BIT_SET(tmp, POLHSYNC);
  else
    BIT_CLR(tmp, POLHSYNC);
  iowrite16(tmp, base + DPCCTRL0);
  return 0;
}
int dpc_SetVSync(u32 avheight, u32 vsw, u32 vfp, u32 vbp, u8 inv_vsync,
                 u32 eavheight, u32 evsw, u32 evfp, u32 evbp) {
  void *base = dpcregs;
  u16 tmp;
  if (avheight + vfp + vsw + vbp > 65536 ||
      avheight + evfp + evsw + evbp > 65536 || vsw == 0 || evsw == 0)
    return -EINVAL;
  iowrite16((u16)(vsw + vbp + avheight + vfp - 1), base + DPCVTOTAL);
  iowrite16((u16)(vsw - 1), base + DPCVSWIDTH);
  iowrite16((u16)(vsw + vbp - 1), base + DPCVASTART);
  iowrite16((u16)(vsw + vbp + avheight - 1), base + DPCVAEND);
  iowrite16((u16)(evsw + evbp + eavheight + evfp - 1), base + DPCEVTOTAL);
  iowrite16((u16)(evsw - 1), base + DPCEVSWIDTH);
  iowrite16((u16)(evsw + evbp - 1), base + DPCEVASTART);
  iowrite16((u16)(evsw + evbp + eavheight - 1), base + DPCEVAEND);
  tmp = ioread16(base + DPCCTRL0);
  BIT_CLR(tmp, _INTPEND);
  inv_vsync ? BIT_SET(tmp, POLVSYNC) : BIT_CLR(tmp, POLVSYNC);
  iowrite16(tmp, base + DPCCTRL0);
  return 0;
}
void dpc_SetVSyncOffset(u16 vss_off, u16 vse_off, u16 evss_off, u16 evse_off) {
  iowrite16(vse_off, dpcregs + DPCVSEOFFSET);
  iowrite16(vss_off, dpcregs + DPCVSSOFFSET);
  iowrite16(evse_off, dpcregs + DPCEVSEOFFSET);
  iowrite16(evss_off, dpcregs + DPCEVSSOFFSET);
}
int dpc_SetDelay(u8 rgb, u8 hs, u8 vs, u8 de, u8 lp, u8 sp, u8 rev) {
  void *base = dpcregs;
  u16 tmp;
  if (rgb >= 16 || hs >= 16 || vs >= 16 || de >= 16 || lp >= 16 || sp >= 16 ||
      rev >= 16)
    return -EINVAL;
  tmp = ioread16(base + DPCCTRL0);
  tmp &= ~((1 << _INTPEND) | (0xF << DELAYRGB));
  tmp |= (rgb << DELAYRGB);
  iowrite16(tmp, base + DPCCTRL0);
  iowrite16((u16)((de << DELAYDE) | (vs << DELAYVS) | (hs << DELAYHS)),
            base + DPCDELAY0);
  return 0;
}
int dpc_SetDither(u8 r, u8 g, u8 b) {
  u16 tmp;
  if (r >= 4 || g >= 4 || b >= 4)
    return -EINVAL;
  tmp = ioread16(dpcregs + DPCCTRL1);
  tmp &= ~(0x3F);
  tmp |= ((r << RDITHER) | (g << GDITHER) | (b << BDITHER));
  iowrite16(tmp, dpcregs + DPCCTRL1);
  return 0;
}
void dpc_SetEncoderEnable(u8 en) {
  void *base = dpcregs;
  u16 tmp;
  tmp = ioread16(base + DPCCTRL0);
  BIT_CLR(tmp, _INTPEND);
  en ? BIT_SET(tmp, DACENB) : BIT_CLR(tmp, DACENB);
  BIT_SET(tmp, ENCENB);
  iowrite16(tmp, base + DPCCTRL0);
  iowrite16(0x0007, base + VENCICNTL);
}
void dpc_ResetEncoder(void) {
  dpc_SetEncoderEnable(1);
  udelay(100);
  dpc_SetClockEnable(1);
  udelay(100);
  dpc_SetEncoderEnable(0);
  udelay(100);
  dpc_SetClockEnable(0);
  udelay(100);
  dpc_SetEncoderEnable(1);
}
void dpc_SetEncoderPowerDown(u8 en) {
  void *base = dpcregs;
  u16 tmp;
  tmp = ioread16(base + VENCCTRLA);
  en ? BIT_SET(tmp, 7) : BIT_CLR(tmp, 7);
  iowrite16(tmp, base + VENCCTRLA);
  tmp = (en) ? 0x0000 : 0x0001;
  iowrite16(tmp, base + VENCDACSEL);
}
void dpc_SetEncoderMode(u8 fmt, u8 ped) {
  void *base = dpcregs;
  u16 tmp;
  tmp = ioread16(base + VENCCTRLA);
  BIT_SET(tmp, 6);
  BIT_CLR(tmp, 5);
  BIT_CLR(tmp, 4);
  BIT_SET(tmp, 3);
  iowrite16(tmp, base + VENCCTRLA);
}
void dpc_SetEncoderFSCAdjust(u16 fsc) {
  void *base = dpcregs;
  u16 tmp;
  tmp = fsc;
  iowrite16(tmp >> 8, base + VENCFSCADJH);
  iowrite16(tmp & 0xFF, base + VENCFSCADJL);
}
void dpc_SetEncoderBandwidth(u16 ybw, u16 cbw) {
  void *base = dpcregs;
  u16 tmp;
  tmp = (cbw << 2) | ybw;
  iowrite16(tmp, base + VENCCTRLB);
}
void dpc_SetEncoderColor(u16 sch, u16 hue, u16 sat, u16 cnt, u16 brt) {
  void *base = dpcregs;
  iowrite16(sch, base + VENCSCH);
  iowrite16(hue, base + VENCHUE);
  iowrite16(sat, base + VENCSAT);
  iowrite16(cnt, base + VENCCRT);
  iowrite16(brt, base + VENCBRT);
}
void dpc_SetEncoderTiming(u16 hs, u16 he, u16 vs, u16 ve) {
  void *base = dpcregs;
  u16 tmp;
  tmp = ((he - 1) >> 8) & 0x7;
  iowrite16(tmp, base + VENCHSVS0);
  tmp = hs - 1;
  iowrite16(tmp, base + VENCHSOS);
  tmp = he - 1;
  iowrite16(tmp, base + VENCHSOE);
  tmp = vs;
  iowrite16(tmp, base + VENCVSOS);
  tmp = ve;
  iowrite16(tmp, base + VENCVSOE);
}
void dpc_SetEncoderUpscaler(u16 src, u16 dst) {
  void *base = dpcregs;
  u16 tmp;
  tmp = src - 1;
  iowrite16(tmp, base + DPUPSCALECON2);
  tmp = ((src - 1) * (1 << 11)) / (dst - 1);
  iowrite16(tmp >> 8, base + DPUPSCALECON1);
  iowrite16(((tmp & 0xFF) << 8) | 1, base + DPUPSCALECON0);
}
static void enable_tvout_mlc(struct fb_info *info) {
  int i, ret, format, hstride, vstride, locksize;
  mlc_GetFormat(0, &format);
  mlc_GetLockSize(0, &locksize);
  hstride = mlc_GetHStride(0);
  vstride = mlc_GetVStride(0);
  mlcregs += 0x400;
  mlc_SetClockMode(PCLKMODE_ONLYWHENCPUACCESS, BCLKMODE_DYNAMIC);
  mlc_SetScreenSize(info->var.xres, info->var.yres);
  ret = mlc_SetLayerPriority(DISPLAY_VID_LAYER_PRIORITY);
  if (ret < 0)
    printk(KERN_ALERT "mlc: failed to set layer priority %08X\n",
           DISPLAY_VID_LAYER_PRIORITY);
  mlc_SetFieldEnable(0);
  for (i = 0; i < MLC_NUM_LAYERS; i++) {
    mlc_SetAddress(i, mlc_fb_addr);
  }
  mlc_SetFormat(0, format);
  mlc_SetLockSize(0, locksize);
  mlc_SetHStride(0, hstride);
  mlc_SetVStride(0, vstride);
  mlc_SetPosition(0, 0, 0, info->var.xres, info->var.yres);
  mlc_SetLayerEnable(0, true);
  mlc_SetDirtyFlag(0);
  mlc_SetBackground(0xFFFFFF);
  mlc_SetMLCEnable(1);
  mlc_SetTopDirtyFlag();
  mlcregs -= 0x400;
}
static void enable_tvout_dpc(struct fb_info *info) {
  int i, ret, format, hstride, vstride;
  dpcregs += 0x400;
  dpc_SetClockPClkMode(PCLKMODE_ONLYWHENCPUACCESS);
  dpc_SetClock0(VID_VCLK_SOURCE_XTI, 0, 0, 0, DISPLAY_VID_PRI_VCLK_OUT_ENB);
  dpc_SetClock1(VID_VCLK_SOURCE_VCLK2, 1, 0, 0);
  dpc_SetClockEnable(1);
  ret = dpc_SetMode(VID_FORMAT_CCIR601B, 1, 0, 0, 0, VID_ORDER_CbYCrY, 1, 0,
                    DISPLAY_VID_PRI_PAD_VCLK);
  if (ret < 0)
    printk(KERN_ALERT "dpc: failed to set display mode\n");
  dpc_SetDither(DITHER_BYPASS, DITHER_BYPASS, DITHER_BYPASS);
  ret = dpc_SetHSync(info->var.xres * 2, 33, 24, 81, 0);
  if (ret < 0)
    printk(KERN_ALERT "dpc: failed to set HSync\n");
  ret = dpc_SetVSync(info->var.yres, 3, 3, 16, 0, info->var.yres, 3, 4, 16);
  if (ret < 0)
    printk(KERN_ALERT "dpc: failed to set VSync\n");
  dpc_SetDelay(0, 4, 4, 4, 4, 4, 4);
  dpc_SetVSyncOffset(0, 0, 0, 0);
  dpc_ResetEncoder();
  dpc_SetEncoderEnable(1);
  dpc_SetEncoderPowerDown(1);
  dpc_SetEncoderMode(0, 1);
  dpc_SetEncoderFSCAdjust(0);
  dpc_SetEncoderBandwidth(0, 0);
  dpc_SetEncoderColor(0, 0, 0, 0, 0);
  dpc_SetEncoderTiming(64, 1716, 0, 3);
  dpc_SetEncoderUpscaler(info->var.xres, info->var.xres * 2);
  dpc_SetEncoderPowerDown(0);
  dpc_SetDPCEnable(1);
  dpc_SetClockEnable(1);
  dpcregs -= 0x400;
}
static void disable_tvout() {
  mlcregs += 0x400;
  mlc_SetLayerEnable(0, false);
  mlc_SetDirtyFlag(0);
  mlc_SetMLCEnable(0);
  mlc_SetTopDirtyFlag();
  mlcregs -= 0x400;
  dpcregs += 0x400;
  dpc_SetEncoderPowerDown(1);
  dpc_SetEncoderEnable(0);
  dpc_SetClockEnable(0);
  dpc_SetDPCEnable(0);
  dpcregs -= 0x400;
}
static void set_mode(struct lf1000fb_info *fbi) {
  fbi->fb.var.xres = X_RESOLUTION;
  fbi->fb.var.yres = Y_RESOLUTION;
  fbi->fb.var.xres_virtual = fbi->fb.var.xres;
  fbi->fb.var.yres_virtual = fbi->fb.var.yres;
  fbi->fb.var.xoffset = 0;
  fbi->fb.var.yoffset = 0;
  switch (fbi->fb.var.bits_per_pixel) {
  case 8:
    fbi->fb.var.red.offset = 0;
    fbi->fb.var.red.length = 8;
    fbi->fb.var.green.offset = 0;
    fbi->fb.var.green.length = 8;
    fbi->fb.var.blue.offset = 0;
    fbi->fb.var.blue.length = 8;
    fbi->fb.var.transp.offset = 0;
    fbi->fb.var.transp.length = 0;
    fbi->pix_fmt = 0x443A;
    break;
  case 16:
    fbi->fb.var.red.offset = 5;
    fbi->fb.var.red.length = 5;
    fbi->fb.var.green.offset = 5;
    fbi->fb.var.green.length = 6;
    fbi->fb.var.blue.offset = 0;
    fbi->fb.var.blue.length = 5;
    fbi->fb.var.transp.offset = 0;
    fbi->fb.var.transp.length = 0;
    fbi->pix_fmt = 0x4432;
    break;
  case 24:
    fbi->fb.var.red.offset = 0;
    fbi->fb.var.red.length = 8;
    fbi->fb.var.green.offset = 8;
    fbi->fb.var.green.length = 8;
    fbi->fb.var.blue.offset = 16;
    fbi->fb.var.blue.length = 8;
    fbi->fb.var.transp.offset = 0;
    fbi->fb.var.transp.length = 0;
    fbi->pix_fmt = 0x4653;
    break;
  case 32:
    fbi->fb.var.red.offset = 16;
    fbi->fb.var.red.length = 8;
    fbi->fb.var.green.offset = 8;
    fbi->fb.var.green.length = 8;
    fbi->fb.var.blue.offset = 0;
    fbi->fb.var.blue.length = 8;
    fbi->fb.var.transp.offset = 0;
    fbi->fb.var.transp.length = 0;
    fbi->pix_fmt = 0x8653;
    break;
  default:
    return -EINVAL;
  }
  fbi->fb.var.vmode = FB_VMODE_NONINTERLACED;
}
static void lf1000fb_set_par(struct lf1000fb_info *fbi) {
  int tvout_enable = fbi->fb.var.reserved[0];
  int i, ret, div;
  div = lf1000_CalcDivider(get_pll_freq(PLL1), DPC_DESIRED_CLOCK_HZ);
  if (div < 0) {
    printk(KERN_ERR "dpc: failed to get a clock divider!\n");
    return -EFAULT;
  }
  dpc_SetClockPClkMode(PCLKMODE_ONLYWHENCPUACCESS);
  dpc_SetClock0(DISPLAY_VID_PRI_VCLK_SOURCE, div > 0 ? (div - 1) : 0,
                DISPLAY_VID_PRI_VCLK_DELAY, DISPLAY_VID_PRI_VCLK_INV,
                DISPLAY_VID_PRI_VCLK_OUT_ENB);
  dpc_SetClock1(DISPLAY_VID_PRI_VCLK2_SOURCE, DISPLAY_VID_PRI_VCLK2_DIV, 0, 1);
  dpc_SetClockEnable(1);
  ret = dpc_SetMode(DISPLAY_VID_PRI_OUTPUT_FORMAT, 0, 0, 1,
                    DISPLAY_VID_PRI_SWAP_RGB, DISPLAY_VID_PRI_OUTORDER, 0, 0,
                    DISPLAY_VID_PRI_PAD_VCLK);
  if (ret < 0)
    printk(KERN_ALERT "dpc: failed to set display mode\n");
  dpc_SetDither(DITHER_BYPASS, DITHER_BYPASS, DITHER_BYPASS);
  ret = dpc_SetHSync(fbi->fb.var.xres, DISPLAY_VID_PRI_HSYNC_SWIDTH,
                     DISPLAY_VID_PRI_HSYNC_FRONT_PORCH,
                     DISPLAY_VID_PRI_HSYNC_BACK_PORCH,
                     DISPLAY_VID_PRI_HSYNC_ACTIVEHIGH);
  if (ret < 0)
    printk(KERN_ALERT "dpc: failed to set HSync\n");
  ret = dpc_SetVSync(fbi->fb.var.yres, DISPLAY_VID_PRI_VSYNC_SWIDTH,
                     DISPLAY_VID_PRI_VSYNC_FRONT_PORCH,
                     DISPLAY_VID_PRI_VSYNC_BACK_PORCH,
                     DISPLAY_VID_PRI_VSYNC_ACTIVEHIGH, 1, 1, 1, 1);
  if (ret < 0)
    printk(KERN_ALERT "dpc: failed to set VSync\n");
  dpc_SetDelay(0, 7, 7, 7, 4, 4, 4);
  dpc_SetVSyncOffset(1, 1, 1, 1);
  dpc_SetDPCEnable(1);
  if (tvout_enable) {
    enable_tvout_dpc(fbi);
  }
  mlc_SetClockMode(PCLKMODE_ONLYWHENCPUACCESS, BCLKMODE_DYNAMIC);
  mlc_SetScreenSize(fbi->fb.var.xres, fbi->fb.var.yres);
  ret = mlc_SetLayerPriority(DISPLAY_VID_LAYER_PRIORITY);
  if (ret < 0)
    printk(KERN_ALERT "mlc: failed to set layer priority %08X\n",
           DISPLAY_VID_LAYER_PRIORITY);
  mlc_SetFieldEnable(0);
  for (i = 0; i < MLC_NUM_LAYERS; i++) {
    mlc_SetAddress(i, mlc_fb_addr);
  }
  set_mode(fbi);
  u32 hstride;
  u32 vstride;
  mlc_SetFormat(0, fbi->pix_fmt);
  printk(KERN_INFO "lf1000fb: New MLC0 Mode: 0x%X\n",
         (ioread32(mlcregs + MLCCONTROL0) >> FORMAT) & 0xFFFF);
  hstride = fbi->fb.var.bits_per_pixel / 8;
  mlc_SetHStride(0, hstride);
  printk(KERN_INFO "lf1000fb: New MLC0 HStride: %d\n",
         (ioread32(mlcregs + MLCHSTRIDE0)));
  vstride = hstride * fbi->fb.var.xres;
  mlc_SetVStride(0, vstride);
  printk(KERN_INFO "lf1000fb: New VStride: %d\n",
         (ioread32(mlcregs + MLCVSTRIDE0)));
  mlc_SetLayerEnable(0, true);
  mlc_SetDirtyFlag(0);
  mlc_SetBackground(0xFFFFFF);
  mlc_SetMLCEnable(1);
  mlc_SetTopDirtyFlag();
  if (tvout_enable) {
    enable_tvout_mlc(fbi);
  }
}
struct fb_ops lf1000fb_ops = {
    .owner = THIS_MODULE,
    .fb_setcolreg = lf1000fb_setcolreg,
    .fb_fillrect = cfb_fillrect,
    .fb_copyarea = cfb_copyarea,
    .fb_imageblit = cfb_imageblit,
    .fb_ioctl = lf1000fb_ioctl,
    .fb_set_par = lf1000fb_set_par,
};
static int __init lf1000fb_probe(struct platform_device *pdev) {
  struct lf1000fb_info *fbi;
  int ret = 0;
  printk(KERN_INFO "lf1000fb: loading\n");
  struct resource *res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
  if (!res) {
    printk(KERN_INFO "lf1000fb: **************can't get resource\n");
  }
  if (!request_mem_region(res->start, (res->end - res->start + 1),
                          "lf1000-fb")) {
    printk(KERN_INFO "lf1000fb: *************can't request memory\n");
  }
  fbi = framebuffer_alloc(sizeof(struct lf1000fb_info), &pdev->dev);
  printk(KERN_INFO "lf1000fb: alloc done\n");
  if (fbi == NULL) {
    printk(KERN_ERR "lf1000fb: out of memory\n");
    return -ENOMEM;
  }
  platform_set_drvdata(pdev, fbi);
  printk(KERN_INFO "lf1000fb: ioremap_nocache\n");
  fbi->fbmem = ioremap_nocache(mlc_fb_addr, mlc_fb_size);
  printk(KERN_INFO "lf1000fb: ioremap_nocache done\n");
  if (fbi->fbmem == NULL) {
    ret = -ENOMEM;
    goto fail_fbmem;
  }
  fbi->fb.screen_size = mlc_fb_size;
  fbi->fb.screen_base = fbi->fbmem;
  mlcregs = ioremap_nocache(0xC0004000, 0x3C9);
  if (!mlcregs) {
    printk(KERN_INFO "lf1000fb: **************can't remap mlcregs\n");
  }
  dpcregs = ioremap_nocache(0xC0003000, 0x1C9);
  if (!dpcregs) {
    printk(KERN_INFO "lf1000fb: **************can't remap dpcregs\n");
  }
  printk(KERN_INFO "Configure Framebuffer fixed params\n");
  fbi->fb.fix = lf1000fb_fix;
  fbi->fb.var.bits_per_pixel = 16;
  fbi->fb.var.reserved[0] = 1;
  lf1000fb_set_par(fbi);
  fbi->fb.flags = FBINFO_DEFAULT;
  fbi->fb.node = -1;
  fbi->fb.var.nonstd = 0;
  fbi->fb.var.activate = FB_ACTIVATE_NOW;
  fbi->fb.var.height = -1;
  fbi->fb.var.width = -1;
  fbi->fb.fbops = &lf1000fb_ops;
  printk(KERN_INFO "lf1000fb: setting pseudopalette\n");
  fbi->fb.pseudo_palette = fbi->pseudo_pal;
  printk(KERN_INFO "lf1000fb: fbi->pseudopalete done\n");
  memset(fbi->pseudo_pal, PALETTE_CLEAR, ARRAY_SIZE(fbi->pseudo_pal));
  printk(KERN_INFO "lf1000fb: fb_alloc_cmap\n");
  fb_alloc_cmap(&fbi->fb.cmap, 1 << fbi->fb.var.bits_per_pixel, 0);
  printk(KERN_INFO "lf1000fb: fb_alloc_cmap done\n");
  printk(KERN_INFO "lf1000fb: register FB\n");
  ret = register_framebuffer(&fbi->fb);
  printk(KERN_INFO "lf1000fb: register FB done\n");
  if (ret < 0) {
    dev_err(&pdev->dev, "Failed to register FB device: %d\n", ret);
    goto fail_register;
  }
  return 0;
fail_register:
  iounmap(fbi->fbmem);
  fb_dealloc_cmap(&fbi->fb.cmap);
  framebuffer_release(&fbi->fb);
  platform_set_drvdata(pdev, NULL);
fail_fbmem:
  kfree(fbi);
  return ret;
}
static int lf1000fb_remove(struct platform_device *pdev) {
  struct lf1000fb_info *fbi = platform_get_drvdata(pdev);
  printk(KERN_INFO "lf1000fb: unloading\n");
  iounmap(fbi->fbmem);
  unregister_framebuffer(&fbi->fb);
  fb_dealloc_cmap(&fbi->fb.cmap);
  framebuffer_release(&fbi->fb);
  kfree(fbi);
  return 0;
}
static struct platform_driver lf1000fb_driver = {
    .probe = lf1000fb_probe,
    .remove = lf1000fb_remove,
    .driver =
        {
            .name = "lf1000-fb",
            .owner = THIS_MODULE,
        },
};
static int lf1000fb_init(void) {
  return platform_driver_register(&lf1000fb_driver);
}
static void __exit lf1000fb_exit(void) {
  platform_driver_unregister(&lf1000fb_driver);
}
module_init(lf1000fb_init);
module_exit(lf1000fb_exit);
MODULE_LICENSE("GPL");
