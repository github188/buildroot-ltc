cmd_/home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/xen/.install := /bin/bash scripts/headers_install.sh /home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/xen   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/xen/evtchn.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/xen/privcmd.h ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/xen/$$F; done; touch /home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/xen/.install