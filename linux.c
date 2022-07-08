kavitha@kavitha-VirtualBox:~$ mkdir linux
kavitha@kavitha-VirtualBox:~$ ls
8thjuly  Desktop    linux          Music     Public    snap
adb.c    Documents  linux_command  Pictures  python    Templates
bench    Downloads  lunix          practise  revision  Videos
kavitha@kavitha-VirtualBox:~$ cd linux
kavitha@kavitha-VirtualBox:~/linux$ vi 1.c
kavitha@kavitha-VirtualBox:~/linux$ cat 1.c
apple
banana
mango
pine apple
kavitha@kavitha-VirtualBox:~/linux$ touch 2.c
kavitha@kavitha-VirtualBox:~/linux$ ls
1.c  2.c
kavitha@kavitha-VirtualBox:~/linux$ mv 1.c 2.c
kavitha@kavitha-VirtualBox:~/linux$ ls
2.c
kavitha@kavitha-VirtualBox:~/linux$ cp 2.c 3.c
kavitha@kavitha-VirtualBox:~/linux$ ls
2.c  3.c
kavitha@kavitha-VirtualBox:~/linux$ 4.c
4.c: command not found
kavitha@kavitha-VirtualBox:~/linux$ touch 4.c
kavitha@kavitha-VirtualBox:~/linux$ ls
2.c  3.c  4.c
kavitha@kavitha-VirtualBox:~/linux$ cp 3.c 4.c
kavitha@kavitha-VirtualBox:~/linux$ cp 3.c 4.c
kavitha@kavitha-VirtualBox:~/linux$ ls
2.c  3.c  4.c
kavitha@kavitha-VirtualBox:~/linux$ cat 4.c
apple
banana
mango
pine apple
kavitha@kavitha-VirtualBox:~/linux$ vi 4.c
kavitha@kavitha-VirtualBox:~/linux$ cat 4.c
apple
banana
mango
pine apple

123435
kavitha@kavitha-VirtualBox:~/linux$ cat 3.c
apple
banana
mango
pine apple
kavitha@kavitha-VirtualBox:~/linux$ mv 4.c 5.c
kavitha@kavitha-VirtualBox:~/linux$ ls
2.c  3.c  5.c
kavitha@kavitha-VirtualBox:~/linux$ cat 2.c
apple
banana
mango
pine apple
kavitha@kavitha-VirtualBox:~/linux$ rm 2.c
kavitha@kavitha-VirtualBox:~/linux$ ls
3.c  5.c
kavitha@kavitha-VirtualBox:~/linux$ vi 3.c
kavitha@kavitha-VirtualBox:~/linux$ head 3.c
apple
banana
mango
pine apple
234
eedf
dzs
ew123
wesa
2344rt
kavitha@kavitha-VirtualBox:~/linux$ tail 3.c
dfgvb
sdfghjk
xcvbhj
123453
q3r45
12345
6234
5erty
ertdr

kavitha@kavitha-VirtualBox:~/linux$ vi 5.c
kavitha@kavitha-VirtualBox:~/linux$ cat 5.c
apple
banana
mango
pine apple

123435
kavitha@kavitha-VirtualBox:~/linux$ tac 5.c
123435

pine apple
mango
banana
apple
kavitha@kavitha-VirtualBox:~/linux$ sort 5.c

123435
apple
banana
mango
pine apple
kavitha@kavitha-VirtualBox:~/linux$ grep a 5.c
apple
banana
mango
pine apple
kavitha@kavitha-VirtualBox:~/linux$ cat 5.c |grep p
apple
pine apple
kavitha@kavitha-VirtualBox:~/linux$ ls |grep 5.c
5.c
kavitha@kavitha-VirtualBox:~/linux$ ls |grep 3.c
3.c
kavitha@kavitha-VirtualBox:~/linux$ ls |grep 1.c
kavitha@kavitha-VirtualBox:~/linux$ echo -e "asdfghjwertyuiopdfghjkll;"
asdfghjwertyuiopdfghjkll;
kavitha@kavitha-VirtualBox:~/linux$ echo  "asdfghjwertyuiopdfghjkll"
asdfghjwertyuiopdfghjkll
kavitha@kavitha-VirtualBox:~/linux$ echo -n "asdfghjwertyuiopdfghjkll"
asdfghjwertyuiopdfghjkllkavitha@kavitha-VirtualBox:~/linux$ date
Saturday 09 July 2022 12:58:57 AM IST
kavitha@kavitha-VirtualBox:~/linux$ cal
     July 2022        
