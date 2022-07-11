Microsoft Windows [Version 10.0.19044.1766]
(c) Microsoft Corporation. All rights reserved.

E:\ADB\platform-tools>adb devices
List of devices attached
32002d88eefb458d        device


E:\ADB\platform-tools>adb shell
j6lte:/ $ ls
ls: ./preload: Permission denied
ls: ./init: Permission denied
acct               carrier       default.prop      init.environ.rc      lost+found product          storage
apex               config        dev               init.rc              mnt        product_services sys
audit_filter_table cpefs         dpolicy           init.usb.configfs.rc odm        publiccert.pem   system
bin                d             efs               init.usb.rc          oem        sbin             ueventd.rc
bugreports         data          etc               init.zygote32.rc     omr        sdcard           vendor
cache              debug_ramdisk init.container.rc lib                  proc       sepolicy_version
1|j6lte:/ $ cd storage
j6lte:/storage $ ls
emulated enc_emulated self
j6lte:/storage $ cd self/
j6lte:/storage/self $ ls
primary
j6lte:/storage/self $ cd primary/
j6lte:/storage/self/primary $ ls
Alarms  Cardboard DualApp             Lark     Music         Podcasts  Samsung         bytertc_log
Android DCIM      Fonts               LazyList Notifications Ringtones Telegram        documents
Call    Download  Hash\ Music\ Player Movies   Pictures      SHAREit   Telegram\ Audio
j6lte:/storage/self/primary $ cd documents/
j6lte:/storage/self/primary/documents $ ls
files
j6lte:/storage/self/primary/documents $ cd files/
j6lte:/storage/self/primary/documents/files $ ls
append.c compare.c copy.c count.c create.c readfile.c reverse.c sumofnum.c
j6lte:/storage/self/primary/documents/files $ cd ..
j6lte:/storage/self/primary/documents $ cd ..
j6lte:/storage/self/primary $ exit

E:\ADB\platform-tools>adb push E:\DS.txt /storage/self/primary/documents/files
E:\DS.txt: 1 file pushed, 0 skipped. 37.9 MB/s (20823 bytes in 0.001s)


E:\ADB\platform-tools>adb shell
j6lte:/ $ ls
ls: ./preload: Permission denied
ls: ./init: Permission denied
acct               carrier       default.prop      init.environ.rc      lost+found product          storage
apex               config        dev               init.rc              mnt        product_services sys
audit_filter_table cpefs         dpolicy           init.usb.configfs.rc odm        publiccert.pem   system
bin                d             efs               init.usb.rc          oem        sbin             ueventd.rc
bugreports         data          etc               init.zygote32.rc     omr        sdcard           vendor
cache              debug_ramdisk init.container.rc lib                  proc       sepolicy_version
1|j6lte:/ $ cd sdcard/
j6lte:/sdcard $ ls
Alarms  Cardboard DualApp             Lark     Music         Podcasts  Samsung         bytertc_log
Android DCIM      Fonts               LazyList Notifications Ringtones Telegram        documents
Call    Download  Hash\ Music\ Player Movies   Pictures      SHAREit   Telegram\ Audio
j6lte:/sdcard $ cd DCIM/
j6lte:/sdcard/DCIM $ ls
Camera Restored Screenshots
j6lte:/sdcard/DCIM $ cd Camera/
j6lte:/sdcard/DCIM/Camera $ ls
20220417_141446.jpg 20220617_124353.jpg 20220622_135456.jpg 20220623_114923.jpg 20220703_161107.jpg
20220417_141448.jpg 20220617_124415.jpg 20220622_182530.jpg 20220628_134605.jpg 20220703_161124.jpg
20220614_180923.jpg 20220617_124424.jpg 20220622_182605.jpg 20220628_142910.jpg 20220703_162219.jpg
20220614_193546.jpg 20220620_122651.jpg 20220622_182618.jpg 20220628_142925.jpg 20220703_182845.jpg
20220616_232558.jpg 20220622_112940.jpg 20220622_182718.jpg 20220628_144122.jpg 20220703_182850.jpg
20220617_124250.jpg 20220622_113019.jpg 20220623_103146.jpg 20220628_194156.jpg 20220703_214738.jpg
20220617_124303.jpg 20220622_113050.jpg 20220623_103150.jpg 20220628_223851.jpg
20220617_124334.jpg 20220622_121328.jpg 20220623_114922.jpg 20220703_160337.jpg
j6lte:/sdcard/DCIM/Camera $ exit


E:\ADB\platform-tools>adb push C:\Users\Dell\Pictures\Screenshots\Screenshot.png /sdcard/DCIM/Camera
C:\Users\Dell\Pictures\Screenshots\Screenshot.png: 1 file pushed, 0 skipped. 421.4 MB/s (486979 bytes in 0.001s)

E:\ADB\platform-tools>adb push C:\Users\Dell\Pictures\Screenshots\Screenshot.png /storage/self/primary/documents/files
C:\Users\Dell\Pictures\Screenshots\Screenshot.png: 1 file pushed, 0 skipped. 401.6 MB/s (486979 bytes in 0.001s)



E:\ADB\platform-tools>adb pull /sdcard/DCIM/Camera/20220622_121328.jpg C:\Users\Dell
/sdcard/DCIM/Camera/20220622_121328.jpg: 1 file pulled, 0 skipped. 35.4 MB/s (3176811 bytes in 0.086s)



E:\ADB\platform-tools>adb reboot


E:\ADB\platform-tools>adb devices
List of devices attached
32002d88eefb458d        device


E:\ADB\platform-tools>adb shell settings put system screen_brightness 60

E:\ADB\platform-tools>adb shell settings put system screen_brightness 100

E:\ADB\platform-tools>adb shell settings get system screen_brightness 
100

E:\ADB\platform-tools>adb install C:\Users\Dell\Downloads\com.saadderaiya.MS_Paint_2018-08-16.apk
Performing Streamed Install
Success


E:\ADB\platform-tools>adb shell
j6lte:/ $ ls
ls: ./preload: Permission denied
ls: ./init: Permission denied
acct               carrier       default.prop      init.environ.rc      lost+found product          storage
apex               config        dev               init.rc              mnt        product_services sys
audit_filter_table cpefs         dpolicy           init.usb.configfs.rc odm        publiccert.pem   system
bin                d             efs               init.usb.rc          oem        sbin             ueventd.rc
bugreports         data          etc               init.zygote32.rc     omr        sdcard           vendor
cache              debug_ramdisk init.container.rc lib                  proc       sepolicy_version
1|j6lte:/ $ cd sdcard/
j6lte:/sdcard $ s
/system/bin/sh: s: inaccessible or not found
127|j6lte:/sdcard $ ls
Alarms  Cardboard DualApp             Lark     Music         Podcasts  Samsung         bytertc_log
Android DCIM      Fonts               LazyList Notifications Ringtones Telegram        documents
Call    Download  Hash\ Music\ Player Movies   Pictures      SHAREit   Telegram\ Audio
j6lte:/sdcard $ cd Download/
j6lte:/sdcard/Download $ ls
1\ COMPUTER\ BASICS.pptx
10\ ONE\ DIMENSIONAL\ ARRAYS.pptx
11\ TWO\ DIMENSIONAL\ ARRAYS.pptx
12\ STRINGS\ OR\ CHARACTER\ ARRAYS.pptx
13\ FUNCTIONS.pptx
14\ STORAGE\ CLASSES.pptx
15\ POINTERS.pptx
16\ DYNAMIC\ MEMORY\ ALLOCATION.pptx
1629028522995_FAQs\ -\ Infosys\ Online\ Test.pdf
1632554659424_kavitha_resume__1___1_.pdf
1639666282145_UART6_without\ delay
1639666310754_1639666282145_UART6_without\ delay
1639666347860_1639666310754_1639666282145_UART6_without\ delay
1639666566357_1639666347860_1639666310754_1639666282145_UART6_without\ delay
17\ STRUCTURES\ &\ UNIONS.pptx
18\ FILE\ HANDLING\ IN\ C.pptx
2\ INTRODUCTION\ TO\ C\ PROGRAMMING.pptx
3\ DATA\ TYPES\ AND\ VARIABLES.pptx
4\ OPERATORS\ &\ EXPRESSIONS.pptx
5\ FLOW\ CONTROL-SELECTION.pptx
6\ FLOW\ CONTROL\ LOOPING\ &\ JUMPING.pptx
7\ NESTED\ LOOPS.pptx
8\ INPUT\ &\ OUTPUT\ IN\ C.ppt
8085AH\ pdf,\ 8085AH\ description,\ 8085AH\ datasheets,\ 8085AH\ view\ ___\ ALLDATASHEET\ ___
8259A.pdf
9\ HEADER\ FILES.pptx
All\ Videos\ Downloader
End_TB_brochure.pdf
EnglishCoreXII.pdf
Guidelines\ -\ Infosys\ Online\ Test.pdf
Idhe\ Kadha\ Nee\ Katha\ -\ SenSongsMp3.Co.mp3
Institute_List.pdf
Instructions\ for\ students\ -PG-Scholarship-02.02.pdf
Lark
Lecture5.pdf
Micro\ Grid_\ Unit-4.pptx
Operators.pdf
README.txt
REN_82c59a_DST_20020126\ (1).pdf
REN_82c59a_DST_20020126.pdf
Resume.pdf
UART6_without\ delay\ (1).c
UART6_without\ delay.c
[iSongs.info]\ 01\ -\ Arunachala\ Siva\ Eswaraa.mp3
[iSongs.info]\ 07\ -\ Idhe\ Kadha\ Nee\ Katha.mp3
datasheet.pdf
face_prep__Wipro_NTH_slot_analysis_25th_Sep_2021_slot_3.pdf
fulltext.pdf
ieep1an.pdf
kavitha\ resume\ (1)\ (1).pdf
kavitha\ resume\ (2)\ (2).docx
test.pcm
j6lte:/sdcard/Download $ exit

E:\ADB\platform-tools>adb shell screencap -p /sdcard/Download/screencap.png

E:\ADB\platform-tools>adb shell screencap -p /sdcard/Download/screen.png

E:\ADB\platform-tools>adb shell input text "\hiihello"

E:\ADB\platform-tools>adb shell input text "hii\ hello\ how\ are"

E:\ADB\platform-tools>adb shell input text hii\ hello


