/**
 * @file pub.h
 * @author zhao.wei (hw)
 * @brief 公用头文件
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __PUB_H__
#define __PUB_H__

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <sys/vfs.h>
#include <sys/statfs.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <termios.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <errno.h>
#include <assert.h>
#include <fcntl.h>
#include <netdb.h>
#include <signal.h>
#include <stdarg.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/un.h>
#include <sys/select.h>
#include <pthread.h>
#include <setjmp.h>
#include <crypt.h>
#include <sys/prctl.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <linux/rtnetlink.h>
#include <sys/param.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <net/if_arp.h>
#include <net/route.h>
#include <sched.h>
#include <dlfcn.h>
#include <sys/utsname.h>
#include <sys/mman.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/ioctl.h>
#include <sys/dir.h>
#include <linux/ip.h>
#include <linux/udp.h>
#include <linux/if_packet.h>
#include <linux/if_ether.h>
#include <pthread.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <execinfo.h>
#include <mtd/mtd-user.h> /**for define of MEMERASE */
#include <getopt.h>

#include "types.h"
#include "error.h"
#include "mmc.h"
#include "md5.h"
#include "vmm.h"
#include "cJSON.h"
#include <curl/curl.h>
#include <curl/easy.h>
#include "zlog.h"

extern zlog_category_t *zc;

#endif