Su Mo Tu We Th Fr Sa  
                1  2  
 3  4  5  6  7  8  9  
10 11 12 13 14 15 16  
17 18 19 20 21 22 23  
24 25 26 27 28 29 30  
31                    
kavitha@kavitha-VirtualBox:~/linux$ sleep 2
kavitha@kavitha-VirtualBox:~/linux$ sleep
sleep: missing operand
Try 'sleep --help' for more information.
kavitha@kavitha-VirtualBox:~/linux$ ls-al
ls-al: command not found
kavitha@kavitha-VirtualBox:~/linux$ ls -al
total 16
drwxrwxr-x  2 kavitha kavitha 4096 Jul  9 00:55 .
drwxr-xr-x 28 kavitha kavitha 4096 Jul  9 00:55 ..
-rw-rw-r--  1 kavitha kavitha  138 Jul  9 00:55 3.c
-rw-rw-r--  1 kavitha kavitha   38 Jul  9 00:55 5.c
kavitha@kavitha-VirtualBox:~/linux$ chmod 777 3.c
kavitha@kavitha-VirtualBox:~/linux$ ls -al
total 16
drwxrwxr-x  2 kavitha kavitha 4096 Jul  9 00:55 .
drwxr-xr-x 28 kavitha kavitha 4096 Jul  9 00:55 ..
-rwxrwxrwx  1 kavitha kavitha  138 Jul  9 00:55 3.c
-rw-rw-r--  1 kavitha kavitha   38 Jul  9 00:55 5.c
kavitha@kavitha-VirtualBox:~/linux$ chmod 666 3.c
kavitha@kavitha-VirtualBox:~/linux$ chmod 666 3.c
kavitha@kavitha-VirtualBox:~/linux$ ls
3.c  5.c
kavitha@kavitha-VirtualBox:~/linux$ ls -al
total 16
drwxrwxr-x  2 kavitha kavitha 4096 Jul  9 00:55 .
drwxr-xr-x 28 kavitha kavitha 4096 Jul  9 00:55 ..
-rw-rw-rw-  1 kavitha kavitha  138 Jul  9 00:55 3.c
-rw-rw-r--  1 kavitha kavitha   38 Jul  9 00:55 5.c
kavitha@kavitha-VirtualBox:~/linux$ su
Password: 


su: Authentication failure
kavitha@kavitha-VirtualBox:~/linux$ 
kavitha@kavitha-VirtualBox:~/linux$ 
kavitha@kavitha-VirtualBox:~/linux$ df
Filesystem     1K-blocks     Used Available Use% Mounted on
udev             2481084        0   2481084   0% /dev
tmpfs             502912     1392    501520   1% /run
/dev/sda5       48228052 11128320  34620168  25% /
tmpfs            2514556        0   2514556   0% /dev/shm
tmpfs               5120        4      5116   1% /run/lock
tmpfs            2514556        0   2514556   0% /sys/fs/cgroup
/dev/loop0           128      128         0 100% /snap/bare/5
/dev/loop1         63488    63488         0 100% /snap/core20/1494
/dev/loop2         63488    63488         0 100% /snap/core20/1518
/dev/loop3        260224   260224         0 100% /snap/gnome-3-38-2004/106
/dev/loop4        410496   410496         0 100% /snap/gnome-3-38-2004/112
/dev/loop5         83328    83328         0 100% /snap/gtk-common-themes/1534
/dev/loop6         93952    93952         0 100% /snap/gtk-common-themes/1535
/dev/loop7         55552    55552         0 100% /snap/snap-store/558
/dev/loop8         45824    45824         0 100% /snap/snapd/15904
/dev/loop9         48128    48128         0 100% /snap/snapd/16010
/dev/sda1         523248        4    523244   1% /boot/efi
tmpfs             502908       32    502876   1% /run/user/1000
/dev/sr0           59770    59770         0 100% /media/kavitha/VBox_GAs_6.1.32
kavitha@kavitha-VirtualBox:~/linux$ wc
^C^C
kavitha@kavitha-VirtualBox:~/linux$ rename 3.c 6.c

Command 'rename' not found, but can be installed with:

sudo apt install rename

kavitha@kavitha-VirtualBox:~/linux$ sudo apt install rename
[sudo] password for kavitha: 
E: dpkg was interrupted, you must manually run 'sudo dpkg --configure -a' to correct the problem. 
kavitha@kavitha-VirtualBox:~/linux$ locate

Command 'locate' not found, but can be installed with:

sudo apt install mlocate

kavitha@kavitha-VirtualBox:~/linux$ sudo apt install mlocte
E: dpkg was interrupted, you must manually run 'sudo dpkg --configure -a' to correct the problem. 
kavitha@kavitha-VirtualBox:~/linux$ id
uid=1000(kavitha) gid=1000(kavitha) groups=1000(kavitha),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),120(lpadmin),132(lxd),133(sambashare)
kavitha@kavitha-VirtualBox:~/linux$ clear
kavitha@kavitha-VirtualBox:~/linux$ exit

kavitha@kavitha-VirtualBox:~$ vi 1.c
kavitha@kavitha-VirtualBox:~$ cat 1.c
qwerty
sdfghjk
erstyui
chjk

kavitha@kavitha-VirtualBox:~$ more 1.c
qwerty
sdfghjk
erstyui
chjk


kavitha@kavitha-VirtualBox:~$ less 1.c





qwerty
sdfghjk
erstyui
chjk