E:\ADB\platform-tools>adb shell ps
USER           PID  PPID     VSZ    RSS WCHAN            ADDR S NAME
root             1     0   48824   3992 SyS_epoll_wait      0 S init
root             2     0       0      0 kthreadd            0 S [kthreadd]
root             3     2       0      0 smpboot_thread_fn   0 S [ksoftirqd/0]
root             5     2       0      0 worker_thread       0 S [kworker/0:0H]
root             6     2       0      0 worker_thread       0 S [kworker/u16:0]
root             7     2       0      0 rcu_gp_kthread      0 S [rcu_preempt]
root             8     2       0      0 rcu_gp_kthread      0 S [rcu_sched]
root             9     2       0      0 rcu_gp_kthread      0 S [rcu_bh]
root            10     2       0      0 smpboot_thread_fn   0 S [migration/0]
root            11     2       0      0 rescuer_thread      0 S [blkdev_flush_wq]
root            12     2       0      0 smpboot_thread_fn   0 S [watchdog/0]
root            13     2       0      0 smpboot_thread_fn   0 S [watchdog/1]
root            14     2       0      0 smpboot_thread_fn   0 S [migration/1]
root            15     2       0      0 smpboot_thread_fn   0 S [ksoftirqd/1]
root            17     2       0      0 worker_thread       0 S [kworker/1:0H]
root            18     2       0      0 smpboot_thread_fn   0 S [watchdog/2]
root            19     2       0      0 smpboot_thread_fn   0 S [migration/2]
root            20     2       0      0 smpboot_thread_fn   0 S [ksoftirqd/2]
root            22     2       0      0 worker_thread       0 S [kworker/2:0H]
root            23     2       0      0 smpboot_thread_fn   0 S [watchdog/3]
root            24     2       0      0 smpboot_thread_fn   0 S [migration/3]
root            25     2       0      0 smpboot_thread_fn   0 S [ksoftirqd/3]
root            27     2       0      0 worker_thread       0 S [kworker/3:0H]
root            28     2       0      0 __kthread_parkme    0 R [watchdog/4]
root            29     2       0      0 __kthread_parkme    0 R [migration/4]
root            30     2       0      0 __kthread_parkme    0 R [ksoftirqd/4]
root            31     2       0      0 worker_thread       0 S [kworker/4:0]
root            32     2       0      0 worker_thread       0 S [kworker/4:0H]
root            33     2       0      0 __kthread_parkme    0 R [watchdog/5]
root            34     2       0      0 __kthread_parkme    0 R [migration/5]
root            35     2       0      0 __kthread_parkme    0 R [ksoftirqd/5]
root            37     2       0      0 worker_thread       0 S [kworker/5:0H]
root            38     2       0      0 __kthread_parkme    0 R [watchdog/6]
root            39     2       0      0 __kthread_parkme    0 R [migration/6]
root            40     2       0      0 __kthread_parkme    0 R [ksoftirqd/6]
root            41     2       0      0 worker_thread       0 S [kworker/6:0]
root            42     2       0      0 worker_thread       0 S [kworker/6:0H]
root            43     2       0      0 __kthread_parkme    0 R [watchdog/7]
root            44     2       0      0 __kthread_parkme    0 R [migration/7]
root            45     2       0      0 __kthread_parkme    0 R [ksoftirqd/7]
root            46     2       0      0 worker_thread       0 S [kworker/7:0]
root            47     2       0      0 worker_thread       0 S [kworker/7:0H]
root            48     2       0      0 rescuer_thread      0 S [khelper]
root            49     2       0      0 devtmpfsd           0 S [kdevtmpfs]
root            50     2       0      0 rescuer_thread      0 S [netns]
root            51     2       0      0 worker_thread       0 S [kworker/u16:1]
root            53     2       0      0 rescuer_thread      0 S [perf]
root            77     2       0      0 rescuer_thread      0 S [exynos_cpu_hotp]
root           353     2       0      0 watchdog            0 S [khungtaskd]
root           355     2       0      0 rescuer_thread      0 S [writeback]
root           361     2       0      0 ksm_scan_thread     0 S [ksmd]
root           364     2       0      0 rescuer_thread      0 S [crypto]
root           366     2       0      0 rescuer_thread      0 S [bioset]
root           370     2       0      0 rescuer_thread      0 S [kblockd]
root           445     2       0      0 kthread_worker_fn   0 S [spi1]
root           564     2       0      0 irq_thread          0 S [irq/2-s2mpu05]
root           631     2       0      0 irq_thread          0 S [irq/8-s2mu005-i]
root           660     2       0      0 ion_heap_deferred_free 0 S [ion_noncontig_h]
root           669     2       0      0 rescuer_thread      0 S [devfreq_wq]
root           688     2       0      0 rescuer_thread      0 S [cfg80211]
root           704     2       0      0 cpufreq_interactive_speedchange_task 0 S [cfinteractive]
root           705     2       0      0 worker_thread       0 S [kworker/7:1]
root           737     2       0      0 kswapd              0 S [kswapd0]
root           801     2       0      0 fsnotify_mark_destroy 0 S [fsnotify_mark]
root           823     2       0      0 ecryptfs_threadfn   0 S [ecryptfs-kthrea]
root           974     2       0      0 add_hwgenerator_randomness 0 S [hwrng]
root           977     2       0      0 rescuer_thread      0 S [g3d_dvfs]
root           979     2       0      0 rescuer_thread      0 S [kbase_job_fault]
root          1076     2       0      0 rescuer_thread      0 S [shmem_tx_wq]
root          1132     2       0      0 rescuer_thread      0 S [esd_tmr_workque]
root          1136     2       0      0 irq_thread          0 S [irq/9-bt532_ts_]
root          1161     2       0      0 rescuer_thread      0 S [scaler_fence_wo]
root          1164     2       0      0 rescuer_thread      0 S [scaler_fence_wo]
root          1167     2       0      0 irq_thread          0 S [irq/386-12c3000]
root          1172     2       0      0 rescuer_thread      0 S [s5p_mfc/watchdo]
root          1173     2       0      0 rescuer_thread      0 S [s5p_mfc/sched]
root          1208     2       0      0 rescuer_thread      0 S [dm_bufio_cache]
root          1218     2       0      0 rescuer_thread      0 S [dw-mci-card]
root          1222     2       0      0 rescuer_thread      0 S [dw-mci-card]
root          1224     2       0      0 worker_thread       0 S [kworker/1:2]
root          1226     2       0      0 mmc_queue_thread    0 S [mmcqd/0]
root          1227     2       0      0 mmc_queue_thread    0 S [mmcqd/0boot0]
root          1228     2       0      0 mmc_queue_thread    0 S [mmcqd/0boot1]
root          1229     2       0      0 mmc_queue_thread    0 S [mmcqd/0rpmb]
root          1231     2       0      0 rescuer_thread      0 S [dw-mci-card]
root          1293     2       0      0 rescuer_thread      0 S [binder]
root          1372     2       0      0 irq_thread          0 S [irq/11-fuelgaug]
root          1375     2       0      0 rescuer_thread      0 S [charger-wq]
root          1393     2       0      0 rescuer_thread      0 S [accel_wq]
root          1395     2       0      0 rescuer_thread      0 S [lis2ds]
root          1402     2       0      0 worker_thread       0 S [kworker/4:1]
root          1405     2       0      0 rescuer_thread      0 S [gp2a_prox_wq]
root          1407     2       0      0 irq_thread          0 S [irq/5-proximity]
root          1411     2       0      0 irq_thread          0 S [irq/7-A96T3X6]
root          1414     2       0      0 kthread_worker_fn   0 S [mc_fastcall]
root          1417     2       0      0 irq_bh_worker       0 D [tee_irq_bh]
root          1418     2       0      0 tee_scheduler       0 D [tee_scheduler]
root          1420     2       0      0 tee_msg_thread      0 S [five_tee_msg_th]
root          1421     2       0      0 rescuer_thread      0 S [sec_vib_work]
root          1426     2       0      0 rescuer_thread      0 S [etspi_debug_wq]
root          1451     2       0      0 rescuer_thread      0 S [mixer-cp-wq]
root          1452     2       0      0 rescuer_thread      0 S [buttons_wq]
root          1453     2       0      0 rescuer_thread      0 S [jack_det_wq]
root          1454     2       0      0 rescuer_thread      0 S [jack_det_adc_wq]
root          1455     2       0      0 rescuer_thread      0 S [water_det_adc_w]
root          1456     2       0      0 rescuer_thread      0 S [adc_mute_wq]
root          1459     2       0      0 irq_thread          0 S [irq/12-cod3026_]
root          1461     2       0      0 eax_mixer_kthread   0 S [eax-mixer]
root          1481     2       0      0 worker_thread       0 S [kworker/u16:3]
root          1493     2       0      0 rescuer_thread      0 S [ipv6_addrconf]
root          1530     2       0      0 rescuer_thread      0 S [five_wq]
root          1531     2       0      0 rescuer_thread      0 S [five_hook_wq]
root          1537     2       0      0 decon_wait_for_vsync_thread 0 S [s3c-fb-vsync]
root          1538     2       0      0 rescuer_thread      0 S [decon_lpd]
root          1540     2       0      0 kthread_worker_fn   0 S [decon0]
root          1544     2       0      0 rescuer_thread      0 S [deferwq]
root          1570     2       0      0 rescuer_thread      0 S [mtp_read_send]
root          1577     2       0      0 sleep_thread        0 S [file-storage]
root          1587     2       0      0 rescuer_thread      0 S [usb_notify]
root          1595     2       0      0 irq_thread          0 S [irq/556-flip_co]
root          1606     2       0      0 rescuer_thread      0 S [battery]
root          1618     2       0      0 kthread_worker_fn   0 S [mc_timer]
root          1754     2       0      0 down_interruptible  0 S [dhd_watchdog_th]
root          1755     2       0      0 down_interruptible  0 S [dhd_dpc]
root          1756     2       0      0 down_interruptible  0 S [dhd_rxf]
root          1950     2       0      0 worker_thread       0 S [kworker/3:1H]
root          1952     2       0      0 rescuer_thread      0 S [kdmflush]
root          1954     2       0      0 rescuer_thread      0 S [bioset]
root          1955     2       0      0 rescuer_thread      0 S [kverityd]
root          1956     2       0      0 rescuer_thread      0 S [bioset]
root          1960     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
root          1961     2       0      0 worker_thread       0 S [kworker/u17:2]
root          1964     2       0      0 worker_thread       0 S [kworker/u17:4]
root          1973     2       0      0 rescuer_thread      0 S [kdmflush]
root          1974     2       0      0 rescuer_thread      0 S [bioset]
root          1975     2       0      0 rescuer_thread      0 S [kverityd]
root          1976     2       0      0 rescuer_thread      0 S [bioset]
root          1980     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
root          1989     2       0      0 rescuer_thread      0 S [kdmflush]
root          1990     2       0      0 rescuer_thread      0 S [bioset]
root          1991     2       0      0 rescuer_thread      0 S [kverityd]
root          1992     2       0      0 rescuer_thread      0 S [bioset]
root          1996     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
root          1997     2       0      0 worker_thread       0 S [kworker/2:1H]
root          1999     1   15228   2980 poll_schedule_timeout 0 S init
root          2000     1   14652   2264 poll_schedule_timeout 0 S init
root          2005     1   14464   3500 poll_schedule_timeout 0 S ueventd
root          2007     2       0      0 worker_thread       0 S [kworker/0:1H]
logd          2702     1   32844  16148 sigsuspend          0 S logd
system        2703     1   10544   2088 binder_ioctl        0 S servicemanager
system        2704     1   15228   3104 SyS_epoll_wait      0 S hwservicemanager
system        2705     1   10488   1696 binder_ioctl        0 S vndservicemanager
root          2709     1    8236   1124 hrtimer_nanosleep   0 S watchdogd
root          2714     1   37968   3860 binder_ioctl        0 S vold
root          2735     2       0      0 kjournald2          0 S [jbd2/mmcblk0p23]
root          2736     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
root          2739     2       0      0 kjournald2          0 S [jbd2/mmcblk0p4-]
root          2740     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
root          2743     2       0      0 kjournald2          0 S [jbd2/mmcblk0p21]
root          2744     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
root          2746     2       0      0 kjournald2          0 S [jbd2/mmcblk0p3-]
root          2747     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
system        2817     1   11240   1432 admin_ioctl         0 S mcDriverDaemon
dsms          2818     1   12956   2516 binder_ioctl        0 S vendor.samsung.frameworks.security.dsms@1.0-service
system        2819     1   14916   2916 binder_ioctl        0 S android.hardware.keymaster@3.0-service
system        2820     1   12236   1952 binder_ioctl        0 S vendor.samsung.hardware.security.wsm@1.0-service
system        2821     1   11040   2256 __skb_recv_datagram 0 S vaultkeeperd
system        2822     1   11072   1972 binder_ioctl        0 S vendor.samsung.hardware.security.vaultkeeper@1.0-servicesystem        2823     1    8748   1112 __skb_recv_datagram 0 S storkd
root          2825     1   18588   1992 binder_ioctl        0 S apexd
system        2847     1   12664   2468 binder_ioctl        0 S android.hidl.allocator@1.0-service
system        2848     1   19164   2440 binder_ioctl        0 S android.system.suspend@1.0-service
audioserver   2849     1   41740   2944 binder_ioctl        0 S android.hardware.audio@2.0-service
bluetooth     2850     1   14860   2044 binder_ioctl        0 S android.hardware.bluetooth@1.0-service
media         2851     1   14976   2028 binder_ioctl        0 S android.hardware.cas@1.1-service
system        2852     1   14304   1988 binder_ioctl        0 S android.hardware.configstore@1.1-service
media         2853     1   20204   2624 binder_ioctl        0 S android.hardware.drm@1.0-service
media         2854     1   17756   2456 binder_ioctl        0 S android.hardware.drm@1.2-service.clearkey
media         2855     1   19316   2156 binder_ioctl        0 S android.hardware.drm@1.2-service.widevine
system        2856     1   11252   1724 binder_ioctl        0 S android.hardware.gatekeeper@1.0-service
system        2857     1   17452   2640 binder_ioctl        0 S android.hardware.graphics.allocator@2.0-service
system        2858     1   66724   3524                     0 R android.hardware.graphics.composer@2.1-service
system        2859     1   11440   2080 SyS_epoll_wait      0 S android.hardware.health@2.0-service.samsung
system        2860     1   11288   2032 binder_ioctl        0 S android.hardware.memtrack@1.0-service
system        2861     1   11208   1868 binder_ioctl        0 S android.hardware.power@1.0-service
system        2862     1   14388   2268 poll_schedule_timeout 0 S android.hardware.sensors@1.0-service
wifi          2863     1   15388   2084 binder_ioctl        0 S android.hardware.wifi@1.0-service
system        2864     1   10968   1496 binder_ioctl        0 S vendor.samsung.hardware.base@1.0-service
cameraserver  2865     1  162488   5340 binder_ioctl        0 S vendor.samsung.hardware.camera.provider@3.0-service
system        2866     1   11284   1888 binder_ioctl        0 S vendor.samsung.hardware.light@3.0-service
system        2867     1   17792   2340 binder_ioctl        0 S vendor.samsung.hardware.snap@1.1-service
system        2868     1   11292   1796 binder_ioctl        0 S vendor.samsung.hardware.vibrator@2.0-service
wifi          2869     1   13836   2152 binder_ioctl        0 S vendor.samsung.hardware.wifi@2.0-service
system        2871     1   13196   2008 binder_ioctl        0 S vendor.samsung_slsi.hardware.ExynosHWCServiceTW@1.0-service
system        2872     1   14228   1572 binder_ioctl        0 S vendor.samsung_slsi.hardware.configstore@1.0-service
nobody        2873     1   10320   1748 binder_ioctl        0 S ashmemd
audioserver   2874     1   74736   7356 binder_ioctl        0 S audioserver
gpu_service   2875     1   15120   2360 binder_ioctl        0 S gpuservice
lmkd          2876     1    9376   1712 SyS_epoll_wait      0 S lmkd
system        2877     1  126644  13024 SyS_epoll_wait      0 S surfaceflinger
system        2880     1   10980   1508 binder_ioctl        0 S vendor.samsung.hardware.security.widevine.keyprovisioning@1.0-service
root          2885     2       0      0 worker_thread       0 S [kworker/5:3]
system        2888     1   11228   1856 SyS_epoll_wait      0 S vendor.samsung.hardware.security.proca@2.0-service
system        2889     1   16528   2980 binder_ioctl        0 S secure_storage_daemon
root          2899     2       0      0 worker_thread       0 S [kworker/6:3]
root          2906     2       0      0 rescuer_thread      0 S [kdmflush]
root          2907     2       0      0 rescuer_thread      0 S [bioset]
root          2908     2       0      0 rescuer_thread      0 S [kcryptd_fmp_io]
root          2910     2       0      0 dmcrypt_write       0 S [dmcrypt_write]
root          2911     2       0      0 rescuer_thread      0 S [bioset]
root          2924     2       0      0 worker_thread       0 S [kworker/1:1H]
root          2938     2       0      0 kjournald2          0 S [jbd2/dm-3-8]
root          2939     2       0      0 rescuer_thread      0 S [ext4-rsv-conver]
root          2944     1 1835612  75368 poll_schedule_timeout 0 S zygote
root          2969     2       0      0 rescuer_thread      0 S [kbase_event]
vendor_audit  2995     1   10808   1348 poll_schedule_timeout 0 S auditd
root          2996     2       0      0 kauditd_thread      0 S [kauditd]
system        3008     1   13772   1660 poll_schedule_timeout 0 S sdp_cryptod
cameraserver  3010     1  108448   9148 binder_ioctl        0 S cameraserver
drm           3011     1   31664   4552 binder_ioctl        0 S drmserver
system        3012     1   21400   3260 binder_ioctl        0 S idmap2d
system        3013     1   14000   1524 binder_ioctl        0 S imsd
incidentd     3015     1   15896   1960 SyS_epoll_wait      0 S incidentd
system        3016     1   13656   2080 hrtimer_nanosleep   0 S smdexe
system        3017     1   21168    948 __skb_recv_datagram 0 S diagexe
system        3018     1   17468   2088 __skb_recv_datagram 0 S ddexe
system        3020     1   17556   2724 poll_schedule_timeout 0 S connfwexe
root          3021     1   24532   2884 binder_ioctl        0 S installd
keystore      3022     1   24688   4632 binder_ioctl        0 S keystore
media         3023     1   16596   2368 binder_ioctl        0 S mediadrmserver
mediaex       3024     1   88576   8216 binder_ioctl        0 S media.extractor
media         3025     1   28936   4536 binder_ioctl        0 S media.metrics
media         3026     1   68868   7216 binder_ioctl        0 S mediaserver
root          3027     1   42660   4480 binder_ioctl        0 S netd
vendor_remotedisplay 3028 1 31256  4572 binder_ioctl        0 S remotedisplay
statsd        3029     1   24900   5072 SyS_epoll_wait      0 S statsd
root          3030     1   19688   2660 binder_ioctl        0 S storaged
wifi          3031     1   12852   1888 SyS_epoll_wait      0 S wificond
mediacodec    3032     1   43488   4112 binder_ioctl        0 S media.codec
radio         3034     1   11192   1276 poll_schedule_timeout 0 S cbd
gps           3035     1   40732   3880 hrtimer_nanosleep   0 S gpsd
system        3036     1   14124   1544 binder_ioctl        0 S extSDCardServiceVold
system        3037     1    8856   1268 hrtimer_nanosleep   0 S argosd
radio         3038     1   50648   8732 binder_ioctl        0 S rild
radio         3039     1   45308   6472 binder_ioctl        0 S rild
system        3040     1   29024   3180 binder_ioctl        0 S vendor.samsung.hardware.gnss@2.0-service
system        3041     1   10964   1692 binder_ioctl        0 S vendor.samsung.hardware.miscpower@2.0-service
mediacodec    3046     1   53604   2164 binder_ioctl        0 S media.swcodec
system        3053     1   15180   2828 binder_ioctl        0 S gatekeeperd
system        3054     1   17948   2980 poll_schedule_timeout 0 S at_distributor
tombstoned    3055     1    8780   1020 SyS_epoll_wait      0 S tombstoned
system        3058     1   15084   2768 binder_ioctl        0 S faced
system        3059     1   41368   2488 binder_ioctl        0 S vendor.samsung.hardware.biometrics.fingerprint@3.0-service
root          3208  3027    8872   1600 pipe_wait           0 S iptables-restore
root          3212  3027   10164   1608 pipe_wait           0 S ip6tables-restore
system        3294  2944 2666532 240704 SyS_epoll_wait      0 S system_server
radio         3320     1   16104   1816 hrtimer_nanosleep   0 S multiclientd
radio         3330     1   16104   2172 hrtimer_nanosleep   0 S multiclientd
root          3348     2       0      0 irq_thread          0 S [irq/455-1382000]
root          3499     2       0      0 worker_thread       0 S [kworker/4:1H]
root          3614     2       0      0 worker_thread       0 S [kworker/7:1H]
root          3615     2       0      0 worker_thread       0 S [kworker/5:1H]
root          3616     2       0      0 exynos_hpgov_do_update_governor 0 D [exynos_hpgov]
root          3617     2       0      0 exynos_hpgov_do_hotplug 0 D [exynos_hp]
root          3618     2       0      0 worker_thread       0 S [kworker/6:1H]
root          3647     2       0      0 rescuer_thread      0 S [dhd_eventd]
radio         3665  2944 1400256  80820 SyS_epoll_wait      0 S com.android.phone
u0_a58        3688  2944 1816252 188356 SyS_epoll_wait      0 S com.android.systemui
oem_5013      3781  2944 1292388  45812 SyS_epoll_wait      0 S com.sec.location.nsflp2
u0_a81        3802  2944 1624672 157008 SyS_epoll_wait      0 S com.google.android.gms.persistent
system        3850  2944 1296032  39696 SyS_epoll_wait      0 S com.sec.sve
webview_zygote 3856 2944 1914504  26132 poll_schedule_timeout 0 S webview_zygote
system        3892  2944 2088072  95044 SyS_epoll_wait      0 S com.sec.imsservice
secure_element 3910 2944 1286340  36836 SyS_epoll_wait      0 S com.android.se
system        3934  2944 1315792  52332 SyS_epoll_wait      0 S com.sec.epdg
root          3974     2       0      0 worker_thread       0 S [kworker/5:4]
u0_a131       4124  2944 1462344 106568 SyS_epoll_wait      0 S com.sec.android.app.launcher
u0_a74        4150  2944 1372528  57628 SyS_epoll_wait      0 S com.google.android.ext.services
vendor_knoxcore 4196 2944 1289296 39828 SyS_epoll_wait      0 S com.samsung.android.knox.containercore
u0_a52        4356  2944 1335980  59104 SyS_epoll_wait      0 S android.process.acore
system        4399  2944 1309332  44824 SyS_epoll_wait      0 S com.samsung.android.fmm
root          4429     2       0      0 rescuer_thread      0 S [kbase_event]
system        4504     1    9796   1452 __skb_recv_datagram 0 S bsd
bluetooth     4506  2944 1332988  52148 SyS_epoll_wait      0 S com.android.bluetooth
system        4512     1    9184   1288 hrtimer_nanosleep   0 S iod
u0_a115       4579  2944 2203228 168828 SyS_epoll_wait      0 S com.samsung.android.messaging
root          4690     2       0      0 irq_thread          0 S [irq/454-1381000]
u0_a81        4772  2944 1702620 168280 SyS_epoll_wait      0 S com.google.android.gms
u0_a81        4801  2944 1298148  43348 SyS_epoll_wait      0 S com.google.process.gservices
u0_a139       4814  2944 2147228  82576 SyS_epoll_wait      0 S com.google.android.googlequicksearchbox:interactor
u0_a87        4844  2944 2022932  74556 SyS_epoll_wait      0 S com.samsung.android.keyguardmgsupdator
system        4866  2944 1304692  54516 SyS_epoll_wait      0 S com.sec.android.diagmonagent
system        4919  2944 1333824  62580 SyS_epoll_wait      0 S com.sec.android.sdhms
u0_a59        5036  2944 1310764  56040 SyS_epoll_wait      0 S android.process.media
u0_a139       5209  2944 2263144 152716 SyS_epoll_wait      0 S com.google.android.googlequicksearchbox:search
u0_a54        5240  2944 1989444  50612 SyS_epoll_wait      0 S com.samsung.android.app.spage
root          5264     2       0      0 rescuer_thread      0 S [kbase_event]
vendor_intelligenceservice 5500 2944 1314140 51836 SyS_epoll_wait 0 S com.samsung.android.runa
u0_a73        5566  2944 2037176  63816 SyS_epoll_wait      0 S com.samsung.android.game.gamehome
root          5846     2       0      0 rescuer_thread      0 S [kbase_event]
system        6058     1   33460   3224 do_sigtimedwait     0 S eris
u0_i9000      6607  3856 1369724  36992 SyS_epoll_wait      0 S com.google.android.webview:sandboxed_process0:org.chromium.content.app.Sand
vendor_cmhservice 7622 2944 1966680 47888 SyS_epoll_wait    0 S com.samsung.cmh:CMH
u0_a358       8775  2944 2070128  62280 SyS_epoll_wait      0 S org.telegram.messenger
system        8811  2944 1297528  49812 SyS_epoll_wait      0 S com.wssyncmldm
u0_a107       8927  2944 1991372  45760 SyS_epoll_wait      0 S com.sec.android.gallery3d
root          9011     2       0      0 rescuer_thread      0 S [kbase_event]
u0_a164      10072  2944 2134748 124516 SyS_epoll_wait      0 S com.sec.android.inputmethod
system       10093  2944 1337304  47788 SyS_epoll_wait      0 S android:drmService
u0_a67       10588  2944 1308732  52340 SyS_epoll_wait      0 S com.facebook.services
vendor_bcmgr 13397  2944 1288696  40052 SyS_epoll_wait      0 S com.samsung.android.beaconmanager
u0_a110      14257  2944 2195020 103888 SyS_epoll_wait      0 S com.samsung.android.spaymini
u0_i9004     14425  3856 1369724  37048 SyS_epoll_wait      0 S com.google.android.webview:sandboxed_process0:org.chromium.content.app.Sand
system       15607  2944 1305684  48660 SyS_epoll_wait      0 S com.samsung.android.MtpApplication
root         15704  3027       0      0 do_exit             0 Z [dnsmasq]
shell        15763     1   24188   3560 poll_schedule_timeout 0 S adbd
u0_a235      16755  2944 1408928  88764 SyS_epoll_wait      0 S com.whatsapp
root         18357     2       0      0 rescuer_thread      0 S [kbase_event]
root         18574     2       0      0 worker_thread       0 S [kworker/3:2]
root         18600     2       0      0 worker_thread       0 S [kworker/2:0]
u0_a69       18666  2944 2004900  84308 SyS_epoll_wait      0 S com.samsung.android.app.galaxyfinder
root         18703     2       0      0 rescuer_thread      0 S [kbase_event]
root         18806     2       0      0 rescuer_thread      0 S [kbase_event]
root         18818     2       0      0 worker_thread       0 S [kworker/u17:3]
u0_a117      18820  2944 2088588 128880 SyS_epoll_wait      0 S com.sec.android.app.myfiles
root         18895     2       0      0 rescuer_thread      0 S [kbase_event]
u0_a162      19108  2944 1287180  40232 SyS_epoll_wait      0 S com.samsung.android.sm.policy
u0_a49       19368  2944 1335904  63332 SyS_epoll_wait      0 S com.google.android.projection.gearhead:car
root         19404     2       0      0 worker_thread       0 S [kworker/0:3]
system       19511  2944 1309892  59524 SyS_epoll_wait      0 S com.samsung.memorysaver
u0_a153      19699  2944 1327004  53440 SyS_epoll_wait      0 S com.samsung.android.app.simplesharing
radio        19767  2944 1343560  53716 SyS_epoll_wait      0 S com.samsung.android.app.telephonyui
u0_a78       19846  2944 2026324  76428 SyS_epoll_wait      0 S com.sec.android.app.samsungapps
system       19937  2944 1377360  83280 SyS_epoll_wait      0 S system:ui
u0_a133      20047  2944 1303388  50812 SyS_epoll_wait      0 S com.google.android.apps.turbo:aab
vendor_samsungcloud 20088 2944 1370228 59048 SyS_epoll_wait 0 S com.samsung.android.scloud
root         20162     2       0      0 worker_thread       0 S [kworker/1:0]
dsms         20241  2944 1289960  41932 SyS_epoll_wait      0 S com.samsung.android.dsms
system       20267  2944 1303360  51088 SyS_epoll_wait      0 S com.samsung.android.sm.provider
root         20295     2       0      0 worker_thread       0 S [kworker/2:2]
u0_a190      20313  2944 1297196  43412 SyS_epoll_wait      0 S com.google.android.webview:webview_service
root         20358     2       0      0 rescuer_thread      0 S [kbase_event]
u0_a93       20371  2944 1286076  43784 SyS_epoll_wait      0 S com.wsomacp
radio        20390  2944 1340168  46924 SyS_epoll_wait      0 S com.samsung.android.app.telephonyui:callsettingsprovideru0_a189      20428  2944 1292168  41700 SyS_epoll_wait      0 S com.samsung.android.samsungpassautofill
u0_a200      20499  2944 1616360  96700 SyS_epoll_wait      0 S com.google.android.apps.tachyon
vendor_networkdiagnostic 20561 2944 1297724 51792 SyS_epoll_wait 0 S com.samsung.android.networkdiagnostic
u0_a81       20613  2944 1519424  77716 SyS_epoll_wait      0 S com.google.android.gms.unstable
root         20695     2       0      0 worker_thread       0 S [kworker/3:0]
root         20763     2       0      0 worker_thread       0 S [kworker/0:0]
root         20995     2       0      0 worker_thread       0 S [kworker/1:1]
system       21099  2944 1291452  45104 SyS_epoll_wait      0 S com.samsung.logwriter
root         21166     2       0      0 worker_thread       0 S [kworker/0:1]
shell        21172 15763   10472   2216 0            e783ed48 R ps



