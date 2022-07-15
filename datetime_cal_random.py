
###datetime

import datetime
x=datetime.datetime.now()
print(x)#2022-07-15 11:55:50.322516

import datetime as dt
x=dt.datetime.now()
print(x)#2022-07-15 11:55:50.322516

import datetime as dt
x=dt.dt.now()
print(x)#it gives error

from datetime  import *
x=datetime.now()
print(x)#2022-07-15 12:01:53.218461
print(x.year)#2022
print(x.month)#7
print(x.day)#15
print(x.hour)#12
print(x.second)#53
print(x.microsecond)#218461

#our own code
from datetime import *
x=datetime(2022,12,8)
print(x)#2022-12-08 00:00:00

from datetime import *
x=datetime(2022,13,8)
print(x)#ValueError: month must be in 1..12



from datetime import *
x=datetime(2022,11,32)
print(x)#ValueError: day is out of range for month

from datetime import *
x=date(2022,11,20)#time is removed
print(x)#2022-11-20


from datetime import *
x=time(23,11,24)#date is removed
print(x)#23:11:24

from datetime import *
x=time(24,11,24)#date is removed
print(x)#ValueError: hour must be in 0..23

from datetime import *
x=time(22,60,24)#date is removed
print(x)#ValueError: minute must be in 0..59

from datetime import *
x=time(22,50,66)#date is removed
print(x)#ValueError: second must be in 0..59



from datetime import *
x=datetime.now()
print(x)#2022-07-15 12:27:01.606661
print(x.strftime('%A'))#Friday-->day as name full
print(x.strftime('%a'))#Fri-->day as short
print(x.strftime('%B'))#July-->month name as full
print(x.strftime('%b'))#Jul-->month name as short
print(x.strftime('%C'))#20-->year as century
print(x.strftime('%c'))#Fri Jul 15 12:27:01 2022-->local date & time
print(x.strftime('%w'))#5-->it gives day no
print(x.strftime('%d'))#15-->it gives day of the month
print(x.strftime('%m'))#07-->month as number(01-12)
print(x.strftime('%H'))#12-->hour(00-23)
print(x.strftime('%I'))#12-->hour(00-23)
print(x.strftime('%p'))#pm
print(x.strftime('%M'))#27-->minute 00 -59
print(x.strftime('%S'))#01-->second 00-59
print(x.strftime('%f'))#606661-->microseconds
print(x.strftime('%x'))#07/15/22-->local version date
print(x.strftime('%X'))#12:27:01-->local version of time
print(x.strftime('%y'))#22-->year as short
print(x.strftime('%Y'))#2022-->year as full

from datetime import *
today = date.today()
print("Today's date is", today)
#Today's date is 2022-07-15

from datetime import *
today = date.today()
print("Current year:", today.year)#Current year: 2022
print("Current month:", today.month)#Current month: 7
print("Current day:", today.day)#Current day: 15



###calender
import calendar 
yy = 2017
mm = 11 
# display the calendar
print(calendar.month( yy,mm))#-->we give only thos format
print(calendar.month( mm,yy))##error


from calender import *
mm=3
yy=2022
print(month(yy,mm))

from calender import *
print(month(1947,8))#here we give directly

from calender import *
print(leapdays(1950,2022))#-->find leap year

from calender import *
print(isleap(2021))#-->it gives whether it is leap year or not


###random-->it generate float values b/w 0&1

from random import  *
for i in range(10):
    print(random())

#o/p:0.4290687886836273
#0.9293347842477566
#0.2637107982120993
#0.8034418100830604
#0.7001444079285959
#0.01630110368869453
#0.1727932936693617
#0.8186149286486291
#0.35654137613215986
#0.9129821282070117


###randint()-->it genrates integer values b/w 2 numbers

from random import  *
for i in range(5):
    print(randint(2,10))#3,4,2,6,7

###uniform ()
from random import  *
for i in range(3):
    print(uniform(1,8))
#o/p:
#4.629300632334115
#4.380839471569827
#7.330256739828204

###randrange(start,stop,step)
from random import  *
for i in range(3):
    print(randrange(1,10,2))# 3,9,3

### choice ():
from random import  *
l=["sai","ram","ashok","sree"]
print(choice(l))# ashok -->it give every time different name