kavitha@kavitha-VirtualBox:~/linux_commands$ history
 1049  cd kavitha/
 1050  ls
 1051  cd ..
 1052  ls
 1053  TS_project/
 1054  cd TS_project/
 1055  ls
 1056  make
 1057  ls
 1058  cd add
 1059  ls
 1060  gcc add.c
 1061  ls
 1062  gcc add.c TSIndia_Emp_DB.c
 1063  gcc add.c TSIndia_Emp_DB.c 
 1064  cd TS_project/
 1065  ls
 1066  make
 1067  ls\
 1068  make
 1069  gcc add.c
 1070  cd ..
 1071  cd miniproject/
 1072  maake
 1073  make
 1074  make clean 
 1075  make
 1076  make clean 
 1077  make
 1078  ./exe
 1079  make clean
 1080  make
 1081  ./exe
 1082  make
 1083  ./exe
 1084  gcc add.c
 1085  make
 1086  ./exe
 1087  make
 1088  ./exe
 1089  make clean
 1090  make
 1091  ./exe
 1092  make clean
 1093  make
 1094  ./exe
 1095  make
 1096  make clean
 1097  make
 1098  make clean
 1099  make
 1100  make clean
 1101  make
 1102  make clean
 1103  make
 1104  ./exe
 1105  make
 1106  ./exe
 1107  clear
 1108  ls
 1109  make clean
 1110  man stdlib.h
 1111  man 2 stdlib.h
 1112  make
 1113  cd ..
 1114  cd /
 1115  ls
 1116  cd lib
 1117  ls
 1118  cd ..
 1119  ls
 1120  cd usr
 1121  ls
 1122  cd include/
 1123  ls
 1124  vi stdlib.h
 1125  cd /
 1126  ls
 1127  cd home
 1128  ls
 1129  cd kavitha
 1130  l
 1131  cd miniproject/
 1132  ls
 1133  make clean
 1134  make
 1135  ./exe
 1136  make clean
 1137  make
 1138  make clean
 1139  make
 1140  ./exe
 1141  make clean
 1142  make
 1143  ./exe
 1144  make
 1145  vi add.c
 1146  vi maincomponent.c
 1147  make
 1148  ./exe
 1149  vi maincomponent.c
 1150  vi Add.c
 1151  rm Add.c
 1152  vi add.c
 1153  make
 1154  ./exe
 1155  vi add.c
 1156  make clean
 1157  make
 1158  ./exe
 1159  vi add.c
 1160  make
 1161  vi add.c
 1162  make
 1163  vi add.c
 1164  make
 1165  vi add.c
 1166  make
 1167  ./exe
 1168  vi add.c
 1169  make
 1170  vi add.c
 1171  make
 1172  ./exe
 1173  vi add.c
 1174  make
 1175  make clean
 1176  make
 1177  ./exe
 1178  vi add.c
 1179  make
 1180  ./exe
 1181  vi add.c
 1182  make
 1183  vi add.c
 1184  make
 1185  ./exe
 1186  vi add.c
 1187  make clean
 1188  make
 1189  ./exe
 1190  vi add.c
 1191  make clean
 1192  maKE
 1193  make
 1194  ./exe
 1195  make
 1196  ./exe
 1197  make
 1198  ./exe
 1199  make
 1200  ./exe
 1201  make
 1202  ./exe
 1203  make
 1204  ./exe
 1205  make
 1206  ./exe
 1207  make
 1208  ./exe
 1209  make
 1210  ./exe
 1211  make clean
 1212  make
 1213  make clean
 1214  make
 1215  ./exe
 1216  make
 1217  ./exe
 1218  make
 1219  ./exe
 1220  make
 1221  ./exe
 1222  make clean
 1223  make
 1224  ./exe
 1225  make
 1226  ./exe
 1227  make
 1228  ./exe
 1229  make
 1230  ./exe
 1231  make
 1232  ./exe
 1233  make clean
 1234  make
 1235  ./exe
 1236  make
 1237  ./exe
 1238  make
 1239  ./exe
 1240  make
 1241  ./exe
 1242  make
 1243  ./exe
 1244  make
 1245  ./exe
 1246  make
 1247  ./exe
 1248  make
 1249  ./exe
 1250  make
 1251  ./exe
 1252  vim add.c
 1253  make
 1254  ./exe
 1255  make
 1256  ./exe
 1257  make
 1258  ./exe
 1259  make
 1260  make clean
 1261  make
 1262  ./exe
 1263  make
 1264  ./exe
 1265  make clean
 1266  ./exe
 1267  make
 1268  ./exe
 1269  make clean
 1270  make
 1271  ./exe
 1272  make 
 1273  ./exe
 1274  make 
 1275  ./exe
 1276  vim add.c
 1277  ./exe
 1278  make
 1279  ./exe
 1280  ls
 1281  make clean
 1282  ls
 1283  make
 1284  ./exe
 1285  make
 1286  ./exe
 1287  make
 1288  ./exe
 1289  ls
 1290  make
 1291  gedit Makefile 
 1292  make
 1293  ./exe
 1294  make 
 1295  ./exe
 1296  make clean
 1297  make
 1298  ./exe
 1299  make clean
 1300  make
 1301  ./exe
 1302  make
 1303  ./exe
 1304  make
 1305  ./exe
 1306  make
 1307  ./exe
 1308  make
 1309  ./exe
 1310  make
 1311  ./exe
 1312  make
 1313  ./exe
 1314  make
 1315  ./exe
 1316  mak
 1317  make
 1318  .exe
 1319  ./exe
 1320  make
 1321  ./exe
 1322  make
 1323  ./exe
 1324  make
 1325  ./exe
 1326  make
 1327  ./exe
 1328  make
 1329  ./exe
 1330  make
 1331  ./exe
 1332  make
 1333  ./exe
 1334  make
 1335  ./exe
 1336  make
 1337  ./exe
 1338  make
 1339  ./exe
 1340  make
 1341  ./exe
 1342  make
 1343  ./exe
 1344  make
 1345  ./exe
 1346  make
 1347  ./exe
 1348  make
 1349  ./exe
 1350  make
 1351  ./exe
 1352  make
 1353  ./exe
 1354  make
 1355  ./exe
 1356  make
 1357  ./exe
 1358  vi add.c
 1359  make
 1360  ./exe
 1361  vi add.c
 1362  make
 1363  ./exe
 1364  vi add.c
 1365  make clean
 1366  make
 1367  ./exe
 1368  vi add.c
 1369  make
 1370  ./exe
 1371  vi add.c
 1372  make
 1373  ./exe
 1374  make
 1375  ./exe
 1376  vi add.c
 1377  make
 1378  make clean
 1379  make
 1380  ./exe
 1381  vi add.c
 1382  make clean
 1383  make
 1384  ./exe
 1385  vi add.c
 1386  make
 1387  ./exe
 1388  vi add.c
 1389  date
 1390  cal
 1391  time
 1392  man date
 1393  man cal
 1394  vi date.c
 1395  ls
 1396  make clean
 1397  ls
 1398  make
 1399  ./exe
 1400  make
 1401  ./exe
 1402  make
 1403  ./exe
 1404  make clean
 1405  make
 1406  vi add.c +238
 1407  make clean
 1408  make
 1409  ./exe
 1410  make clean
 1411  make
 1412  make clean
 1413  make
 1414  ./exe
 1415  make clean
 1416  make
 1417  ./exe
 1418  make clean
 1419  make
 1420  ./exe
 1421  make clean
 1422  make
 1423  ./exe
 1424  make clean
 1425  make
 1426  ./exe
 1427  make clean
 1428  make
 1429  ./exe
 1430  make
 1431  ./exe
 1432  make clean
 1433  make
 1434  make clean
 1435  make
 1436  ./exe
 1437  make clean
 1438  make
 1439  ./exe
 1440  make clean
 1441  mkae
 1442  make
 1443  ./exe
 1444  make clean
 1445  make
 1446  ./exe
 1447  make clean
 1448  make
 1449  ./exe
 1450  make clean
 1451  ./exe
 1452  make
 1453  ./exe
 1454  ls
 1455  make clean
 1456  make
 1457  ./exe
 1458  make clean
 1459  make
 1460  cd bench/
 1461  ls
 1462  make clean
 1463  make
 1464  ./exe
 1465  make
 1466  ./exe
 1467  make
 1468  ./exe
 1469  make
 1470  ./exe
 1471  make
 1472  ./exe
 1473  make
 1474  ./exe
 1475  make clean \
 1476  make
 1477  ./exe
 1478  make
 1479  ./exe
 1480  make
 1481  ./xe
 1482  ./exe
 1483  make
 1484  ./exe
 1485  make
 1486  ./exe
 1487  make
 1488  ./exe
 1489  make
 1490  ./exe
 1491  make
 1492  ./xeA
 1493  ./exe
 1494  make
 1495  ./exe
 1496  make clean
 1497  mkae
 1498  make
 1499  make clean
 1500  make  
 1501  make clean
 1502  make  
 1503  ./exe
 1504  vi add.c
 1505  make
 1506  vi add.c +47
 1507  make
 1508  vi add.c +55
 1509  make
 1510  ./exe
 1511  vi add.c +55
 1512  make
 1513  ./exe
 1514  vi add.c +55
 1515  make
 1516  ./exe
 1517  vi add.c +55
 1518  make clean
 1519  make
 1520  ./exe
 1521  vi add.c +55
 1522  make
 1523  ./exe
 1524  vi add.c +55
 1525  make
 1526  ./exe
 1527  vi add.c +55
 1528  make
 1529  ./exe
 1530  vi add.c +55
 1531  make clean
 1532  make
 1533  ./exe
 1534  make
 1535  ./exe
 1536  make clean
 1537  make 
 1538  ./exe
 1539  make 
 1540  ./exe
 1541  1
 1542  ./exe
 1543  make 
 1544  ./exe
 1545  make 
 1546  ./exe
 1547  cd practise
 1548  ls
 1549  cd loops
 1550  mkdir loops
 1551  cd loops
 1552  vi 1.c
 1553  gcc 1.c
 1554  ./a.out
 1555  gcc 1.c
 1556  vi 1.c
 1557  ls
 1558  vi 1.c
 1559  gcc 1.c
 1560  vi 1.c
 1561  gcc 1.c
 1562  ./a.out
 1563  vi 1.c
 1564  gcc 1.c
 1565  vi 1.c
 1566  gcc 1.c
 1567  ./a.out
 1568  vi 1.c
 1569  gcc 1.c
 1570  ./a.out
 1571  vi 1.c
 1572  gcc 1.c
 1573  ./a.out
 1574  vi 1.c
 1575  gcc 1.c
 1576  ./a.out
 1577  vi 1.c
 1578  gcc 1.c
 1579  ./a.out
 1580  vi 1.c
 1581  gcc 1.c
 1582  ./a.out
 1583  vi 1.c
 1584  gcc 1.c
 1585  ./a.out
 1586  vi 1.c
 1587  gcc 1.c
 1588  ./a.out
 1589  vi 1.c
 1590  gcc 1.c
 1591  vi 1.c
 1592  gcc 1.c
 1593  vi 1.c
 1594  gcc 1.c
 1595  vi 1.c
 1596  gcc 1.c
 1597  vi 1.c
 1598  gcc 1.c
 1599  ./a.out
 1600  vi 1.c
 1601  gcc 1.c
 1602  vi 1.c
 1603  gcc 1.c
 1604  ./a.out
 1605  vi 1.c
 1606  ls
 1607  cd practise
 1608  cd 
 1609  ls
 1610  cd practise
 1611  ls
 1612  vi 1.c
 1613  gcc 1.c
 1614  ./a.out
 1615  gcc 1.c
 1616  ./a.out
 1617  gcc 1.c
 1618  ./a.out
 1619  gcc 1.c
 1620  ./a.out
 1621  gcc 1.c
 1622  ./a.out
 1623  gcc 1.c
 1624  ./a.out
 1625  gcc 1.c
 1626  ./a.out
 1627  gcc 1.c
 1628  ./a.out
 1629  gcc 1.c
 1630  ./a.out
 1631  gcc 1.c
 1632  ./a.out
 1633  gcc 1.c
 1634  ./a.out
 1635  gcc 1.c
 1636  ./a.out
 1637  gcc 1.c
 1638  ./a.out
 1639  gcc 1.c
 1640  ./a.out
 1641  gcc 1.c
 1642  ./a.out
 1643  gcc 1.c
 1644  ./a.out
 1645  gcc 1.c
 1646  ./a.out
 1647  gcc 1.c
 1648  ./a.out
 1649  gcc 1.c
 1650  ./a.out
 1651  gcc 1.c
 1652  ./a.out
 1653  gcc 1.c
 1654  ./a.out
 1655  gcc 1.c
 1656  ./a.out
 1657  gcc 1.c
 1658  ./a.out
 1659  gcc 1.c
 1660  ./a.out
 1661  gcc 1.c
 1662  ./a.out
 1663  gcc 1.c
 1664  ./a.out
 1665  gcc 1.c
 1666  ./a.out
 1667  gcc 1.c
 1668  ./a.out
 1669  gcc 1.c
 1670  ./a.out
 1671  gcc 1.c
 1672  ./a.out
 1673  gcc 1.c
 1674  ./a.out
 1675  gcc 1.c
 1676  ./a.out
 1677  gcc 1.c
 1678  ./a.out
 1679  gcc 1.c
 1680  ./a.out
 1681  gcc 1.c
 1682  ./a.out
 1683  gcc 1.c
 1684  ./a.out
 1685  gcc 1.c
 1686  ./a.out
 1687  gcc 1.c
 1688  ./a.out
 1689  gcc 1.c
 1690  ./a.out
 1691  gcc 1.c
 1692  ./a.out
 1693  gcc 1.c
 1694  ./a.out
 1695  gcc 1.c
 1696  ./a.out
 1697  gcc 1.c
 1698  ./a.out
 1699  gcc 1.c
 1700  ./a.out
 1701  gcc 1.c
 1702  ./a.out
 1703  gcc 1.c
 1704  ./a.out
 1705  gcc 1.c
 1706  ./a.out
 1707  gcc 1.c
 1708  ./a.out
 1709  gcc 1.c
 1710  ./a.out
 1711  gcc 1.c
 1712  ./a.out
 1713  ls
 1714  vi arr.c
 1715  gcc arr.c
 1716  ./a.out
 1717  vi arr.c
 1718  gcc arr.c
 1719  vi arr.c
 1720  gcc arr.c
 1721  vi arr.c
 1722  gcc arr.c
 1723  vi arr.c
 1724  gcc arr.c
 1725  ./a.out
 1726  vi arr.c
 1727  gcc arr.c
 1728  ./a.out
 1729  vi arr.c
 1730  gcc arr.c
 1731  ./a.out
 1732  vi arr.c
 1733  gcc arr.c
 1734  ./a.out
 1735  vi arr.c
 1736  gcc arr.c
 1737  ./a.out
 1738  vi arr.c
 1739  gcc arr.c
 1740  ./a.out
 1741  vi arr.c
 1742  gcc arr.c
 1743  ./a.out
 1744  vi arr.c
 1745  gcc arr.c
 1746  vi arr.c
 1747  gcc arr.c
 1748  vi arr.c
 1749  ./a.out
 1750  vi arr.c
 1751  mkdir 1
 1752  cd 1
 1753  vim 1.c
 1754  gcc 1.c
 1755  ./a.out
 1756  vi 2.c
 1757  gcc 2.c
 1758  vi 2.c
 1759  gcc 2.c
 1760  vi 2.c
 1761  cd ..
 1762  vi even.c
 1763  gcc even.c
 1764  vi even.c
 1765  gcc even.c
 1766  vi even.c
 1767  gcc even.c
 1768  vi even.c
 1769  gcc even.c
 1770  vi even.c
 1771  gcc even.c
 1772  vi even.c
 1773  gcc even.c
 1774  vi even.c
 1775  gcc even.c
 1776  vi even.c
 1777  gcc even.c
 1778  vi even.c
 1779  gcc even.c
 1780  vi even.c
 1781  gcc even.c -lpthread
 1782  ./a.out
 1783  gcc even.c -lpthread
 1784  ./a.out
 1785  vi gcc even.c
 1786  cd fun_ptr/
 1787  ls
 1788  gcc add_funp.c 
 1789  ./a.out
 1790  vi add_funp.c 
 1791  gcc add_funp.c 
 1792  vi add_funp.c 
 1793  gcc add_funp.c 
 1794  vi add_funp.c 
 1795  gcc add_funp.c 
 1796  ./a.out
 1797  vi add_funp.c 
 1798  gcc add_funp.c 
 1799  vi add_funp.c 
 1800  gcc add_funp.c 
 1801  ./a.out
 1802  ls
 1803  vi arr_funptr.c
 1804  ls
 1805  vi print_val.c
 1806  gcc print_val.c
 1807  vi print_val.c
 1808  gcc print_val.c
 1809  vi print_val.c
 1810  gcc print_val.c
 1811  ./a.out
 1812  vi print_val.c
 1813  gcc print_val.c
 1814  ./a.out
 1815  vi print_val.c
 1816  ls
 1817  vi lar_funp.c
 1818  gcc lar_funp.c
 1819  ./a.out
 1820  ls
 1821  vi uniq_ele_funp.c 
 1822  gcc uniq_ele_funp.c 
 1823  vi uniq_ele_funp.c 
 1824  gcc uniq_ele_funp.c 
 1825  ./a.out
 1826  ls
 1827  vi lar_sma_funp.c 
 1828  gcc lar_sma_funp.c 
 1829  ./a.out
 1830  vi lar_sma_funp.c 
 1831  ls
 1832  vi arr_funptr.c
 1833  cd ..
 1834  cd fun_ptr
 1835  mkdir doublr_ptr
 1836  cd double_ptr
 1837  mkdir double_ptr
 1838  cd double_ptr
 1839  vi 1.c
 1840  gcc 1.c
 1841  ./a.out
 1842  vi 2.c
 1843  mkdir linuxcommands
 1844  cd linuxcommands/
 1845  vi 1.c
 1846  ls
 1847  touch 2.c
 1848  ls
 1849  cat 1.c
 1850  move 2.c
 1851  mv 2.c
 1852  rmdir
 1853  cd ..
 1854  ls
 1855  rmdir linuxcommands/
 1856  sudo rmdir linuxcommands/
 1857  cd linuxcommands/
 1858  \
 1859  ls
 1860  rm.c
 1861  rm *.c
 1862  ls
 1863  cd ..
 1864  rmdir linuxcommands/
 1865  ls
 1866  mkdir 4thjuly
 1867  cd 4thjuly/
 1868  ls
 1869  mk 1.c
 1870  touch 2.c
 1871  ls
 1872  vi 1.c
 1873  rm 2.c
 1874  ls
 1875  touch 2.c
 1876  ls
 1877  mv 1.c 2.c
 1878  ls
 1879  cat 2.c
 1880  touch 1.c
 1881  cp 2.c 1.c
 1882  ls
 1883  cat 1.c
 1884  cat 2.c
 1885  head 1.c
 1886  vi 1.c
 1887  cd 4thjuly/
 1888  ls
 1889  ls -al
 1890  clear
 1891  ls
 1892  cat 1.c
 1893  grep 'w' 1.c
 1894  grep 'd' 1.c
 1895  grep 'wf' 1.c
 1896  nano 4.c
 1897  cd 4thjuly/
 1898  \
 1899  ls
 1900  mkdir linux
 1901  cd linux
 1902  ls
 1903  vi 1.c
 1904  ls
 1905  touch 2.text
 1906  ls
 1907  touch 3.c
 1908  ls
 1909  rm 3.c
 1910  ls
 1911  cat 1.c
 1912  cat 2.c
 1913  cat 2.text
 1914  mv 1.c 2.text
 1915  ls
 1916  cat 2.text
 1917  touch 1.c
 1918  cat 1.c
 1919  ls
 1920  cp 2.text 1.c
 1921  ls
 1922  cat 1.c
 1923  cat 2.text
 1924  vi 1.c
 1925  head 1.c
 1926  tail1.c
 1927  tail 1.c
 1928  ls -al
 1929  chmod 777 1.c
 1930  ls -al
 1931  cat 1.c
 1932  vi 1.c
 1933  ./a.out
 1934  vi 1.c
 1935  gcc 1.c
 1936  ./a.out
 1937  chmod 666 1.c
 1938  ls -al
 1939  ./a.out
 1940  gcc 1.c
 1941  ./a.out
 1942  vi 1.c
 1943  gcc 1.c
 1944  vi 1.c
 1945  gcc 1.c
 1946  vi 1.c
 1947  gcc 1.c
 1948  vi 1.c
 1949  gcc 1.c
 1950  ./a.out
 1951  chmod 555 1.c
 1952  ls -al
 1953  vi 1.c
 1954  mkdir 11
 1955  cd 11
 1956  ls
 1957  nano 1.c
 1958  cd ll
 1959  cd 11
 1960  touch 1.c
 1961  ls
 1962  cd ..
 1963  rmdir 11
 1964  cd 11
 1965  ls
 1966  rm 1.c
 1967  ls
 1968  cd ..
 1969  rmdir 11
 1970  ls
 1971  sudo rmdir 11
 1972  ls
 1973  cd 11
 1974  ls
 1975  cd ..
 1976  sudo rmdir 11
 1977  rmdir 11
 1978  cd 11
 1979  ls
 1980  cd ..
 1981  rmdir 11
 1982  cd 11
 1983  ls
 1984  clear
 1985  grep | "tuywgjhqjagsuywqiukhwkj"
 1986  grep  -i "tuywgjhqjagsuywqiukhwkj"
 1987  grep  -i "tuywgjhqjagsuywqiukhwkj" 1.c\
 1988  echo -e  "tuywgjhqjagsuywqiukhwkj"
 1989  echo -e  "tuywgjhqjagsuywqiukhwkjtyutghjhgfhdfghggdfgggjgfhghvjhvuyhgvbhjggfghcvj"
 1990  echo -n  "tuywgjhqjagsuywqiukhwkjtyutghjhgfhdfghggdfgggjgfhghvjhvuyhgvbhjggfghcvj"
 1991  ls
 1992  touch 1.c
 1993  ls
 1994  vi 1.c
 1995  ls
 1996  cd linux
 1997  ls
 1998  rm *.c
 1999  rm 1.c
 2000  ls
 2001  mkdir linux_commands
 2002  cd linux_commands/
 2003  ls
 2004  cd ..
 2005  rmdir linux_commands/
 2006  ls
 2007  mkdir linux_commands
 2008  cd  linux_commands/
 2009  vi 1.c
 2010  touch 2.c
 2011  ls
 2012  vat 1.c
 2013  cat 1.c
 2014  cat 2.c
 2015  mv 1.c 2.c
 2016  ls
 2017  touch 1.c
 2018  ls
 2019  cp 2.c 1.c
 2020  ls
 2021  cat 1.c
 2022  cat 2.c
 2023  vi 1.c
 2024  head 1.c
 2025  tail 1.c
 2026  ls
 2027  ls|grep 1.c
 2028  ls|grep 3.c
 2029  ls|grep 1.c
 2030  cd ~
 2031  ls
 2032  ls |grep python
 2033  ls |grep python1
 2034  cd linux_commands/
 2035  man awk
 2036  echo -e "wyeiujhkdiwhudhkjdkiqduyhjskjhdjkljkfhwiuehjdjkwoqeuidjshhdskjwoiejdkksufjic"
 2037  echo -n "wyeiujhkdiwhudhkjdkiqduyhjskjhdjkljkfhwiuehjdjkwoqeuidjshhdskjwoiejdkksufjic"
 2038  ls
 2039  cat 1.c
 2040  more 4.c
 2041  more 2.c
 2042  ls -la | more
 2043  pwd
 2044  ls -la | less
 2045  sort 1.c
 2046  vi 1.c
 2047  sort 1.c
 2048  history


 