E:\ADB\platform-tools>adb shell pm list packages
package:com.samsung.android.provider.filterprovider
package:com.monotype.android.font.rosemary
package:com.sec.android.app.DataCreate
package:com.skype.raider
package:com.android.cts.priv.ctsshim
package:com.jio.media.jiobeats
package:com.sec.android.widgetapp.samsungapps
package:com.samsung.android.smartswitchassistant
package:com.sec.vsim.ericssonnsds.webapp
package:com.sec.android.app.setupwizardlegalprovider
package:com.google.android.youtube
package:com.samsung.android.app.galaxyfinder
package:com.sec.location.nsflp2
package:com.samsung.android.themestore
package:com.sec.android.app.chromecustomizations
package:com.android.internal.display.cutout.emulation.corner
package:com.google.android.ext.services
package:com.android.internal.display.cutout.emulation.double
package:com.android.providers.telephony
package:com.sec.android.app.parser
package:com.android.dynsystem
package:com.truecaller
package:com.samsung.internal.systemui.navbar.gestural_no_hint_wide_back
package:com.samsung.android.applock
package:com.google.android.googlequicksearchbox
package:com.samsung.android.calendar
package:com.samsung.android.timezone.updater
package:com.android.providers.calendar
package:com.osp.app.signin
package:com.samsung.clipboardsaveservice
package:com.sec.automation
package:com.whereismytrain.android
package:org.telegram.messenger
package:com.android.providers.media
package:com.samsung.android.app.social
package:com.phonepe.app
package:com.android.theme.icon.square
package:com.google.android.onetimeinitializer
package:com.google.android.ext.shared
package:com.android.internal.systemui.navbar.gestural_wide_back
package:com.android.wallpapercropper
package:com.samsung.android.wallpaper.res
package:com.android.theme.color.cinnamon
package:com.samsung.android.smartmirroring
package:com.skms.android.agent
package:com.sec.android.app.safetyassurance
package:com.samsung.android.incallui
package:com.samsung.android.knox.containercore
package:com.android.theme.icon_pack.rounded.systemui
package:com.samsung.android.kidsinstaller
package:com.sec.factory.camera
package:com.sec.vsimservice
package:com.sec.usbsettings
package:com.samsung.android.easysetup
package:com.dencreak.dlcalculator
package:com.android.documentsui
package:com.android.externalstorage
package:com.sec.android.easyonehand
package:com.sec.factory
package:com.samsung.android.provider.stickerprovider
package:com.android.htmlviewer
package:com.whatsapp
package:com.android.companiondevicemanager
package:com.android.mms.service
package:com.samsung.android.rubin.app
package:com.android.providers.downloads
package:com.diotek.sec.lookup.dictionary
package:com.android.networkstack.inprocess
package:com.sec.android.easyMover.Agent
package:com.samsung.ucs.agent.boot
package:com.samsung.android.mdx.quickboard
package:com.android.theme.icon_pack.rounded.android
package:com.wsomacp
package:com.samsung.faceservice
package:com.monotype.android.font.foundation
package:com.sec.android.widgetapp.easymodecontactswidget
package:com.duolingo
package:com.samsung.android.MtpApplication
package:com.sec.android.app.factorykeystring
package:com.sec.android.app.samsungapps
package:com.sec.android.emergencymode.service
package:com.android.theme.icon_pack.circular.themepicker
package:com.google.android.overlay.gmsgsaconfig
package:com.google.android.configupdater
package:com.sec.android.app.wlantest
package:com.microsoft.office.excel
package:com.samsung.android.app.camera.sticker.facear.preload
package:in.amazon.mShop.android.shopping
package:com.google.android.overlay.modules.permissioncontroller
package:com.samsung.android.app.settings.bixby
package:com.sec.android.app.billing
package:com.sec.epdgtestapp
package:com.samsung.android.timezone.data_Q
package:com.samsung.android.game.gamehome
package:com.sec.android.daemonapp
package:com.sec.ims
package:com.sec.sve
package:com.sec.enterprise.knox.attestation
package:com.android.providers.downloads.ui
package:com.android.vending
package:com.android.pacprocessor
package:com.android.simappdialog
package:com.samsung.android.knox.attestation
package:com.samsung.internal.systemui.navbar.sec_gestural
package:com.microsoft.skydrive
package:com.samsung.android.SettingsReceiver
package:com.android.internal.display.cutout.emulation.tall
package:com.sec.android.app.soundalive
package:com.flipkart.android
package:com.sec.android.provider.badge
package:com.android.certinstaller
package:com.duosecurity.duomobile
package:com.samsung.android.securitylogagent
package:com.android.theme.color.black
package:com.android.carrierconfig
package:com.android.theme.color.green
package:com.android.theme.color.ocean
package:com.samsung.android.knox.containeragent
package:com.android.theme.color.space
package:com.android.internal.systemui.navbar.threebutton
package:us.zoom.videomeetings
package:com.samsung.SMT
package:com.samsung.cmh
package:com.samsung.mlp
package:com.samsung.rcs
package:android
package:com.samsung.knox.keychain
package:com.samsung.android.sm.devicesecurity
package:com.android.theme.icon_pack.rounded.launcher
package:com.samsung.android.providers.carrier
package:com.samsung.internal.systemui.navbar.sec_gestural_no_hint
package:com.samsung.android.net.wifi.wifiguider
package:com.samsung.android.bixby.service
package:com.android.egg
package:com.android.mtp
package:com.android.ons
package:com.android.stk
package:com.samsung.android.messaging
package:com.testbook.tbapp
package:com.samsung.android.emojiupdater
package:com.android.backupconfirm
package:com.samsung.klmsagent
package:com.instagram.android
package:com.samsung.android.smartfitting
package:com.sec.android.app.SecSetupWizard
package:com.samsung.android.app.telephonyui
package:com.android.internal.systemui.navbar.twobutton
package:com.samsung.android.samsungpositioning
package:com.android.statementservice
package:com.android.hotspot2
package:com.google.android.gm
package:com.google.android.apps.tachyon
package:com.sec.android.app.hwmoduletest
package:com.android.settings.intelligence
package:com.sec.bcservice
package:com.sec.modem.settings
package:com.android.internal.systemui.navbar.gestural_extra_wide_back
package:com.olacabs.customer
package:com.google.android.permissioncontroller
package:com.opera.max.preinstall
package:com.sec.android.app.servicemodeapp
package:com.sec.android.preloadinstaller
package:com.sec.android.uibcvirtualsoftkey
package:com.google.android.setupwizard
package:com.sec.android.gallery3d
package:com.android.providers.settings
package:com.samsung.accessibility
package:com.sec.imsservice
package:com.android.sharedstoragebackup
package:com.facebook.services
package:com.samsung.android.mobileservice
package:com.android.printspooler
package:com.android.theme.icon_pack.filled.settings
package:com.samsung.storyservice
package:com.android.dreams.basic
package:com.google.android.overlay.modules.ext.services
package:com.samsung.internal.systemui.navbar.gestural_no_hint_extra_wide_back
package:com.android.se
package:com.android.inputdevices
package:com.samsung.android.kgclient
package:com.samsung.knox.securefolder
package:com.samsung.android.app.talkback
package:com.android.bips
package:com.android.stk2
package:com.samsung.android.game.gametools
package:com.samsung.android.app.simplesharing
package:com.samsung.android.app.contacts
package:com.lenovo.anyshare.gps
package:com.samsung.android.da.daagent
package:com.android.theme.icon_pack.circular.settings
package:com.samsung.android.app.reminder
package:com.adobe.scan.android
package:com.samsung.android.smartcallprovider
package:com.samsung.android.app.smartcapture
package:com.google.android.overlay.gmsconfig
package:com.google.android.apps.maps
package:com.google.android.modulemetadata
package:com.samsung.android.dynamiclock
package:com.microsoft.office.word
package:com.samsung.advp.imssettings
package:net.one97.paytm
package:com.samsung.android.location
package:com.sec.android.inputmethod
package:com.sec.android.app.clockpackage
package:com.sec.android.RilServiceModeApp
package:com.google.android.webview
package:com.android.theme.icon.teardrop
package:com.microsoft.office.powerpoint
package:com.samsung.android.keyguardmgsupdator
package:com.android.server.telecom
package:com.google.android.syncadapters.contacts
package:com.samsung.crane
package:com.sec.imslogger
package:com.samsung.android.clipboarduiservice
package:com.android.keychain
package:com.android.chrome
package:com.samsung.android.ipsgeofence
package:com.ionicframework.apsrtclivetrack555011
package:com.samsung.android.spaymini
package:com.samsung.android.themecenter
package:com.android.theme.icon_pack.filled.systemui
package:com.google.android.packageinstaller
package:com.google.android.gms
package:com.google.android.gsf
package:com.google.android.tts
package:android.autoinstalls.config.samsung
package:com.samsung.android.container
package:com.samsung.systemui.hidenotch.withoutcornerround
package:com.android.calllogbackup
package:com.google.android.partnersetup
package:com.sec.android.diagmonagent
package:com.android.localtransport
package:com.samsung.android.biometrics.app.setting
package:com.sec.spp.push
package:com.android.carrierdefaultapp
package:com.android.theme.font.notoserifsource
package:com.sec.android.app.myfiles
package:com.android.theme.icon_pack.filled.android
package:com.samsung.android.setupindiaservicestnc
package:com.android.proxyhandler
package:com.samsung.android.allshare.service.fileshare
package:com.android.theme.icon_pack.circular.systemui
package:com.sec.android.mimage.photoretouching
package:com.sec.android.app.launcher
package:com.samsung.android.universalswitch
package:com.google.android.overlay.modules.permissioncontroller.forframework
package:flipboard.boxer.app
package:com.mygalaxy
package:com.jio.myjio
package:com.google.android.feedback
package:com.google.android.printservice.recommendation
package:com.samsung.adaptivebrightnessgo
package:com.google.android.apps.photos
package:com.google.android.syncadapters.calendar
package:com.android.managedprovisioning
package:com.samsung.android.setting.multisound
package:com.samsung.android.authfw
package:com.monotype.android.font.chococooky
package:com.android.dreams.phototable
package:com.sec.android.service.health
package:com.samsung.safetyinformation
package:com.samsung.android.dialer
package:com.facebook.katana
package:com.samsung.android.dqagent
package:com.sec.android.app.ringtoneBR
package:com.samsung.android.game.gos
package:com.samsung.android.forest
package:com.mousudh.simpleinterest
package:com.larksuite.suite
package:com.android.providers.partnerbookmarks
package:com.samsung.internal.systemui.navbar.gestural_no_hint_narrow_back
package:com.opera.max.oem
package:com.android.wallpaper.livepicker
package:com.samsung.android.beaconmanager
package:com.samsung.internal.systemui.navbar.gestural_no_hint
package:com.sec.enterprise.mdm.services.simpin
package:com.samsung.android.stickercenter
package:com.facebook.system
package:com.downlood.sav.whmedia
package:com.samsung.android.providers.media
package:com.sec.android.soagent
package:com.samsung.android.fmm
package:com.samsung.android.mdm
package:com.samsung.android.mfi
package:com.samsung.android.uds
package:com.sec.unifiedwfc
package:com.android.theme.icon.squircle
package:com.sec.phone
package:com.samsung.android.samsungpass
package:com.android.storagemanager
package:com.samsung.android.scloud
package:com.samsung.android.app.soundpicker
package:com.sec.app.RilErrorNotifier
package:com.android.bookmarkprovider
package:com.linkedin.android
package:com.android.settings
package:com.samsung.app.newtrim
package:com.google.android.apps.nbu.paisa.user
package:com.samsung.android.dsms
package:com.samsung.android.lool
package:com.sec.android.app.bluetoothtest
package:com.sec.android.sdhms
package:com.samsung.android.app.spage
package:com.android.theme.icon_pack.filled.launcher
package:com.samsung.android.knox.analytics.uploader
package:com.samsung.android.sm.policy
package:com.android.networkstack.permissionconfig
package:com.sec.android.emergencylauncher
package:com.google.android.projection.gearhead
package:com.sec.hearingadjust
package:com.google.android.apps.turbo
package:com.samsung.android.bluelightfilter
package:com.samsung.android.bbc.bbcagent
package:com.knox.vpn.proxyhandler
package:com.ludo.king
package:com.android.cts.ctsshim
package:com.sec.android.splitsound
package:com.samsung.android.app.watchmanagerstub
package:com.aura.oobe.samsung
package:com.samsung.android.svcagent
package:com.sec.mhs.smarttethering
package:com.android.theme.icon_pack.circular.launcher
package:com.samsung.android.networkdiagnostic
package:com.samsung.android.shortcutbackupservice
package:com.android.vpndialogs
package:com.google.android.apps.meetings
package:com.samsung.memorysaver
package:com.samsung.android.providers.contacts
package:com.android.phone
package:com.android.shell
package:com.android.theme.icon_pack.filled.themepicker
package:com.android.wallpaperbackup
package:com.android.providers.blockednumber
package:com.samsung.android.app.omcagent
package:com.hiya.star
package:com.google.android.apps.work.clouddpc
package:com.android.providers.userdictionary
package:com.sec.enterprise.knox.cloudmdm.smdms
package:com.samsung.android.app.camera.sticker.stamp.preload
package:com.android.emergency
package:com.wssyncmldm
package:com.samsung.ims.smk
package:com.google.android.gms.location.history
package:com.android.internal.systemui.navbar.gestural
package:com.dztall.ccr.android.admob
package:com.android.location.fused
package:com.android.theme.color.orchid
package:com.samsung.android.samsungpassautofill
package:com.sec.epdg
package:com.android.systemui
package:com.sec.android.app.personalization
package:com.monotype.android.font.cooljazz
package:com.android.theme.color.purple
package:com.android.bluetoothmidiservice
package:com.samsung.android.sdk.handwriting
package:com.facebook.appmanager
package:com.samsung.android.app.clockpack
package:com.samsung.aasaservice
package:com.samsung.systemui.hidenotch
package:com.android.traceur
package:com.samsung.android.allshare.service.mediashare
package:com.samsung.logwriter
package:com.sec.android.app.fm
package:com.sec.android.provider.emergencymode
package:com.samsung.android.cidmanager
package:com.sec.android.app.camera
package:com.android.bluetooth
package:com.samsung.android.contacts
package:com.samsung.ipservice
package:com.sec.android.app.magnifier
package:com.sec.android.widgetapp.webmanual
package:com.samsung.sec.android.application.csc
package:com.android.captiveportallogin
package:com.samsung.android.sdm.config
package:com.android.theme.icon.roundedrect
package:com.samsung.android.app.dressroom
package:com.android.internal.systemui.navbar.gestural_narrow_back
package:com.android.theme.icon_pack.rounded.settings
package:cn.wps.moffice_eng
package:com.microsoft.teams
package:com.samsung.android.bio.face.service
package:com.samsung.android.video
package:sun.way2sms.hyd.com
package:android.auto_generated_rro_vendor__
package:com.android.theme.icon_pack.circular.android
package:com.google.android.apps.restore


