cmd_/root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.o := gcc -Wp,-MD,/root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/.r8192SU_HWImg.o.d  -nostdinc -isystem /usr/lib/gcc/i386-pc-linux/4.2.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Os -pipe -msoft-float -mregparm=3 -freg-struct-return -mpreferred-stack-boundary=2  -march=i586 -mtune=generic -ffreestanding -maccumulate-outgoing-args -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -fomit-frame-pointer  -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign -I/usr/src/kernels/2.6.22.6-1-i686/drivers/net/wireless -std=gnu89 -O2 -mhard-float -DCONFIG_FORCE_HARD_FLOAT=y -DJACKSON_NEW_RX -DTHOMAS_BEACON -DTHOMAS_TURBO -DENABLE_DOT11D -DRTL8192SU -DRTL8190_Download_Firmware_From_Header=1 -DRTL8192S_PREPARE_FOR_NORMAL_RELEASE -DRTL8192SU_DISABLE_IQK=1 -DRTL8192S_DISABLE_FW_DM=0  -DDISABLE_BB_RF=0  -DRTL8192SU_USE_PARAM_TXPWR=0 -DRTL8192SU_FPGA_UNSPECIFIED_NETWORK=0 -DRTL8192SU_ASIC_VERIFICATION -DRTL8192SU_USB_PHY_TEST=0 -DCONFIG_RTL8192_PM  -DMODULE -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(r8192SU_HWImg)"  -D"KBUILD_MODNAME=KBUILD_STR(r8192s_usb)" -c -o /root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/.tmp_r8192SU_HWImg.o /root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.c

deps_/root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.o := \
  /root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.c \
  /root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
    $(wildcard include/config/resources/64bit.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/forced/inlining.h) \
  include/linux/compiler-gcc.h \
  include/asm/posix_types.h \
  include/asm/types.h \
    $(wildcard include/config/highmem64g.h) \

/root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.o: $(deps_/root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.o)

$(deps_/root/rtl8192su_linux_2.6.0001.0602.2009/HAL/rtl8192u/r8192SU_HWImg.o):