E:\ADB\platform-tools>adb shell pm list packages|findstr ludo.king
package:com.ludo.king

E:\ADB\platform-tools>adb uninstall com.ludo.king
Success

E:\ADB\platform-tools>adb shell
j6lte:/ $ ls
ls: ./preload: Permission denied
ls: ./init: Permission denied
acct               cache   data          efs               init.usb.configfs.rc mnt  product          sepolicy_version vendor
apex               carrier debug_ramdisk etc               init.usb.rc          odm  product_services storage
audit_filter_table config  default.prop  init.container.rc init.zygote32.rc     oem  publiccert.pem   sys
bin                cpefs   dev           init.environ.rc   lib                  omr  sbin             system
bugreports         d       dpolicy       init.rc           lost+found           proc sdcard           ueventd.rc
1|j6lte:/ $ cd sdcard
j6lte:/sdcard $ ls
Alarms  Call      DCIM     DualApp Hash\ Music\ Player LazyList Music         Pictures Ringtones Samsung  Telegram\ Audio documents
Android Cardboard Download Fonts   Lark                Movies   Notifications Podcasts SHAREit   Telegram bytertc_log
j6lte:/sdcard $ cd Download/
j6lte:/sdcard/Download $ ls
1\ COMPUTER\ BASICS.pptx                                                                      End_TB_brochure.pdf
10\ ONE\ DIMENSIONAL\ ARRAYS.pptx                                                             EnglishCoreXII.pdf
11\ TWO\ DIMENSIONAL\ ARRAYS.pptx                                                             Guidelines\ -\ Infosys\ Online\ Test.pdf
12\ STRINGS\ OR\ CHARACTER\ ARRAYS.pptx                                                       Idhe\ Kadha\ Nee\ Katha\ -\ SenSongsMp3.Co.mp3
13\ FUNCTIONS.pptx                                                                            Institute_List.pdf
14\ STORAGE\ CLASSES.pptx                                                                     Instructions\ for\ students\ -PG-Scholarship-02.02.pdf
15\ POINTERS.pptx                                                                             Lark
16\ DYNAMIC\ MEMORY\ ALLOCATION.pptx                                                          Lecture5.pdf
1629028522995_FAQs\ -\ Infosys\ Online\ Test.pdf                                              Micro\ Grid_\ Unit-4.pptx
1632554659424_kavitha_resume__1___1_.pdf                                                      Operators.pdf
1639666282145_UART6_without\ delay                                                            README.txt
1639666310754_1639666282145_UART6_without\ delay                                              REN_82c59a_DST_20020126\ (1).pdf
1639666347860_1639666310754_1639666282145_UART6_without\ delay                                REN_82c59a_DST_20020126.pdf
1639666566357_1639666347860_1639666310754_1639666282145_UART6_without\ delay                  Resume.pdf
17\ STRUCTURES\ &\ UNIONS.pptx                                                                UART6_without\ delay\ (1).c
18\ FILE\ HANDLING\ IN\ C.pptx                                                                UART6_without\ delay.c
2\ INTRODUCTION\ TO\ C\ PROGRAMMING.pptx                                                      [iSongs.info]\ 01\ -\ Arunachala\ Siva\ Eswaraa.mp3
3\ DATA\ TYPES\ AND\ VARIABLES.pptx                                                           [iSongs.info]\ 07\ -\ Idhe\ Kadha\ Nee\ Katha.mp3
4\ OPERATORS\ &\ EXPRESSIONS.pptx                                                             datasheet.pdf
5\ FLOW\ CONTROL-SELECTION.pptx                                                               face_prep__Wipro_NTH_slot_analysis_25th_Sep_2021_slot_3.pdf
6\ FLOW\ CONTROL\ LOOPING\ &\ JUMPING.pptx                                                    fulltext.pdf
7\ NESTED\ LOOPS.pptx                                                                         ieep1an.pdf
8\ INPUT\ &\ OUTPUT\ IN\ C.ppt                                                                kavitha\ resume\ (1)\ (1).pdf
8085AH\ pdf,\ 8085AH\ description,\ 8085AH\ datasheets,\ 8085AH\ view\ ___\ ALLDATASHEET\ ___ kavitha\ resume\ (2)\ (2).docx
8259A.pdf                                                                                     screen.png
9\ HEADER\ FILES.pptx                                                                         screencap.png
All\ Videos\ Downloader                                                                       test.pcm
j6lte:/sdcard/Download $ exit

E:\ADB\platform-tools>adb shell cat /sdcard/Download/README.txt
Compilation of multiple source files is possible in 2 ways.
1. Manual Method.
2. Automation Method: uses GNU Make tool.


What is Makefile?
----------------
Makefile help to compile multiple source files.
Makefile is Dependency tracking utility.
Make file look in to the current directory for a file by the name Makefile (recommended) or makefile.

Advantages:
-----------
Make is a utility for automatically building executable programs from source code.
Makefile compiles only modified files based on compilation time (i.e., time stamp) because of this compilation time is reduced.


Makefile Examples:
-----------------
source files: main.c,add.c,sub.c
header files: myinclude.h

Example 1: This is Basic example of Makefile.
---------
$ make
default target is all

Example 2: This example shows how to use,  clean and install targets, in Makefile.
---------
$ make clean (This command cleans object files, binaries and configuration files)
$ make install  (This command copy the binaries in /usr/bin directory)


Example 3: This Example shows how to use environment variables in Makefile
---------

Example 4: This Example shows how to create multiple Makefiles in each directory.
----------

Example 5: This Example shows how to give user defined name to Makefile.
---------





E:\ADB\platform-tools>adb logcat | findstr camera
07-03 23:33:32.235  3294  4907 I ActivityManager: Killing 14709:com.sec.android.app.camera/u0a103 (adj 999): empty #21
07-03 23:40:19.593  3294  3312 D PackageManager:   com.camerasideas.instashot/.ShareImageActivity
07-03 23:57:50.085 22967 23004 I CameraManagerGlobal: Connecting to camera service
07-03 23:57:50.093 22967 23028 I CameraManagerGlobal: Camera 0 facing CAMERA_FACING_BACK state now CAMERA_STATE_CLOSED for client com.sec.android.app.camera API Level 1
07-03 23:57:50.163 22967 23115 W stagram.androi: JNI RegisterNativeMethods: attempt to register 0 native methods for com.facebook.cameracore.ardelivery.effectasyncassetfetcher.listener.OnAsyncAssetFetchCompletedListener
07-04 00:00:00.714 22313 23373 D DWBDbPackageCategorySou: com.sec.android.app.camera was saved as Other(-1) on our DB.
07-04 00:00:00.715  3294  5512 D GameManagerService: identifyGamePackage. com.sec.android.app.camera, mCurrentUserId: 0, callerUserId: 0
07-04 00:00:00.715  3294  5512 D GamePkgDataHelper: getGamePkgData(). com.sec.android.app.camera
07-04 00:00:00.716 22313 23373 I DWBAndroidPackageCatego: com.sec.android.app.camera was identified to Other(-1)
07-04 00:00:00.717 22313 23373 I DWBDbPackageCategorySou: update database cache to add com.sec.android.app.camera as 'Other'
07-04 00:01:30.447 25661 25689 I AppClearCacheImpl: parent dir : /storage/emulated/0/Android/data/com.samsung.android.app.camera.sticker.stamp.preload
07-04 00:01:30.448 25661 25689 I AppClearCacheImpl: parent dir : /storage/emulated/0/Android/data/com.samsung.android.app.camera.sticker.stamp.preload/files
07-04 00:01:32.044 25661 25689 I AppClearCacheImpl: parent dir : /storage/emulated/0/Android/data/com.samsung.android.app.camera.sticker.facear.preload
07-04 00:01:32.044 25661 25689 I AppClearCacheImpl: parent dir : /storage/emulated/0/Android/data/com.samsung.android.app.camera.sticker.facear.preload/files
07-04 00:01:32.433 25661 25689 I AppClearCacheImpl: parent dir : /storage/emulated/0/Android/data/com.larksuite.suite/files/camera
07-04 00:01:32.908 25661 25697 I AppClearCacheImpl:  Observer onGetStatsCompleted : com.sec.factory.camera 16384
07-04 00:01:32.908 25661 25697 I AppClearCacheImpl: System Cache Scan : pStats.cacheSize > 12288  com.sec.factory.camera 16384
07-04 00:01:33.226 25661 25697 I AppClearCacheImpl:  Observer onGetStatsCompleted : com.samsung.android.app.camera.sticker.facear.preload 16384
07-04 00:01:33.226 25661 25697 I AppClearCacheImpl: System Cache Scan : pStats.cacheSize > 12288  com.samsung.android.app.camera.sticker.facear.preload 16384
07-04 00:01:33.508 25661 25689 I AppClearCacheImpl: Delete Unnecessory : /storage/emulated/0/Android/data/com.samsung.android.app.camera.sticker.stamp.preload/files
07-04 00:01:33.595 25661 25689 I AppClearCacheImpl: Delete Unnecessory : /storage/emulated/0/Android/data/com.samsung.android.app.camera.sticker.facear.preload/files
07-04 00:01:33.602 25661 25689 I AppClearCacheImpl: Delete Unnecessory : /storage/emulated/0/Android/data/com.larksuite.suite/files/camera
07-04 00:01:34.464 25661 25698 I AppClearCacheImpl:  Observer onGetStatsCompleted : com.samsung.android.app.camera.sticker.stamp.preload 16384
07-04 00:01:34.464 25661 25698 I AppClearCacheImpl: System Cache Scan : pStats.cacheSize > 12288  com.samsung.android.app.camera.sticker.stamp.preload 16384
07-04 00:01:34.564 25661 25697 I AppClearCacheImpl:  Observer onGetStatsCompleted : com.sec.android.app.camera 36864
07-04 00:01:34.564 25661 25697 I AppClearCacheImpl: System Cache Scan : pStats.cacheSize > 12288  com.sec.android.app.camera 36864
07-04 00:01:34.709 25661 25697 I AppClearCacheImpl: deleteSystemCache : com.sec.factory.camera
07-04 00:01:34.709 25661 25697 I AppClearCacheImpl: deleteSystemCache deleting: com.sec.factory.camera
07-04 00:01:34.710  3294  5511 D PackageManager: pkg{com.sec.factory.camera}
07-04 00:01:34.769 25661 25697 I AppClearCacheImpl: deleteSystemCache : com.samsung.android.app.camera.sticker.facear.preload
07-04 00:01:34.769 25661 25697 I AppClearCacheImpl: deleteSystemCache deleting: com.samsung.android.app.camera.sticker.facear.preload
07-04 00:01:34.770  3294  5511 D PackageManager: pkg{com.samsung.android.app.camera.sticker.facear.preload}
07-04 00:01:35.285 25661 25697 I AppClearCacheImpl: deleteSystemCache : com.samsung.android.app.camera.sticker.stamp.preload
07-04 00:01:35.285 25661 25697 I AppClearCacheImpl: deleteSystemCache deleting: com.samsung.android.app.camera.sticker.stamp.preload
07-04 00:01:35.287  3294  3479 D PackageManager: pkg{com.samsung.android.app.camera.sticker.stamp.preload}
07-04 00:01:35.358 25661 25697 I AppClearCacheImpl: deleteSystemCache : com.sec.android.app.camera
07-04 00:01:35.358 25661 25697 I AppClearCacheImpl: deleteSystemCache deleting: com.sec.android.app.camera
07-04 00:01:35.359  3294  5511 D PackageManager: pkg{com.sec.android.app.camera}
07-04 00:01:38.502 25661 25680 I AppClearCacheImpl: onRemoveCompleted : com.sec.factory.camera true
07-04 00:01:40.233 25661 25680 I AppClearCacheImpl: onRemoveCompleted : com.samsung.android.app.camera.sticker.facear.preload true
07-04 00:01:42.648 25661 25680 I AppClearCacheImpl: onRemoveCompleted : com.samsung.android.app.camera.sticker.stamp.preload true
07-04 00:01:44.008 25661 25680 I AppClearCacheImpl: onRemoveCompleted : com.sec.android.app.camera true
07-04 00:03:56.244  3294  3657 I ApplicationPolicy: isApplicationExternalStorageWhitelisted:com.sec.android.app.camera user:0
07-04 00:03:56.244  3294  3657 D ActivityManager: package  com.sec.android.app.camera, user - 0 is SDcard whitelisted
07-04 00:03:56.244  3294  3657 I ApplicationPolicy: isApplicationExternalStorageBlacklisted:com.sec.android.app.camera user:0
07-04 00:03:56.244  3294  3657 I ApplicationPolicy: isApplicationExternalStorageBlacklisted:com.sec.android.app.camera user:0
07-04 00:03:56.262  3294  3345 I ActivityManager: Start proc 25774:com.sec.android.app.camera/u0a103 for activelaunch {com.sec.android.app.camera/com.sec.android.app.camera.Camera}
07-04 00:03:56.292  3294  3479 I ActivityManager: DSS OFF for com.sec.android.app.camera
07-04 00:03:56.314  3294  4839 I ActivityTaskManager: START u0 {act=android.intent.action.MAIN cat=[android.intent.category.LAUNCHER] flg=0x10200000 cmp=com.sec.android.app.camera/.Camera bnds=[427,1225][558,1384]} from uid 10131
07-04 00:03:56.350  2877  3073 I SurfaceFlinger: createSurf start. lock debugging [AppWindowToken{4676521 token=Token{5f0d788 ActivityRecord{b9e872b u0 com.sec.android.app.camera/.Camera t1129}}}]
07-04 00:03:56.351  2877  3073 I SurfaceFlinger: id=454 createSurf (0x0),-1 flag=80004, AppWindowToken{4676521 token=Token{5f0d788 ActivityRecord{b9e872b u0 com.sec.android.app.camera/.Camera t1129}}}#0
07-04 00:03:56.372  3294  5203 D GamePkgDataHelper: notifyAppCreate(), pkgName: com.sec.android.app.camera, sendRet: true
07-04 00:03:56.372  3294  3654 D GameManagerService: onLooperPrepared(), msg: { when=0 what=10010 obj=com.sec.android.app.camera target=com.samsung.android.game.GameManagerService$FgCheckThread$1 }
07-04 00:03:56.372  3294  3654 D GameManagerService: handleMessage(), received MSG_APP_CREATE of pkgName: com.sec.android.app.camera
07-04 00:03:56.377  3294  5203 D MARsPolicyManager: onPackageResumedFG pkgName = com.sec.android.app.camera, userId = 0
07-04 00:03:56.384  3294  3338 D GameSDKService: MultiWindowEventListener.onFocusStackChanged(), state=0, top=ComponentInfo{com.sec.android.app.camera/com.sec.android.app.camera.Camera}
07-04 00:03:56.391  3294  3338 D GameSDKService: MultiWindowEventListener.onFocusStackChanged(): com.sec.android.app.camera
07-04 00:03:56.392  3294  3338 D GameManagerService: MultiWindowEventListener.onFocusedStackChanged(), state=0, bounds=[0,0][720,1480], displayId=0, userId=0, taskName=com.sec.android.app.camera/com.sec.android.app.camera.Camera
07-04 00:03:56.392  3294  3338 D GameManagerService: MultiWindowEventListener.onFocusedStackChanged(), pkgName: com.sec.android.app.camera, clsName: com.sec.android.app.camera.Camera, fgActivityName:com.sec.android.app.camera/.Camera, userID:0
07-04 00:03:56.392  3294  3654 D GameManagerService: onLooperPrepared(), msg: { when=0 what=10000 obj=ComponentInfo{com.sec.android.app.camera/com.sec.android.app.camera.Camera} target=com.samsung.android.game.GameManagerService$FgCheckThread$1 }
07-04 00:03:56.392  3294  3654 D GameManagerService: notifyResumePause(). of pkg: com.sec.android.app.camera, type: 4, isMinimized: false, isTunableApp: false
07-04 00:03:56.397  3294  3339 D PhoneWindow: forceLight changed to true [Splash Screen com.sec.android.app.camera] from com.android.internal.policy.PhoneWindow.updateForceLightNavigationBar:4238 com.android.internal.policy.DecorView.updateColorViews:1510 com.android.internal.policy.PhoneWindow.dispatchWindowAttributesChanged:3216 android.view.Window.setFlags:1148 com.android.internal.policy.PhoneWindow.generateLayout:2444
07-04 00:03:56.398  3294  3339 D PhoneWindow: forceLight changed to false [Splash Screen com.sec.android.app.camera] from com.android.internal.policy.PhoneWindow.updateForceLightNavigationBar:4244 com.android.internal.policy.DecorView.updateColorViews:1510 com.android.internal.policy.PhoneWindow.dispatchWindowAttributesChanged:3216 android.view.Window.setFlags:1148 com.android.internal.policy.PhoneWindow.generateLayout:2590
07-04 00:03:56.403  3294  3336 D CodecSolution: isMaxAspectPackageEx: com.sec.android.app.camera : true(2)
07-04 00:03:56.411  3294  5203 D GamePkgDataHelper: getSosPolicy(). com.sec.android.app.camera
07-04 00:03:56.411  3294  3338 D GameManagerService: noteResumeComponent(), received resumed-component: com.sec.android.app.camera
07-04 00:03:56.412  3294  3338 D GamePkgDataHelper: getSosPolicy(). com.sec.android.app.camera
07-04 00:03:56.413  3294  3338 D GameManagerService: identifyGamePackage. com.sec.android.app.camera, mCurrentUserId: 0, callerUserId: 0
07-04 00:03:56.413  3294  3338 D GamePkgDataHelper: getGamePkgData(). com.sec.android.app.camera
07-04 00:03:56.414  3294  3654 D GameManagerService: onLooperPrepared(), msg: { when=-3ms what=10000 obj=ComponentInfo{com.sec.android.app.camera/com.sec.android.app.camera.Camera} target=com.samsung.android.game.GameManagerService$FgCheckThread$1 }
07-04 00:03:56.415  3294  3654 D GameManagerService: notifyResumePause(). of pkg: com.sec.android.app.camera, type: 4, isMinimized: false, isTunableApp: false
07-04 00:03:56.416  2877  3073 I SurfaceFlinger: createSurf start. lock debugging [d91f982 Splash Screen com.sec.android.app.camera]
07-04 00:03:56.416  2877  3073 I SurfaceFlinger: id=455 createSurf (0x0),-1 flag=80004, d91f982 Splash Screen com.sec.android.app.camera#0
07-04 00:03:56.418  3294  3339 D ViewRootImpl@dfec264[camera]: setView = com.android.internal.policy.DecorView@6ef08c9 TM=true MM=false
07-04 00:03:56.423 14257 14484 I SAMSUNGPAY: [Hint_hz5] isHomePackageRunning topPkgName = com.sec.android.app.camera, topClsName = com.sec.android.app.camera.Camera, return false , se : false
07-04 00:03:56.423  3294  3339 V WindowManager: Relayout Window{d91f982 u0 Splash Screen com.sec.android.app.camera}: viewVisibility=0 req=720x1480
07-04 00:03:56.427  2877  3073 I SurfaceFlinger: createSurf start. lock debugging [Splash Screen com.sec.android.app.camera]
07-04 00:03:56.428  2877  3073 I SurfaceFlinger: id=456 createSurf (720x1480),1 flag=404, Splash Screen com.sec.android.app.camera#0


E:\ADB\platform-tools>adb  tcpip 5555
restarting in TCP mode port: 5555

E:\ADB\platform-tools>adb connect 192.168.1.39
connected to 192.168.1.39:5555

E:\ADB\platform-tools>adb  devices
List of devices attached
192.168.1.39:5555       device


E:\ADB\platform-tools>adb shell  pm list features
feature:reqGlEsVersion=0x30002
feature:android.hardware.audio.output
feature:android.hardware.bluetooth
feature:android.hardware.bluetooth_le
feature:android.hardware.camera
feature:android.hardware.camera.any
feature:android.hardware.camera.autofocus
feature:android.hardware.camera.flash
feature:android.hardware.camera.front
feature:android.hardware.faketouch
feature:android.hardware.fingerprint
feature:android.hardware.location
feature:android.hardware.location.gps
feature:android.hardware.location.network
feature:android.hardware.microphone
feature:android.hardware.opengles.aep
feature:android.hardware.ram.normal
feature:android.hardware.screen.landscape
feature:android.hardware.screen.portrait
feature:android.hardware.sensor.accelerometer
feature:android.hardware.sensor.proximity
feature:android.hardware.telephony
feature:android.hardware.telephony.gsm
feature:android.hardware.telephony.ims
feature:android.hardware.touchscreen
feature:android.hardware.touchscreen.multitouch
feature:android.hardware.touchscreen.multitouch.distinct
feature:android.hardware.touchscreen.multitouch.jazzhand
feature:android.hardware.usb.accessory
feature:android.hardware.usb.host
feature:android.hardware.vulkan.compute
feature:android.hardware.vulkan.level=1
feature:android.hardware.vulkan.version=4194307
feature:android.hardware.wifi
feature:android.hardware.wifi.direct
feature:android.software.activities_on_secondary_displays
feature:android.software.app_widgets
feature:android.software.autofill
feature:android.software.backup
feature:android.software.cant_save_state
feature:android.software.companion_device_setup
feature:android.software.connectionservice
feature:android.software.cts
feature:android.software.device_admin
feature:android.software.freeform_window_management
feature:android.software.home_screen
feature:android.software.input_methods
feature:android.software.ipsec_tunnels
feature:android.software.live_wallpaper
feature:android.software.managed_users
feature:android.software.midi
feature:android.software.picture_in_picture
feature:android.software.print
feature:android.software.secure_lock_screen
feature:android.software.sip
feature:android.software.sip.voip
feature:android.software.verified_boot
feature:android.software.voice_recognizers
feature:android.software.webview
feature:com.google.android.feature.TURBO_PRELOAD
feature:com.samsung.android.api.version.2402
feature:com.samsung.android.api.version.2403
feature:com.samsung.android.api.version.2501
feature:com.samsung.android.api.version.2502
feature:com.samsung.android.api.version.2601
feature:com.samsung.android.api.version.2701
feature:com.samsung.android.api.version.2801
feature:com.samsung.android.api.version.2802
feature:com.samsung.android.api.version.2803
feature:com.samsung.android.api.version.2901
feature:com.samsung.android.authfw
feature:com.samsung.android.bio.face
feature:com.samsung.android.knox.knoxsdk
feature:com.samsung.android.sdk.camera.processor
feature:com.samsung.android.sdk.camera.processor.effect
feature:com.samsung.feature.SAMSUNG_EXPERIENCE
feature:com.samsung.feature.clockpack_v07
feature:com.samsung.feature.device_category_phone
feature:com.samsung.feature.galaxyfinder_v7
feature:com.samsung.feature.ipsgeofence=1
feature:com.samsung.feature.samsung_experience_mobile
feature:com.samsung.feature.samsungpositioning
feature:com.samsung.feature.samsungpositioning.snlp
feature:com.sec.android.mdm
feature:com.sec.android.secimaging
feature:com.sec.android.secimaging.faceAR
feature:com.sec.feature.cover
feature:com.sec.feature.cover.flip
feature:com.sec.feature.fingerprint_manager_service
feature:com.sec.feature.motionrecognition_service
feature:com.sec.feature.nsflp=500
feature:com.sec.feature.overlaymagnifier
feature:com.sec.feature.saccessorymanager
feature:com.sec.feature.slocation=3

E:\ADB\platform-tools>adb shell dumpsys battery
Current Battery Service state:
  AC powered: false
  USB powered: true
  Wireless powered: false
  Max charging current: 0
  Max charging voltage: 0
  Charge counter: 2532000
  status: 2
  health: 2
  present: true
  level: 84
  scale: 100
  voltage: 4110
  temperature: 336
  technology: Li-ion
  batteryMiscEvent: 0
  batteryCurrentEvent: 0
  mSecPlugTypeSummary: 2
  LED Charging: true
  LED Low Battery: true
  current now: 347
  charge counter: 2532000
  Adaptive Fast Charging Settings: true
USE_FAKE_BATTERY: false
FEATURE_WIRELESS_FAST_CHARGER_CONTROL: true
  mWasUsedWirelessFastChargerPreviously: false
  mWirelessFastChargingSettingsEnable: true
LLB CAL: 20180609
LLB MAN:
LLB CURRENT: YEAR2022M7D6
LLB DIFF: 211
FEATURE_HICCUP_CONTROL: false
FEATURE_SUPPORTED_DAILY_BOARD: false
SEC_FEATURE_USE_WIRELESS_POWER_SHARING: false
BatteryInfoBackUp
  mSavedBatteryAsoc: -1
  mSavedBatteryMaxTemp: 782
  mSavedBatteryMaxCurrent: 1160
  mSavedBatteryUsage: 103016
  FEATURE_SAVE_BATTERY_CYCLE: true
  SEC_FEATURE_PREVENT_SWELLING: false



E:\ADB\platform-tools>adb  shell netstat
Active Internet connections (w/o servers)
Proto Recv-Q Send-Q Local Address           Foreign Address         State
tcp        0      0 10.15.181.99:53745      122.10.224.226:https    ESTABLISHED
tcp        0      0 10.15.181.99:51390      99.215.102.34.bc.:https ESTABLISHED
tcp        0      0 10.15.181.99:60537      49.44.118.100:https     ESTABLISHED
tcp        0      0 10.15.181.99:42455      91.108.56.137:https     ESTABLISHED
tcp6       0      0 2409:4070:2494:b2:45452 2405:200:1630:48f:https CLOSE_WAIT
tcp6     130      0 2409:4070:2494:b2:60522 2404:6800:4009:80:https CLOSE_WAIT
tcp6       0      0 2409:4070:2494:b2:36147 2a03:2880:f137:80:https ESTABLISHED
tcp6       0      0 ::ffff:10.15.181.:49103 ::ffff:122.10.224:https ESTABLISHED
tcp6       0      0 2409:4070:2494:b2:44104 2a03:2880:f237:c7:https ESTABLISHED
tcp6       0      0 ::ffff:10.15.181.:37163 ::ffff:220.243.19:https ESTABLISHED
tcp6       0      0 2409:4070:2494:b2:47634 sf-in-f188.1e100.n:5228 ESTABLISHED
tcp6     130      0 2409:4070:2494:b2:43249 2404:6800:4007:81:https CLOSE_WAIT
tcp6       0      0 2409:4070:2494:b2:38507 2404:6800:4007:82:https CLOSE_WAIT
udp     2816      0 192.168.1.39:bootpc     192.168.1.1:bootps      ESTABLISHED
Active UNIX domain sockets (w/o servers)
Proto RefCnt Flags       Type       State           I-Node Path
unix  2      [ ]         DGRAM                       18875 /data/vendor/wifi/wpa/sockets/wlan0
unix  2      [ ]         DGRAM                     2455407 /dev/socket/mtp/mtp_event_socket
unix  2      [ ]         DGRAM                     2458486 /dev/socket/mtp/mtp_sink_socket
unix  2      [ ]         DGRAM                     2458488 /dev/socket/mtp/mtp_source_socket
unix  2      [ ]         STREAM                      12151 /dev/socket/sap_uim_socket1
unix  157    [ ]         DGRAM                        1146 /dev/socket/logdw
unix  2      [ ]         DGRAM                       14016 /dev/socket/wpa_wlan0
unix  22     [ ]         DGRAM                        9923 /dev/socket/statsdw
unix  2      [ ]         DGRAM                       11881
unix  3      [ ]         SEQPACKET  CONNECTED      2483132
unix  3      [ ]         SEQPACKET  CONNECTED      2073549
unix  2      [ ]         DGRAM                     2497337
unix  2      [ ]         DGRAM                     2487579
unix  2      [ ]         DGRAM                     2484518
unix  3      [ ]         SEQPACKET  CONNECTED      2056110
unix  3      [ ]         SEQPACKET  CONNECTED        19417
unix  3      [ ]         SEQPACKET  CONNECTED         8860
unix  3      [ ]         STREAM     CONNECTED      1972153
unix  3      [ ]         STREAM     CONNECTED      2486102
unix  2      [ ]         DGRAM                     2486395
unix  3      [ ]         SEQPACKET  CONNECTED      1113677
unix  3      [ ]         SEQPACKET  CONNECTED      2471640
unix  3      [ ]         SEQPACKET  CONNECTED        22021
unix  2      [ ]         DGRAM                       25677
unix  3      [ ]         SEQPACKET  CONNECTED      2482689
unix  2      [ ]         DGRAM                     2486925
unix  2      [ ]         DGRAM                       13330
unix  3      [ ]         SEQPACKET  CONNECTED       409152
unix  3      [ ]         SEQPACKET  CONNECTED      1824991
unix  3      [ ]         SEQPACKET  CONNECTED       182587
unix  2      [ ]         DGRAM                       24975
unix  2      [ ]         DGRAM                        1833
unix  2      [ ]         DGRAM                       13774
unix  2      [ ]         DGRAM                       11074
unix  2      [ ]         DGRAM                        2419
unix  2      [ ]         DGRAM                     2198207
unix  3      [ ]         STREAM     CONNECTED      1824148
unix  2      [ ]         DGRAM                       26209
unix  3      [ ]         STREAM     CONNECTED      2257068
unix  3      [ ]         SEQPACKET  CONNECTED      2488123
unix  3      [ ]         SEQPACKET  CONNECTED       741901
unix  2      [ ]         DGRAM                      113567
unix  3      [ ]         SEQPACKET  CONNECTED        40247
unix  2      [ ]         DGRAM                     2487020
unix  2      [ ]         DGRAM                       10818
unix  3      [ ]         SEQPACKET  CONNECTED        54307
unix  3      [ ]         STREAM     CONNECTED      2476551
unix  3      [ ]         STREAM     CONNECTED       763596
unix  3      [ ]         SEQPACKET  CONNECTED        43013
unix  3      [ ]         STREAM     CONNECTED        23334
unix  3      [ ]         STREAM     CONNECTED      1594854
unix  2      [ ]         DGRAM                        1293
unix  3      [ ]         STREAM     CONNECTED       792761
unix  3      [ ]         STREAM     CONNECTED      2510072
unix  3      [ ]         STREAM     CONNECTED      2056000
unix  3      [ ]         SEQPACKET  CONNECTED      2056786
unix  3      [ ]         SEQPACKET  CONNECTED        26807
unix  3      [ ]         SEQPACKET  CONNECTED        15831
unix  3      [ ]         STREAM     CONNECTED         3821
unix  3      [ ]         SEQPACKET  CONNECTED      2495571
unix  2      [ ]         STREAM     CONNECTED      1797760 @PACMSERVICE
unix  3      [ ]         SEQPACKET  CONNECTED        18847
unix  3      [ ]         SEQPACKET  CONNECTED      2488354
unix  3      [ ]         STREAM     CONNECTED       742508
unix  3      [ ]         SEQPACKET  CONNECTED         3832
unix  3      [ ]         SEQPACKET  CONNECTED      2487464
unix  3      [ ]         STREAM     CONNECTED      2476547
unix  3      [ ]         SEQPACKET  CONNECTED      1114647
unix  3      [ ]         SEQPACKET  CONNECTED      2259067
unix  3      [ ]         STREAM     CONNECTED      1129682
unix  3      [ ]         STREAM     CONNECTED       792760
unix  3      [ ]         SEQPACKET  CONNECTED      1345927
unix  3      [ ]         SEQPACKET  CONNECTED        44056
unix  3      [ ]         SEQPACKET  CONNECTED        27736
unix  3      [ ]         STREAM     CONNECTED       589023
unix  3      [ ]         SEQPACKET  CONNECTED      2487465
unix  3      [ ]         SEQPACKET  CONNECTED        19420
unix  2      [ ]         DGRAM                       12769
unix  3      [ ]         SEQPACKET  CONNECTED       130204
unix  3      [ ]         STREAM     CONNECTED        50784
unix  3      [ ]         SEQPACKET  CONNECTED        34609
unix  3      [ ]         SEQPACKET  CONNECTED        28926
unix  3      [ ]         SEQPACKET  CONNECTED        20427
unix  3      [ ]         SEQPACKET  CONNECTED      2259065
unix  3      [ ]         SEQPACKET  CONNECTED        10913
unix  3      [ ]         SEQPACKET  CONNECTED      2483858
unix  2      [ ]         DGRAM                     1113701
unix  3      [ ]         SEQPACKET  CONNECTED        19422
unix  3      [ ]         SEQPACKET  CONNECTED        18634
unix  3      [ ]         SEQPACKET  CONNECTED      2351139
unix  2      [ ]         DGRAM                       80595
unix  2      [ ]         DGRAM                     2485565
unix  3      [ ]         STREAM     CONNECTED      2255287
unix  2      [ ]         DGRAM                       43202
unix  3      [ ]         SEQPACKET  CONNECTED        41441
unix  3      [ ]         SEQPACKET  CONNECTED      2300145
unix  3      [ ]         STREAM     CONNECTED        47614
unix  3      [ ]         STREAM     CONNECTED        14382 @Multiclient
unix  2      [ ]         DGRAM                       58805
unix  3      [ ]         SEQPACKET  CONNECTED      1114646
unix  3      [ ]         SEQPACKET  CONNECTED       400008
unix  3      [ ]         SEQPACKET  CONNECTED        24101
unix  3      [ ]         STREAM     CONNECTED        18506
unix  2      [ ]         DGRAM                        3679
unix  2      [ ]         DGRAM                     1971064
unix  3      [ ]         STREAM     CONNECTED        13300
unix  3      [ ]         SEQPACKET  CONNECTED        43012
unix  3      [ ]         SEQPACKET  CONNECTED        32981
unix  3      [ ]         STREAM     CONNECTED        23338 @VND_Multiclient2
unix  2      [ ]         DGRAM                       13788
unix  2      [ ]         DGRAM                     2459648
unix  3      [ ]         SEQPACKET  CONNECTED      1124915
unix  2      [ ]         DGRAM                        3009
unix  3      [ ]         STREAM     CONNECTED        32899 @GN
unix  3      [ ]         SEQPACKET  CONNECTED        25810
unix  2      [ ]         DGRAM                     2480195
unix  3      [ ]         STREAM     CONNECTED      2178035
unix  3      [ ]         STREAM     CONNECTED       742507
unix  3      [ ]         SEQPACKET  CONNECTED       422422
unix  2      [ ]         DGRAM                       32771
unix  2      [ ]         DGRAM                        3648
unix  3      [ ]         SEQPACKET  CONNECTED      2491960
unix  3      [ ]         SEQPACKET  CONNECTED         3838
unix  2      [ ]         DGRAM                       10424
unix  2      [ ]         DGRAM                       10173
unix  3      [ ]         SEQPACKET  CONNECTED       130201
unix  3      [ ]         STREAM     CONNECTED        28516
unix  3      [ ]         SEQPACKET  CONNECTED      2461196
unix  3      [ ]         SEQPACKET  CONNECTED      2351138
unix  2      [ ]         DGRAM                       11878
unix  3      [ ]         STREAM     CONNECTED      2495564
unix  2      [ ]         DGRAM                       12670
unix  3      [ ]         STREAM     CONNECTED      2488020
unix  3      [ ]         STREAM     CONNECTED      2510073
unix  2      [ ]         DGRAM                     2073542
unix  3      [ ]         SEQPACKET  CONNECTED       267394
unix  2      [ ]         DGRAM                        1796
unix  3      [ ]         SEQPACKET  CONNECTED      2488353
unix  3      [ ]         SEQPACKET  CONNECTED       742517
unix  3      [ ]         STREAM     CONNECTED      2042525
unix  3      [ ]         SEQPACKET  CONNECTED        40654
unix  2      [ ]         DGRAM                        3505
unix  2      [ ]         DGRAM                     2498531
unix  2      [ ]         DGRAM                     2471669
unix  3      [ ]         SEQPACKET  CONNECTED        18579
unix  2      [ ]         DGRAM                        1838
unix  3      [ ]         SEQPACKET  CONNECTED      2488352
unix  2      [ ]         DGRAM                     2487766
unix  3      [ ]         STREAM     CONNECTED        43417 /dev/socket/eris
unix  2      [ ]         DGRAM                       43107
unix  3      [ ]         SEQPACKET  CONNECTED        19418
unix  2      [ ]         DGRAM                       15156
unix  3      [ ]         STREAM     CONNECTED       739595
unix  3      [ ]         STREAM     CONNECTED        15531
unix  2      [ ]         DGRAM                       45572
unix  3      [ ]         SEQPACKET  CONNECTED       409990
unix  3      [ ]         SEQPACKET  CONNECTED      2453243
unix  3      [ ]         STREAM     CONNECTED       741865
unix  3      [ ]         STREAM     CONNECTED        29276 @VND_Multiclient
unix  2      [ ]         DGRAM                     2486094
unix  3      [ ]         SEQPACKET  CONNECTED        44057
unix  2      [ ]         DGRAM                       17549
unix  2      [ ]         DGRAM                     2484540
unix  2      [ ]         DGRAM                       19386
unix  2      [ ]         DGRAM                     2457518
unix  3      [ ]         STREAM     CONNECTED        12947 @Multiclient
unix  2      [ ]         DGRAM                       12908
unix  3      [ ]         STREAM     CONNECTED       765676
unix  3      [ ]         SEQPACKET  CONNECTED      2483134
unix  2      [ ]         DGRAM                     2481565
unix  3      [ ]         SEQPACKET  CONNECTED      2073548
unix  3      [ ]         SEQPACKET  CONNECTED      2471633
unix  3      [ ]         SEQPACKET  CONNECTED      2460187
unix  3      [ ]         SEQPACKET  CONNECTED       741900
unix  3      [ ]         STREAM     CONNECTED      2259999
unix  3      [ ]         STREAM     CONNECTED        15885
unix  3      [ ]         SEQPACKET  CONNECTED      2482683
unix  3      [ ]         SEQPACKET  CONNECTED       184417
unix  3      [ ]         SEQPACKET  CONNECTED        25982
unix  3      [ ]         STREAM     CONNECTED        18620 /data/.socket_stream
unix  3      [ ]         STREAM     CONNECTED      2476548
unix  3      [ ]         STREAM     CONNECTED      1972152
unix  2      [ ]         DGRAM                       12397
unix  3      [ ]         STREAM     CONNECTED      2488019
unix  3      [ ]         STREAM     CONNECTED      2042522
unix  3      [ ]         SEQPACKET  CONNECTED      2486995
unix  2      [ ]         DGRAM                       11597
unix  3      [ ]         SEQPACKET  CONNECTED      2259064
unix  3      [ ]         SEQPACKET  CONNECTED        18846
unix  2      [ ]         DGRAM                         748
unix  3      [ ]         STREAM     CONNECTED      2257069
unix  3      [ ]         SEQPACKET  CONNECTED        27738
unix  2      [ ]         DGRAM                       25163
unix  3      [ ]         SEQPACKET  CONNECTED        54306
unix  2      [ ]         DGRAM                       10618
unix  3      [ ]         SEQPACKET  CONNECTED        25807
unix  3      [ ]         STREAM     CONNECTED      1972156
unix  2      [ ]         DGRAM                       90752
unix  2      [ ]         DGRAM                        9413
unix  3      [ ]         SEQPACKET  CONNECTED         8859
unix  3      [ ]         STREAM     CONNECTED      2255286
unix  2      [ ]         DGRAM                      642130
unix  3      [ ]         SEQPACKET  CONNECTED        26808
unix  2      [ ]         DGRAM                        1383
unix  2      [ ]         DGRAM                     2489716
unix  3      [ ]         SEQPACKET  CONNECTED      1124914
unix  3      [ ]         STREAM     CONNECTED        47609 @Multiclient
unix  3      [ ]         SEQPACKET  CONNECTED        24102
unix  2      [ ]         DGRAM                        3677
unix  3      [ ]         SEQPACKET  CONNECTED      1133696
unix  2      [ ]         DGRAM                     2460284
unix  3      [ ]         SEQPACKET  CONNECTED       741868
unix  3      [ ]         STREAM     CONNECTED      2260000
unix  3      [ ]         STREAM     CONNECTED      1129421
unix  3      [ ]         SEQPACKET  CONNECTED       409998
unix  2      [ ]         DGRAM                       32980
unix  2      [ ]         DGRAM                     2494365
unix  3      [ ]         SEQPACKET  CONNECTED       267395
unix  2      [ ]         DGRAM                       14295
unix  3      [ ]         SEQPACKET  CONNECTED       117783
unix  3      [ ]         SEQPACKET  CONNECTED        41438
unix  2      [ ]         DGRAM                       12657
unix  3      [ ]         SEQPACKET  CONNECTED      2471654
unix  3      [ ]         SEQPACKET  CONNECTED        28925
unix  3      [ ]         SEQPACKET  CONNECTED        20430
unix  2      [ ]         DGRAM                       10387
unix  3      [ ]         SEQPACKET  CONNECTED      2490495
unix  3      [ ]         STREAM     CONNECTED      1133582
unix  3      [ ]         STREAM     CONNECTED        23800 @com.android.internal.os.WebViewZygoteInit/8b21febf-9ce7-420a-a03f-86aca1ac10b7
unix  3      [ ]         SEQPACKET  CONNECTED        27727
unix  2      [ ]         DGRAM                      182961
unix  2      [ ]         DGRAM                       24799
unix  3      [ ]         SEQPACKET  CONNECTED      2483133
unix  3      [ ]         SEQPACKET  CONNECTED       267393
unix  3      [ ]         STREAM     CONNECTED        47613
unix  3      [ ]         STREAM     CONNECTED        10240 /data/.socket_stream
unix  2      [ ]         DGRAM                        1482
unix  3      [ ]         STREAM     CONNECTED       763595
unix  2      [ ]         DGRAM                       40213
unix  3      [ ]         STREAM     CONNECTED        27438
unix  2      [ ]         DGRAM                        9201
unix  3      [ ]         STREAM     CONNECTED      2488418
unix  3      [ ]         SEQPACKET  CONNECTED      1824992
unix  3      [ ]         SEQPACKET  CONNECTED        18635
unix  2      [ ]         DGRAM                       11816
unix  2      [ ]         DGRAM                     2332693
unix  2      [ ]         DGRAM                       35352
unix  3      [ ]         SEQPACKET  CONNECTED      2488324
unix  3      [ ]         SEQPACKET  CONNECTED        20428
unix  2      [ ]         DGRAM                       10421
unix  3      [ ]         STREAM     CONNECTED      2496539
unix  2      [ ]         DGRAM                     2471456
unix  3      [ ]         STREAM     CONNECTED       589022
unix  3      [ ]         STREAM     CONNECTED      2476550
unix  3      [ ]         SEQPACKET  CONNECTED        27737
unix  2      [ ]         DGRAM                        3657
unix  2      [ ]         DGRAM                     2484124
unix  3      [ ]         SEQPACKET  CONNECTED       267396
unix  3      [ ]         STREAM     CONNECTED        14462
unix  2      [ ]         DGRAM                       12768
unix  3      [ ]         SEQPACKET  CONNECTED        42385
unix  3      [ ]         SEQPACKET  CONNECTED        18848
unix  2      [ ]         DGRAM                       10124
unix  3      [ ]         STREAM     CONNECTED      1839175
unix  2      [ ]         DGRAM                     1571583
unix  3      [ ]         SEQPACKET  CONNECTED       125926
unix  3      [ ]         SEQPACKET  CONNECTED        10914
unix  2      [ ]         DGRAM                        1217
unix  3      [ ]         STREAM     CONNECTED      1133583
unix  3      [ ]         SEQPACKET  CONNECTED       117784
unix  3      [ ]         SEQPACKET  CONNECTED        40650
unix  3      [ ]         STREAM     CONNECTED        23336
unix  3      [ ]         SEQPACKET  CONNECTED        15828
unix  3      [ ]         SEQPACKET  CONNECTED      2471913
unix  3      [ ]         STREAM     CONNECTED      2178038
unix  3      [ ]         SEQPACKET  CONNECTED       742510
unix  2      [ ]         DGRAM                        3503
unix  2      [ ]         DGRAM                     2486374
unix  3      [ ]         STREAM     CONNECTED        48291
unix  3      [ ]         SEQPACKET  CONNECTED        19419
unix  2      [ ]         DGRAM                       13373
unix  3      [ ]         STREAM     CONNECTED      2496571
unix  3      [ ]         SEQPACKET  CONNECTED      1133697
unix  3      [ ]         SEQPACKET  CONNECTED        40649
unix  3      [ ]         SEQPACKET  CONNECTED        25981
unix  3      [ ]         STREAM     CONNECTED      1594853
unix  3      [ ]         SEQPACKET  CONNECTED       741870
unix  3      [ ]         SEQPACKET  CONNECTED       409991
unix  3      [ ]         SEQPACKET  CONNECTED        15829
unix  2      [ ]         DGRAM                        3807
unix  2      [ ]         DGRAM                        1267
unix  2      [ ]         DGRAM                       10574
unix  2      [ ]         DGRAM                       13362
unix  2      [ ]         DGRAM                       11503
unix  3      [ ]         STREAM     CONNECTED      2496574
unix  2      [ ]         DGRAM                      742505
unix  3      [ ]         SEQPACKET  CONNECTED        43014
unix  2      [ ]         DGRAM                      764457
unix  2      [ ]         DGRAM                     2458845
unix  3      [ ]         STREAM     CONNECTED      2510074
unix  3      [ ]         SEQPACKET  CONNECTED      2482719
unix  3      [ ]         SEQPACKET  CONNECTED        27728
unix  3      [ ]         SEQPACKET  CONNECTED        31124
unix  2      [ ]         DGRAM                       10217
unix  3      [ ]         SEQPACKET  CONNECTED      2471634
unix  3      [ ]         STREAM     CONNECTED        13910 @SatsService
unix  3      [ ]         STREAM     CONNECTED      2509290
unix  2      [ ]         DGRAM                     2280358
unix  3      [ ]         SEQPACKET  CONNECTED       409153
unix  3      [ ]         SEQPACKET  CONNECTED       184418
unix  3      [ ]         STREAM     CONNECTED        22611
unix  2      [ ]         DGRAM                        3519
unix  2      [ ]         DGRAM                        9682
unix  3      [ ]         SEQPACKET  CONNECTED       130206
unix  2      [ ]         DGRAM                        9066
unix  3      [ ]         SEQPACKET  CONNECTED      2482688
unix  3      [ ]         STREAM     CONNECTED      2073482
unix  2      [ ]         DGRAM                       17500
unix  3      [ ]         SEQPACKET  CONNECTED      2488351
unix  3      [ ]         SEQPACKET  CONNECTED        20429
unix  3      [ ]         SEQPACKET  CONNECTED      2483859
unix  3      [ ]         STREAM     CONNECTED      1972155
unix  3      [ ]         SEQPACKET  CONNECTED        40248
unix  3      [ ]         STREAM     CONNECTED      2301800
unix  3      [ ]         STREAM     CONNECTED        13004
unix  3      [ ]         STREAM     CONNECTED      2292510
unix  3      [ ]         STREAM     CONNECTED      1129422
unix  3      [ ]         SEQPACKET  CONNECTED        32982
unix  3      [ ]         SEQPACKET  CONNECTED      2488122
unix  3      [ ]         SEQPACKET  CONNECTED      2460188
unix  3      [ ]         SEQPACKET  CONNECTED       130202
unix  3      [ ]         SEQPACKET  CONNECTED        18632
unix  3      [ ]         SEQPACKET  CONNECTED         8858
unix  3      [ ]         SEQPACKET  CONNECTED      2460879
unix  2      [ ]         DGRAM                        1385
unix  3      [ ]         STREAM     CONNECTED      2496538
unix  3      [ ]         SEQPACKET  CONNECTED      2447891
unix  3      [ ]         STREAM     CONNECTED        13867 /data/.socket_stream
unix  2      [ ]         DGRAM                       34031
unix  2      [ ]         DGRAM                        3696
unix  2      [ ]         DGRAM                       12405
unix  3      [ ]         SEQPACKET  CONNECTED      1345928
unix  3      [ ]         SEQPACKET  CONNECTED      1124912
unix  2      [ ]         DGRAM                       11599
unix  2      [ ]         DGRAM                     2432939
unix  3      [ ]         SEQPACKET  CONNECTED      1974288
unix  3      [ ]         SEQPACKET  CONNECTED        41440
unix  3      [ ]         STREAM     CONNECTED        15529
unix  3      [ ]         SEQPACKET  CONNECTED      2056787
unix  3      [ ]         STREAM     CONNECTED      2055999
unix  3      [ ]         SEQPACKET  CONNECTED      1974289 /dev/socket/adbd
unix  2      [ ]         DGRAM                       40338
unix  3      [ ]         SEQPACKET  CONNECTED        15527 /dev/socket/lmkd
unix  3      [ ]         STREAM     CONNECTED      2485218
unix  3      [ ]         STREAM     CONNECTED      2073484
unix  2      [ ]         DGRAM                        1388
unix  2      [ ]         DGRAM                       18090
unix  2      [ ]         DGRAM                       15384
unix  2      [ ]         DGRAM                     2476540
unix  3      [ ]         SEQPACKET  CONNECTED      2461195
unix  3      [ ]         SEQPACKET  CONNECTED      1346915
unix  3      [ ]         SEQPACKET  CONNECTED        25809
unix  2      [ ]         DGRAM                       28470
unix  3      [ ]         SEQPACKET  CONNECTED      2488342
unix  3      [ ]         SEQPACKET  CONNECTED       182588
unix  2      [ ]         DGRAM                       28993
unix  2      [ ]         DGRAM                       22079
unix  2      [ ]         DGRAM                     2485774
unix  3      [ ]         STREAM     CONNECTED        32883
unix  3      [ ]         STREAM     CONNECTED         3824
unix  3      [ ]         STREAM     CONNECTED      2488419
unix  3      [ ]         SEQPACKET  CONNECTED       126796
unix  3      [ ]         STREAM     CONNECTED        14459
unix  3      [ ]         STREAM     CONNECTED      2488028
unix  3      [ ]         STREAM     CONNECTED      2042524
unix  3      [ ]         STREAM     CONNECTED      1593764
unix  2      [ ]         DGRAM                     2501406
unix  3      [ ]         SEQPACKET  CONNECTED      2488323
unix  3      [ ]         SEQPACKET  CONNECTED      2453242
unix  3      [ ]         SEQPACKET  CONNECTED        41439
unix  3      [ ]         STREAM     CONNECTED        27437
unix  3      [ ]         STREAM     CONNECTED        27435
unix  3      [ ]         SEQPACKET  CONNECTED        19421
unix  3      [ ]         SEQPACKET  CONNECTED       126797
unix  3      [ ]         STREAM     CONNECTED      2485219
unix  2      [ ]         DGRAM                       11819
unix  3      [ ]         STREAM     CONNECTED      2292509
unix  2      [ ]         DGRAM                        9819
unix  3      [ ]         SEQPACKET  CONNECTED        40653
unix  3      [ ]         STREAM     CONNECTED        32896 @GN
unix  3      [ ]         STREAM     CONNECTED      2178037
unix  3      [ ]         SEQPACKET  CONNECTED        18636
unix  3      [ ]         STREAM     CONNECTED        52204
unix  3      [ ]         STREAM     CONNECTED        18507
unix  3      [ ]         SEQPACKET  CONNECTED      1346916
unix  2      [ ]         DGRAM                       25774
unix  2      [ ]         DGRAM                        1805
unix  3      [ ]         STREAM     CONNECTED      2042523
unix  3      [ ]         SEQPACKET  CONNECTED        43011
unix  2      [ ]         DGRAM                       22848
unix  3      [ ]         SEQPACKET  CONNECTED       130205
unix  2      [ ]         DGRAM                       47065
unix  2      [ ]         DGRAM                        3502
unix  3      [ ]         SEQPACKET  CONNECTED       125925
unix  2      [ ]         DGRAM                     1687919
unix  3      [ ]         SEQPACKET  CONNECTED        18580
unix  2      [ ]         DGRAM                     2487442
unix  3      [ ]         SEQPACKET  CONNECTED      2259066
unix  3      [ ]         STREAM     CONNECTED      2178036
unix  2      [ ]         DGRAM                     1570552
unix  3      [ ]         SEQPACKET  CONNECTED        18849
unix  2      [ ]         DGRAM                       10157
unix  3      [ ]         STREAM     CONNECTED        14460 /dev/socket/zygote
unix  3      [ ]         STREAM     CONNECTED      1593763
unix  2      [ ]         DGRAM                     2480477
unix  3      [ ]         SEQPACKET  CONNECTED         3811
unix  2      [ ]         DGRAM                     2496537
unix  3      [ ]         SEQPACKET  CONNECTED      1113678
unix  3      [ ]         SEQPACKET  CONNECTED      2483851 /dev/socket/logdr
unix  3      [ ]         STREAM     CONNECTED        20394
unix  2      [ ]         DGRAM                       30764
unix  3      [ ]         SEQPACKET  CONNECTED         8861
unix  2      [ ]         DGRAM                       13717
unix  2      [ ]         DGRAM                        2420
unix  3      [ ]         SEQPACKET  CONNECTED      2491959
unix  2      [ ]         DGRAM                     2448120
unix  3      [ ]         SEQPACKET  CONNECTED       742518
unix  3      [ ]         SEQPACKET  CONNECTED      2056785
unix  3      [ ]         SEQPACKET  CONNECTED        31123
unix  3      [ ]         SEQPACKET  CONNECTED        15830
unix  2      [ ]         DGRAM                        1292
unix  2      [ ]         DGRAM                       10456
unix  3      [ ]         SEQPACKET  CONNECTED      2351136
unix  3      [ ]         SEQPACKET  CONNECTED      2253798
unix  3      [ ]         STREAM     CONNECTED      1129416
unix  3      [ ]         STREAM     CONNECTED         3841 /dev/socket/domainfproxyd
unix  3      [ ]         SEQPACKET  CONNECTED       422423
unix  2      [ ]         DGRAM                       11908
unix  3      [ ]         STREAM     CONNECTED        22612
unix  2      [ ]         DGRAM                        9623
unix  3      [ ]         SEQPACKET  CONNECTED         3837
unix  3      [ ]         STREAM     CONNECTED      2496572
unix  3      [ ]         STREAM     CONNECTED      2494328
unix  3      [ ]         SEQPACKET  CONNECTED       400007
unix  3      [ ]         SEQPACKET  CONNECTED       741871
unix  3      [ ]         STREAM     CONNECTED        50785
unix  3      [ ]         STREAM     CONNECTED      1129415
unix  3      [ ]         SEQPACKET  CONNECTED       742511
unix  3      [ ]         STREAM     CONNECTED        43858
unix  2      [ ]         DGRAM                       24925
unix  3      [ ]         STREAM     CONNECTED      1824149
unix  2      [ ]         DGRAM                       28712
unix  2      [ ]         DGRAM                       17491
unix  3      [ ]         SEQPACKET  CONNECTED        10909
unix  3      [ ]         STREAM     CONNECTED      2510075
unix  2      [ ]         DGRAM                     2471568
unix  3      [ ]         SEQPACKET  CONNECTED        18633
unix  2      [ ]         DGRAM                       10204
unix  3      [ ]         STREAM     CONNECTED      1824988
unix  3      [ ]         SEQPACKET  CONNECTED      2495572
unix  3      [ ]         SEQPACKET  CONNECTED      2461194
unix  3      [ ]         STREAM     CONNECTED      2073485
unix  2      [ ]         DGRAM                       12236
unix  2      [ ]         DGRAM                         682
unix  3      [ ]         STREAM     CONNECTED      2257066
unix  3      [ ]         STREAM     CONNECTED      1824989
unix  3      [ ]         STREAM     CONNECTED       741864
unix  3      [ ]         STREAM     CONNECTED        28514 @VND_Multiclient
unix  3      [ ]         STREAM     CONNECTED        14473 /dev/socket/sdp
unix  3      [ ]         SEQPACKET  CONNECTED      2471914
unix  3      [ ]         SEQPACKET  CONNECTED        18581
unix  3      [ ]         SEQPACKET  CONNECTED      2490494
unix  2      [ ]         DGRAM                     2488340
unix  3      [ ]         SEQPACKET  CONNECTED      2351137
unix  3      [ ]         SEQPACKET  CONNECTED      2253797
unix  2      [ ]         DGRAM                       22016
unix  3      [ ]         STREAM     CONNECTED        12952
unix  2      [ ]         DGRAM                      117138
unix  2      [ ]         DGRAM                       14372
unix  2      [ ]         DGRAM                     2502382
unix  3      [ ]         STREAM     CONNECTED      2488029
unix  3      [ ]         STREAM     CONNECTED      2486103
unix  2      [ ]         STREAM     CONNECTED        93228
unix  3      [ ]         SEQPACKET  CONNECTED         3833
unix  2      [ ]         DGRAM                        9156
unix  3      [ ]         SEQPACKET  CONNECTED        18637
unix  3      [ ]         STREAM     CONNECTED      2496575
unix  3      [ ]         STREAM     CONNECTED      1129683
unix  3      [ ]         SEQPACKET  CONNECTED        34610
unix  3      [ ]         SEQPACKET  CONNECTED        22020
unix  2      [ ]         DGRAM                       73187
unix  3      [ ]         SEQPACKET  CONNECTED      2300146
unix  3      [ ]         SEQPACKET  CONNECTED      2056784
unix  3      [ ]         SEQPACKET  CONNECTED      2482720
unix  2      [ ]         DGRAM                     2497803
unix  3      [ ]         SEQPACKET  CONNECTED      2056111
unix  3      [ ]         STREAM     CONNECTED       739594
unix  3      [ ]         STREAM     CONNECTED        43859
unix  3      [ ]         SEQPACKET  CONNECTED      2486994
unix  3      [ ]         STREAM     CONNECTED        14386 /data/.socket_stream
unix  2      [ ]         DGRAM                       19129
unix  3      [ ]         SEQPACKET  CONNECTED      2471641
unix  3      [ ]         SEQPACKET  CONNECTED        10910
unix  3      [ ]         STREAM     CONNECTED      2301799
unix  3      [ ]         SEQPACKET  CONNECTED        25808
unix  3      [ ]         STREAM     CONNECTED      2257065
unix  2      [ ]         DGRAM                      741761
unix  2      [ ]         DGRAM                       28512
unix  3      [ ]         SEQPACKET  CONNECTED      2460880
unix  3      [ ]         SEQPACKET  CONNECTED       409999
unix  2      [ ]         DGRAM                      149732
unix  2      [ ]         DGRAM                        3592
unix  3      [ ]         STREAM     CONNECTED      2495565
unix  2      [ ]         DGRAM                        2426
unix  2      [ ]         DGRAM                       17469
unix  2      [ ]         DGRAM                       13768
unix  3      [ ]         STREAM     CONNECTED      2509289
unix  2      [ ]         DGRAM                       40184
unix  3      [ ]         STREAM     CONNECTED        27436
unix  3      [ ]         SEQPACKET  CONNECTED        18582
unix  3      [ ]         STREAM     CONNECTED      1839176
unix  3      [ ]         SEQPACKET  CONNECTED      2471653
unix  3      [ ]         STREAM     CONNECTED      2073481
unix  2      [ ]         DGRAM                       17468
unix  2      [ ]         DGRAM                     2107007
unix  3      [ ]         SEQPACKET  CONNECTED       741869
unix  3      [ ]         STREAM     CONNECTED        28517 @VND_Multiclient2
unix  2      [ ]         DGRAM                       18545
unix  3      [ ]         STREAM     CONNECTED        18640 /dev/socket/mdns
unix  3      [ ]         STREAM     CONNECTED        28513
unix  3      [ ]         STREAM     CONNECTED        27297
unix  3      [ ]         STREAM     CONNECTED         3836
unix  2      [ ]         DGRAM                     2480551
unix  3      [ ]         SEQPACKET  CONNECTED      2447890
unix  2      [ ]         DGRAM                        3013
unix  3      [ ]         STREAM     CONNECTED      2494327
unix  3      [ ]         SEQPACKET  CONNECTED      1124913
unix  2      [ ]         DGRAM                       10122
unix  2      [ ]         DGRAM                     2459547
unix  3      [ ]         SEQPACKET  CONNECTED        42384
unix  2      [ ]         DGRAM                     2219602
unix  3      [ ]         SEQPACKET  CONNECTED       130203
unix  3      [ ]         SEQPACKET  CONNECTED      2482682
unix  3      [ ]         SEQPACKET  CONNECTED      2461197
unix  2      [ ]         DGRAM                       11823
unix  3      [ ]         STREAM     CONNECTED       765677
unix  2      [ ]         DGRAM                       33301
unix  3      [ ]         SEQPACKET  CONNECTED      2483135
unix  3      [ ]         SEQPACKET  CONNECTED        27735



E:\ADB\platform-tools>adb get-state
device

E:\ADB\platform-tools>adb get-serialno
32002d88eefb458d

E:\ADB\platform-tools>adb devices -l
List of devices attached
32002d88eefb458d       device product:j6ltedx model:SM_J600G device:j6lte transport_id:4



E:\ADB\platform-tools>adb shell service list
Found 290 services:
0       samsung.face: []
1       ions: [com.android.internal.telephony.IOns]
2       gsiservice: []
3       sip: [android.net.sip.ISipService]
4       sdhms: [com.sec.android.sdhms.ISamsungDeviceHealthManager]
5       secims: [com.sec.ims.IImsService]
6       ImsBase: [com.samsung.android.ims.ISemImsService]
7       ims6: [com.android.ims.internal.IImsService]
8       epdgService: [com.sec.epdg.IEpdgManager]
9       network_stack: [android.net.INetworkStackConnector]
10      telecom: [com.android.internal.telecom.ITelecomService]
11      carrier_config: [com.android.internal.telephony.ICarrierConfigLoader]
12      phone: [com.android.internal.telephony.ITelephony]
13      isms: [com.android.internal.telephony.ISms]
14      iphonesubinfo: [com.android.internal.telephony.IPhoneSubInfo]
15      simphonebook: [com.android.internal.telephony.IIccPhoneBook]
16      ircs: [android.telephony.ims.aidl.IRcs]
17      emergency_service: []
18      SveService: []
19      secure_element: [android.se.omapi.ISecureElementService]
20      isub: [com.android.internal.telephony.ISub]
21      DisplaySolution: [com.samsung.android.displaysolution.ISemDisplaySolutionManager]
22      voip: [android.os.IVoIPInterface]
23      CodecSolution: [com.samsung.android.codecsolution.ICodecSolutionManagerService]
24      perfsdkservice: [com.samsung.android.perfsdkservice.IPerfSDKService]
25      gamemanager: [com.samsung.android.game.IGameManagerService]
26      gamesdk: [com.samsung.android.gamesdk.IGameSDKService]
27      mdc_service: []
28      contexthub: [android.hardware.location.IContextHubService]
29      mdm.remotedesktop: [mdm.samsung.IRemoteDesktopService]
30      edmnativehelper: [mdm.edmnativehelperservice]
31      knoxnap: [com.samsung.android.knox.net.nap.INetworkAnalytics]
32      knox_scep_policy: [com.samsung.android.knox.keystore.IEnterpriseCertEnrollPolicy]
33      genericssoservice: [com.samsung.android.knox.sso.common.IGenericSSO]
34      enterprise_shared_device_policy: [com.samsung.android.knox.shareddevice.IEnterpriseSharedDevicePolicy]
35      enterprise_billing_policy: [com.samsung.android.knox.net.billing.IEnterpriseBillingPolicy]
36      threat_defense_service: [com.samsung.android.knox.threatdefense.IThreatDefenseService]
37      multi_user_manager_service: [com.samsung.android.knox.multiuser.IMultiUserManager]
38      bluetooth_secure_mode_policy: [com.samsung.android.knox.bluetooth.IBluetoothSecureModePolicy]
39      dualsim_policy: [com.samsung.android.knox.net.dualsim.IDualSimPolicy]
40      device_account_policy: [com.samsung.android.knox.accounts.IDeviceAccountPolicy]
41      geofencing: [com.samsung.android.knox.location.IGeofencing]
42      lockscreen_overlay: [com.samsung.android.knox.lockscreen.ILockscreenOverlay]
43      ldap_account_policy: [com.samsung.android.knox.accounts.ILDAPAccountPolicy]
44      kioskmode: [com.samsung.android.knox.kiosk.IKioskMode]
45      date_time_policy: [com.samsung.android.knox.datetime.IDateTimePolicy]
46      browser_policy: [com.samsung.android.knox.browser.IBrowserPolicy]
47      apn_settings_policy: [com.samsung.android.knox.net.apn.IApnSettingsPolicy]
48      certificate_policy: [com.samsung.android.knox.keystore.ICertificatePolicy]
49      apppermission_control_policy: [android.app.enterprise.IApplicationPermissionControlPolicy]
50      firewall_policy: [android.app.enterprise.IFirewallPolicy]
51      firewall: [com.samsung.android.knox.net.firewall.IFirewall]
52      email_policy: [com.samsung.android.knox.accounts.IEmailPolicy]
53      bluetooth_policy: [com.samsung.android.knox.bluetooth.IBluetoothPolicy]
54      roaming_policy: [com.samsung.android.knox.restriction.IRoamingPolicy]
55      security_policy: [com.samsung.android.knox.ISecurityPolicy]
56      vpn_policy: [com.samsung.android.knox.net.vpn.IVpnInfoPolicy]
57      misc_policy: [com.samsung.android.knox.IMiscPolicy]
58      location_policy: [com.samsung.android.knox.location.ILocationPolicy]
59      email_account_policy: [com.samsung.android.knox.accounts.IEmailAccountPolicy]
60      eas_account_policy: [com.samsung.android.knox.accounts.IExchangeAccountPolicy]
61      auditlog: [com.samsung.android.knox.log.IAuditLog]
62      license_log_service: []
63      device_info: [com.samsung.android.knox.deviceinfo.IDeviceInfo]
64      netd_listener: [android.net.metrics.INetdEventListener]
65      connmetrics: [android.net.IIpConnectivityMetrics]
66      bluetooth_manager: [android.bluetooth.IBluetoothManager]
67      knox_analytics_proxy: [com.samsung.android.knox.knoxanalyticsproxy.IKnoxAnalyticsProxy]
68      knox_analytics: [com.samsung.android.knox.analytics.IKnoxAnalyticsService]
69      app_binding: []
70      clipboard: [android.content.IClipboard]
71      cepproxyks: [com.samsung.android.cepproxyks.ISCEPKeystoreService]
72      PkgPredictorService: [com.samsung.android.ipm.IPkgPredictor]
73      com.samsung.ucs.ucsservice: [com.samsung.android.knox.ucm.core.IUcmService]
74      knox_ucsm_policy: [com.samsung.android.knox.ucm.configurator.IUniversalCredentialManager]
75      autofill: [android.view.autofill.IAutoFillManager]
76      mobile_payment: [android.spay.IPaymentManager]
77      imms: [com.android.internal.telephony.IMms]
78      incidentcompanion: [android.os.IIncidentCompanion]
79      statscompanion: [android.os.IStatsCompanionService]
80      spengestureservice: [com.samsung.android.content.smartclip.ISpenGestureService]
81      media.camera.proxy: [android.hardware.ICameraServiceProxy]
82      slice: [android.app.slice.ISliceManager]
83      media_projection: [android.media.projection.IMediaProjectionManager]
84      crossprofileapps: [android.content.pm.ICrossProfileApps]
85      launcherapps: [android.content.pm.ILauncherApps]
86      shortcut: [android.content.pm.IShortcutService]
87      biometric: [android.hardware.biometrics.IBiometricService]
88      fingerprint: [android.hardware.fingerprint.IFingerprintService]
89      media_router: [android.media.IMediaRouterService]
90      media_resource_monitor: [android.media.IMediaResourceMonitor]
91      media_session: [android.media.session.ISessionManager]
92      mate_service: [com.samsung.android.mateservice.IMateService]
93      cover: [com.samsung.android.cover.ICoverManager]
94      restrictions: [android.content.IRestrictionsManager]
95      companiondevice: [android.companion.ICompanionDeviceManager]
96      print: [android.print.IPrintManager]
97      graphicsstats: [android.view.IGraphicsStats]
98      dreams: [android.service.dreams.IDreamManager]
99      network_time_update_service: []
100     timezone: [android.app.timezone.IRulesManager]
101     runtime: []
102     diskstats: []
103     voiceinteraction: [com.android.internal.app.IVoiceInteractionManagerService]
104     role: [android.app.role.IRoleManager]
105     appwidget: [com.android.internal.appwidget.IAppWidgetService]
106     backup: [android.app.backup.IBackupManager]
107     trust: [android.app.trust.ITrustManager]
108     soundtrigger: [com.android.internal.app.ISoundTriggerService]
109     jobscheduler: [android.app.job.IJobScheduler]
110     color_display: [android.hardware.display.IColorDisplayManager]
111     IntelligentBatterySaverService: []
112     hardware_properties: [android.os.IHardwarePropertiesManager]
113     serial: [android.hardware.ISerialManager]
114     usb: [android.hardware.usb.IUsbManager]
115     adb: [android.debug.IAdbManager]
116     midi: [android.media.midi.IMidiManager]
117     DockObserver: []
118     audio: [android.media.IAudioService]
119     wallpaper: [android.app.IWallpaperManager]
120     search: [android.app.ISearchManager]
121     time_detector: [android.app.timedetector.ITimeDetectorService]
122     country_detector: [android.location.ICountryDetector]
123     sec_location: [com.samsung.android.location.ISLocationManager]
124     location: [android.location.ILocationManager]
125     devicestoragemonitor: []
126     notification: [android.app.INotificationManager]
127     updatelock: [android.os.IUpdateLock]
128     system_update: [android.os.ISystemUpdateManager]
129     servicediscovery: [android.net.nsd.INsdManager]
130     connectivity: [android.net.IConnectivityManager]
131     knoxguard_service: [com.samsung.android.knoxguard.IKnoxGuardManager]
132     ethernet: [android.net.IEthernetManager]
133     wifip2p: [android.net.wifi.p2p.IWifiP2pManager]
134     wifiscanner: [android.net.wifi.IWifiScanner]
135     wifi: [android.net.wifi.IWifiManager]
136     urspservice: [android.net.IUrspManager]
137     netpolicy: [android.net.INetworkPolicyManager]
138     netstats: [android.net.INetworkStatsService]
139     network_score: [android.net.INetworkScoreService]
140     textclassification: [android.service.textclassifier.ITextClassifierService]
141     textservices: [com.android.internal.textservice.ITextServicesManager]
142     ipsec: [android.net.IIpSecService]
143     knox_vpn_policy: [com.samsung.android.knox.net.vpn.IKnoxVpnPolicy]
144     network_management: [android.os.INetworkManagementService]
145     dsms: [com.samsung.android.dsms.aidl.IDsmsService]
146     semclipboard: [android.sec.clipboard.IClipboardService]
147     content_suggestions: [android.app.contentsuggestions.IContentSuggestionsManager]
148     app_prediction: [android.app.prediction.IPredictionManager]
149     knoxcustom: [com.samsung.android.knox.custom.IKnoxCustomManager]
150     enterprise_policy: [com.samsung.android.knox.IEnterpriseDeviceManager]
151     edm_proxy: [android.sec.enterprise.IEDMProxy]
152     password_policy: [com.samsung.android.knox.devicesecurity.IPasswordPolicy]
153     restriction_policy: [com.samsung.android.knox.restriction.IRestrictionPolicy]
154     remoteinjection: [com.samsung.android.knox.remotecontrol.IRemoteInjection]
155     phone_restriction_policy: [com.samsung.android.knox.restriction.IPhoneRestrictionPolicy]
156     wifi_policy: [com.samsung.android.knox.net.wifi.IWifiPolicy]
157     application_policy: [com.samsung.android.knox.application.IApplicationPolicy]
158     enterprise_license_policy: [com.samsung.android.knox.license.IEnterpriseLicense]
159     statusbar: [com.android.internal.statusbar.IStatusBarService]
160     AODManagerService: [com.samsung.android.aod.IAODManager]
161     sdp_log: [android.os.ISdpLogService]
162     sdp: [android.os.ISdpManagerService]
163     harmony_eas_service: [android.content.IHarmonyEAS]
164     device_policy: [android.app.admin.IDevicePolicyManager]
165     persistent_data_block: [android.service.persistentdata.IPersistentDataBlockService]
166     deviceidle: [android.os.IDeviceIdleController]
167     oem_lock: [android.service.oemlock.IOemLockService]
168     testharness: []
169     lock_settings: [com.android.internal.widget.ILockSettings]
170     uimode: [android.app.IUiModeManager]
171     storagestats: [android.app.usage.IStorageStatsManager]
172     mount: [android.os.storage.IStorageManager]
173     FMPlayer: [com.samsung.android.media.fmradio.internal.IFMPlayer]
174     accessibility: [android.view.accessibility.IAccessibilityManager]
175     input_method: [com.android.internal.view.IInputMethodManager]
176     emailksproxy: [com.samsung.android.knox.util.ISemKeyStoreService]
177     DirEncryptService: [IDirEncryptService]
178     pinner: []
179     network_watchlist: [com.android.internal.net.INetworkWatchlistManager]
180     bluetooth_secure_mode_manager: [android.bluetooth.IBluetoothSecureManagerService]
181     SemAuthnrService: [com.samsung.android.authnrservice.manager.ISemAuthnrService]
182     multiwindow: [com.samsung.android.multiwindow.IMultiWindowManager]
183     input: [android.hardware.input.IInputManager]
184     window: [android.view.IWindowManager]
185     motion_recognition: [com.samsung.android.gesture.IMotionRecognitionService]
186     knox_securetimer: [com.samsung.android.knox.securetimer.ISecureTimer]
187     pkm: [android.service.tima.IPKMService]
188     knox_ccm_policy: [com.samsung.android.knox.keystore.IClientCertificateManager]
189     knox_timakeystore_policy: [com.samsung.android.knox.keystore.ITimaKeystore]
190     tima: [android.service.tima.ITimaService]
191     iccc: [com.samsung.android.iccc.IIntegrityControlCheckCenter]
192     AAS: [com.samsung.android.allaroundsensing.ISemAllAroundSensingManager]
193     inputflinger: [android.input.IInputFlinger]
194     mDNIe: [com.samsung.android.hardware.display.ISemMdnieManager]
195     alarm: [android.app.IAlarmManager]
196     HcmManagerService: [android.os.ISemHcmManager]
197     HqmManagerService: [android.os.ISemHqmManager]
198     CustomFrequencyManagerService: [android.os.ICustomFrequencyManager]
199     consumer_ir: [android.hardware.IConsumerIrService]
200     dynamic_system: [android.os.image.IDynamicSystemService]
201     vibrator: [android.os.IVibratorService]
202     external_vibrator_service: [android.os.IExternalVibratorService]
203     sepunion: [com.samsung.android.sepunion.IUnionManager]
204     dropbox: [com.android.internal.os.IDropBoxManagerService]
205     SatsService: [com.samsung.android.service.sats.ISatsService]
206     HermesService: [com.samsung.android.service.HermesService.IHermesService]
207     DeviceRootKeyService: [com.samsung.android.service.DeviceRootKeyService.IDeviceRootKeyService]
208     SamsungKeyProvisioningManagerService: [com.samsung.android.service.SamsungKeyProvisioningManagerService.ISamsungKeyProvisioningManagerService]
209     device_config: []
210     settings: []
211     content: [android.content.IContentService]
212     account: [android.accounts.IAccountManager]
213     ReactiveService: [com.samsung.android.service.reactive.IReactiveService]
214     SEAMService: [com.samsung.android.knox.seams.ISEAMS]
215     rcp: [com.samsung.android.knox.ISemRemoteContentManager]
216     mum_container_rcp_policy: [com.samsung.android.knox.container.IRCPPolicy]
217     mum_container_policy: [com.samsung.android.knox.container.IKnoxContainerManager]
218     persona: [com.samsung.android.knox.ISemPersonaManager]
219     dual_app: [com.samsung.android.app.ISemDualAppManager]
220     telephony.registry: [com.android.internal.telephony.ITelephonyRegistry]
221     scheduling_policy: [android.os.ISchedulingPolicyService]
222     sec_key_att_app_id_provider: [android.security.keymaster.IKeyAttestationApplicationIdProvider]
223     bugreport: [android.os.IDumpstate]
224     rollback: [android.content.rollback.IRollbackManager]
225     looper_stats: []
226     binder_calls_stats: []
227     webviewupdate: [android.webkit.IWebViewUpdateService]
228     usagestats: [android.app.usage.IUsageStatsManager]
229     batteryproperties: [android.os.IBatteryPropertiesRegistrar]
230     battery: []
231     asks: [android.content.pm.IASKSManager]
232     media.camera: [android.hardware.ICameraService]
233     sensorservice: [android.gui.SensorServer]
234     sensor_privacy: [android.hardware.ISensorPrivacyManager]
235     overlay: [android.content.om.IOverlayManager]
236     processinfo: [android.os.IProcessInfoService]
237     permission: [android.os.IPermissionController]
238     cpuinfo: []
239     dbinfo: []
240     gfxinfo: []
241     meminfo: []
242     procstats: [com.android.internal.app.procstats.IProcessStats]
243     activity: [android.app.IActivityManager]
244     user: [android.os.IUserManager]
245     otadexopt: [android.content.pm.IOtaDexopt]
246     package_native: [android.content.pm.IPackageManagerNative]
247     package: [android.content.pm.IPackageManager]
248     persona_policy: [android.content.pm.IPersonaPolicyManager]
249     display: [android.hardware.display.IDisplayManager]
250     recovery: [android.os.IRecoverySystem]
251     EngineeringModeService: [com.samsung.android.service.EngineeringMode.IEngineeringModeService]
252     VaultKeeperService: [com.samsung.android.service.vaultkeeper.IVaultKeeperService]
253     thermalservice: [android.os.IThermalService]
254     power: [android.os.IPowerManager]
255     appops: [com.android.internal.app.IAppOpsService]
256     batterystats: [com.android.internal.app.IBatteryStats]
257     activity_task: [android.app.IActivityTaskManager]
258     uri_grants: [android.app.IUriGrantsManager]
259     device_identifiers: [android.os.IDeviceIdentifiersPolicyService]
260     netd: []
261     dnsresolver: []
262     android.security.keystore: [android.security.keystore.IKeystoreService]
263     storaged_pri: [android.os.storaged.IStoragedPrivate]
264     storaged: [android.os.IStoraged]
265     android.service.gatekeeper.IGateKeeperService: []
266     com.samsung.android.bio.face.IFaceDaemon: [com.samsung.android.bio.face.IFaceDaemon]
267     media.smartfitting_manager: [android.media.ISmartFittingManagerService]
268     media.resource_manager: [android.media.IResourceManagerService]
269     media.player: [android.media.IMediaPlayerService]
270     installd: []
271     drm.drmManager: [drm.IDrmManagerService]
272     stats: [android.os.IStatsManager]
273     media.extractor: [android.media.IMediaExtractorService]
274     media.remotedisplay: []
275     wificond: []
276     idmap: []
277     incident: []
278     IextSDUFsServiceVold.unionFSStackServiceVold: []
279     media.metrics: [android.media.IMediaAnalyticsService]
280     media.drm: [android.media.IMediaDrmService]
281     SurfaceFlinger: [android.ui.ISurfaceComposer]
282     media.sound_trigger_hw: [android.hardware.ISoundTriggerHwService]
283     media.audio_policy: [android.media.IAudioPolicyService]
284     media.audio_flinger: [android.media.IAudioFlinger]
285     gpu: [android.graphicsenv.IGpuService]
286     ashmem_device_service: [android.ashmemd.IAshmemDeviceService]
287     suspend_control: []
288     apexservice: []
289     vold: []


E:\ADB\platform-tools>adb shell pm list packages -3
package:com.skype.raider
package:com.jio.media.jiobeats
package:com.truecaller
package:com.whereismytrain.android
package:org.telegram.messenger
package:com.phonepe.app
package:com.dencreak.dlcalculator
package:com.whatsapp
package:com.duolingo
package:in.amazon.mShop.android.shopping
package:com.flipkart.android
package:com.duosecurity.duomobile
package:us.zoom.videomeetings
package:com.testbook.tbapp
package:com.instagram.android
package:in.startv.hotstar
package:com.koushikdutta.vysor
package:com.olacabs.customer
package:com.lenovo.anyshare.gps
package:com.adobe.scan.android
package:net.one97.paytm
package:com.ionicframework.apsrtclivetrack555011
package:com.jio.myjio
package:com.google.android.apps.photos
package:com.mousudh.simpleinterest
package:com.larksuite.suite
package:com.downlood.sav.whmedia
package:com.google.android.apps.nbu.paisa.user
package:com.ludo.king
package:com.google.android.apps.meetings
package:com.google.android.apps.work.clouddpc
package:com.dztall.ccr.android.admob
package:cn.wps.moffice_eng
package:com.microsoft.teams



E:\ADB\platform-tools>adb --help
Android Debug Bridge version 1.0.41
Version 32.0.0-8006631
Installed as E:\ADB\platform-tools\adb.exe

global options:
 -a                       listen on all network interfaces, not just localhost
 -d                       use USB device (error if multiple devices connected)
 -e                       use TCP/IP device (error if multiple TCP/IP devices available)
 -s SERIAL                use device with given serial (overrides $ANDROID_SERIAL)
 -t ID                    use device with given transport id
 -H                       name of adb server host [default=localhost]
 -P                       port of adb server [default=5037]
 -L SOCKET                listen on given socket for adb server [default=tcp:localhost:5037]
 --one-device SERIAL|USB  only allowed with 'start-server' or 'server nodaemon', server will only connect to one USB device, specified by a serial number or USB device address.

general commands:
 devices [-l]             list connected devices (-l for long output)
 help                     show this help message
 version                  show version num

networking:
 connect HOST[:PORT]      connect to a device via TCP/IP [default port=5555]
 disconnect [HOST[:PORT]]
     disconnect from given TCP/IP device [default port=5555], or all
 pair HOST[:PORT] [PAIRING CODE]
     pair with a device for secure TCP/IP communication
 forward --list           list all forward socket connections
 forward [--no-rebind] LOCAL REMOTE
     forward socket connection using:
       tcp:<port> (<local> may be "tcp:0" to pick any open port)
       localabstract:<unix domain socket name>
       localreserved:<unix domain socket name>
       localfilesystem:<unix domain socket name>
       dev:<character device name>
       jdwp:<process pid> (remote only)
       vsock:<CID>:<port> (remote only)
       acceptfd:<fd> (listen only)
 forward --remove LOCAL   remove specific forward socket connection
 forward --remove-all     remove all forward socket connections
 ppp TTY [PARAMETER...]   run PPP over USB
 reverse --list           list all reverse socket connections from device
 reverse [--no-rebind] REMOTE LOCAL
     reverse socket connection using:
       tcp:<port> (<remote> may be "tcp:0" to pick any open port)
       localabstract:<unix domain socket name>
       localreserved:<unix domain socket name>
       localfilesystem:<unix domain socket name>
 reverse --remove REMOTE  remove specific reverse socket connection
 reverse --remove-all     remove all reverse socket connections from device
 mdns check               check if mdns discovery is available
 mdns services            list all discovered services

file transfer:
 push [--sync] [-z ALGORITHM] [-Z] LOCAL... REMOTE
     copy local files/directories to device
     --sync: only push files that are newer on the host than the device
     -n: dry run: push files to device without storing to the filesystem
     -z: enable compression with a specified algorithm (any, none, brotli)
     -Z: disable compression
 pull [-a] [-z ALGORITHM] [-Z] REMOTE... LOCAL
     copy files/dirs from device
     -a: preserve file timestamp and mode
     -z: enable compression with a specified algorithm (any, none, brotli)
     -Z: disable compression
 sync [-l] [-z ALGORITHM] [-Z] [all|data|odm|oem|product|system|system_ext|vendor]
     sync a local build from $ANDROID_PRODUCT_OUT to the device (default all)
     -n: dry run: push files to device without storing to the filesystem
     -l: list files that would be copied, but don't copy them
     -z: enable compression with a specified algorithm (any, none, brotli)
     -Z: disable compression

shell:
 shell [-e ESCAPE] [-n] [-Tt] [-x] [COMMAND...]
     run remote shell command (interactive shell if no command given)
     -e: choose escape character, or "none"; default '~'
     -n: don't read from stdin
     -T: disable pty allocation
     -t: allocate a pty if on a tty (-tt: force pty allocation)
     -x: disable remote exit codes and stdout/stderr separation
 emu COMMAND              run emulator console command

app installation (see also `adb shell cmd package help`):
 install [-lrtsdg] [--instant] PACKAGE
     push a single package to the device and install it
 install-multiple [-lrtsdpg] [--instant] PACKAGE...
     push multiple APKs to the device for a single package and install them
 install-multi-package [-lrtsdpg] [--instant] PACKAGE...
     push one or more packages to the device and install them atomically
     -r: replace existing application
     -t: allow test packages
     -d: allow version code downgrade (debuggable packages only)
     -p: partial application install (install-multiple only)
     -g: grant all runtime permissions
     --abi ABI: override platform's default ABI
     --instant: cause the app to be installed as an ephemeral install app
     --no-streaming: always push APK to device and invoke Package Manager as separate steps
     --streaming: force streaming APK directly into Package Manager
     --fastdeploy: use fast deploy
     --no-fastdeploy: prevent use of fast deploy
     --force-agent: force update of deployment agent when using fast deploy
     --date-check-agent: update deployment agent when local version is newer and using fast deploy
     --version-check-agent: update deployment agent when local version has different version code and using fast deploy
     (See also `adb shell pm help` for more options.)
 uninstall [-k] PACKAGE
     remove this app package from the device
     '-k': keep the data and cache directories

debugging:
 bugreport [PATH]
     write bugreport to given PATH [default=bugreport.zip];
     if PATH is a directory, the bug report is saved in that directory.
     devices that don't support zipped bug reports output to stdout.
 jdwp                     list pids of processes hosting a JDWP transport
 logcat                   show device log (logcat --help for more)

security:
 disable-verity           disable dm-verity checking on userdebug builds
 enable-verity            re-enable dm-verity checking on userdebug builds
 keygen FILE
     generate adb public/private key; private key stored in FILE,

scripting:
 wait-for[-TRANSPORT]-STATE...
     wait for device to be in a given state
     STATE: device, recovery, rescue, sideload, bootloader, or disconnect
     TRANSPORT: usb, local, or any [default=any]
 get-state                print offline | bootloader | device
 get-serialno             print <serial-number>
 get-devpath              print <device-path>
 remount [-R]
      remount partitions read-write. if a reboot is required, -R will
      will automatically reboot the device.
 reboot [bootloader|recovery|sideload|sideload-auto-reboot]
     reboot the device; defaults to booting system image but
     supports bootloader and recovery too. sideload reboots
     into recovery and automatically starts sideload mode,
     sideload-auto-reboot is the same but reboots after sideloading.
 sideload OTAPACKAGE      sideload the given full OTA package
 root                     restart adbd with root permissions
 unroot                   restart adbd without root permissions
 usb                      restart adbd listening on USB
 tcpip PORT               restart adbd listening on TCP on PORT

internal debugging:
 start-server             ensure that there is a server running
 kill-server              kill the server if it is running
 reconnect                kick connection from host side to force reconnect
 reconnect device         kick connection from device side to force reconnect
 reconnect offline        reset offline/unauthorized devices to force reconnect

usb:
 attach                   attach a detached USB device
 detach                   detach from a USB device to allow use by other processes
environment variables:
 $ADB_TRACE
     comma-separated list of debug info to log:
     all,adb,sockets,packets,rwx,usb,sync,sysdeps,transport,jdwp
 $ADB_VENDOR_KEYS         colon-separated list of keys (files or directories)
 $ANDROID_SERIAL          serial number to connect to (see -s)
 $ANDROID_LOG_TAGS        tags to be used by logcat (see logcat --help)
 $ADB_LOCAL_TRANSPORT_MAX_PORT max emulator scan port (default 5585, 16 emus)
 $ADB_MDNS_AUTO_CONNECT   comma-separated list of mdns services to allow auto-connect (default adb-tls-connect)










