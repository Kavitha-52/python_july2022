'''a=10
print(a)#10
print(type(a))#<class 'int'>

a=10.12234
print(a)#10.12234
print(type(a))#<class 'float'>

a='a'
print(a)#a
print(type(a))#<class 'str'>

a="hello"
print(a)#hello
print(type(a))#<class 'str'>

a=1+2j
print(a)#1+2j
print(type(a))#<class 'complex'>

a=complex(2,4)
print(a)#2+4j
print(type(a))#<class 'complex'>


#int a=10---invalid syntax
#float a=10.3345
#char a='x'
# char str="string" 

#123=100-->invalid cant start with integer
A=100
print(A)#100

_a=100
print(_a)#100

_a123=100
print(_a123)#100


##literals
intvar=100
print(intvar)

floatvar=10.78
print(floatvar)

complexvar=complex(1,2)
print(complexvar)

strvar="python"
print(strvar)

boolvar=True
print(boolvar)

nonevar=None
print(nonevar)

listvar=[1,2,3,4]
print(listvar)

tuplevar=(1,2,3)
print(tuplevar)

setvar={1,2,3}
print(setvar)

dicvar={1:"one",2:"two",3:"three"}
print(dicvar)

##multiple assignment

a=b=c= 10
print(a,b,c)# 10 10 10

a,b,c,d=10,10.12,'c',"hello"
print(a,b,c,d)#10 10.12 c hello
print(d,c,b,a)#hello c 10.12 10
print(b,d,a,c)#10.12 hello 10 c

#a=None=1-->cannot assign to none

##format() functions

name="my name is {fname},I am {age}years old".format(fname="jonny",age=2)
print(name)#my name is jonny,I am 2years old
                                                      

name="my name is {0},I am {1}years old".format("jonny",2)
print(name)#my name is jonny,I am 2years old

name="my name is {},I am {}years old.".format("jonny",2)
print(name)#my name is jonny,I am 2years old


##typecasting

a=10
b=20.5
c=a+b
print(c)#30.5-->implicit type


#explicit type

a=10
print(a)#10
print(float(a))#10.0
      
b=10.12
print(b)#10.12
print(int(b))#10


##id()
a=10
print(id(a))#2921071903248
b=10
print(id(b))#2921071903248

str="pthon"
print(id(str))#2780138756208

str="Python"
print(id(str))#2780102869872


x=3
print(id(x))#2168579227952

print(id(x+0))#2168579227952

print(id(x+1))#2168579227984

x=4
print(id(x-1))#2514532041008

x=4.0
print(id(x))#2514571813712


x=1
print(id(1))#2616861327600

x=2
print(id(2))#2616861327632

print(id(1)-id(2))#32
x=1
y=x
print(x is y)#true

print(x is not y)#false

x=1
y=2
print(x is  y)#false
print(x is not y)#true

x = 5
y = "John"
print(x)#5
print(y)#join

x=1
x="hello"
print(x)#hello

x=str(3)
y=int(3)
z=float(3)
print(x,y,z)

set1 = set("GeeksForGeeks")
print("\nSet with the use of String: ")
print(set1)


##functions


def f():
    print("hello")
f()



def f():
    s="hello"
    return s    
a=f()  
print(a)


def f1():
    for i in range(10):
        print("hii",end=" ")
f1()


def f1():
    s="python"
    for i in s:
        print(i,end=" ")
    
f1()

##fun with 1 parameter

def f(a):
    print(a+2)#4
f(2)

def f(a):
    print(a*2)#8
f(a=int(input("enter a number:")))#4

def f(a):
    print(a*2)# hii hii
f("hii ")

##fun with 2 parameters

def add(a,b):
    print("sum:",a+b)
add(2,6)


def add(a,b):
    return a+b    
x=add(2,6)
print("sum is:",x)


def add(a,b):
    print("sum:",a+b)
add(a=int(input("enter a value:")),b=int(input("enter b value")))



def check(a,b):
    if(a>b):
        print(a,"is greater")
    else:
        print(b,"is greater")
check(10,20)

def check(a,b,c):
    if(a>b and a>c):
        print(a,"is greater")
    elif(b>c):
        print(b,"is greater")
    else:
        print( c,"is gretaer")
check(10,20,30)

def sum_sub(a,b):
    sum=a+b
    sub=a-b
    return sum,sub
x,y=sum_sub(10,20)
print("sum is:",x,"\nsub is :",y)


##functions with variables

def f1():
    a=10
    print(a)
    #print(b)
    
def f2():
    b=20
    print(b)
   # print(a)
f1()
f2()


a=10
def f1():
    print(a)
def f2():
    global a
    x=a+10
    print(a)
    print(x)
f1()
f2()

a=10
def f1():
    global a
    a=50
    print(a)#50
def f2():
    print(a)#50
f1()
f2()


a=10
def f1():
    global a
    a=50
    print(a)#50
def f2():
    print(a)#10
f2()
f1()


#positional arg

def sub(a,b):
    print("sub is :",a-b)
sub(1,2)#sub is : -1
sub(10,5)#sub is :5

#keyword arg

def sub(a,b):
    print("sub is :",a-b)
sub(a=1,b=2)#sub is : -1
sub(b=10,a=5)#sub is : -5

#default arg

def f(course):
    print("course is :",course)#course is : c
f("c")



def f(course):
    print("course is :",course)#course is : python
f("python")

def my_function(country = "Norway"):
  print("I am from " + country)

my_function("Sweden")
my_function("India")
my_function()
my_function("Brazil")



#variable length arg

def f1(*a):
    print(a)
f1(1)
f1(1,2)
f1(1,2,3)
f1(1,2,3,4)
f1("hii","how are u",2 ,'K')
#o/p:
#(1,)
#(1, 2)
#(1, 2, 3)
#(1, 2, 3, 4)
#('hii', 'how are u', 2, 'K')

#positional  only arg

def add(a,b):#normal method
    print("sum is:",a+b)
add(1,2)
add(a=10,b=20)

def add(a,b,/):#normal method
    print("sum is:",a+b)
add(1,2)
#add(a=10,b=20)-- type error
   

#keyword  only arg

def add(*,a,b):#normal method
    print("sum is:",a+b)
#add(1,2)-->type error positional arg
add(a=10,b=20)

#nested fun

def f1():
    print("welcome")
    def f2():
        print("thundersoft")
    f2()
f1()


def my_function(food):
  for x in food:
    print(x)

fruits = ["apple", "banana", "cherry"]

my_function(fruits)

def tri_recursion(k):
  if(k > 0):
    result = k + tri_recursion(k - 1)
    print(result)
  else:
    result = 0
  return result

print("\n\nRecursion Example Results")
tri_recursion(6)

def add(num1, num2) 
    """Add two numbers"""
    num3 = num1 + num2
 
    return num3
 
 
# Driver code
num1, num2 = 5, 15
ans = add(num1, num2)
print(ans)

def evenOdd(x):
    if (x % 2 == 0):
        print("even")
    else:
        print("odd")
 
evenOdd(2)
evenOdd(3)

def myFun(x, y=50):
    print("x: ", x)
    print("y: ", y)
 
myFun(10)

def myFun(*argv):
    for arg in argv:
        print(arg)
 
 
myFun('Hello', 'Welcome', 'to', 'GeeksforGeeks')

def myFun(**kwargs):
    for key, value in kwargs.items():
        print("%s == %s" % (key, value))
myFun(first='Geeks', mid='for', last='Geeks')


def myFun(x):
    x[0] = 20
    print(lst)
lst = [10, 11, 12, 13, 14, 15]
myFun(lst)



def swap(x, y):
    temp = x
    x = y
    y = temp
 
 
def swap(x,y):
    temp=x
    x=y
    y=temp
    print(x,y)
    
x = 2
y = 3
swap(x, y)
print(x)
print(y)


###Operators

#arithmetic

print(5+2)#7
print(5-2)#3
print(5*2)#10
print(5/2) #2.5   
print(5//2)#2
print(5%2)#1
print(5**2)#25
print(5+3-2)#6
print(5+3*2)#11
print((5+3)*2)#16



#Relational
print(5<2)#false
print(5>2)#true
print(5<=2)#false
print(5>=2)#true
print(5==2)#false
print(5!=2)#true
print(1==int(1.0000))#true 
print(3!=3.0)#false
print(None==True)#false
print(None==False)#false
print(1==True)#true
print(0==False)#true



#assignmemt

a=7
a+=3
print(a)#10

a-=3#10-3
print(a)#7

a*=3
print(a)#21

a**=3
print(a)#9261

a/=3
print(a)#3087.0

a%=3
print(a)#0.0

##logical
print((2<3 and 3<5))#true
print((2<3 and 5<3))#false
print((1>2 and 5<6))#false

print((2<3 or 3<5))#true
print((2<3 or 5<3))#true
print((1>2 or 5<6))#true
print((1>2 or 5>6))#true


print(not(3>5))#true
print(not(3<5))#false
print(not(3==5))#true
print(not(3!=5))#false

#membership

l=[1,2,3,4,5,6]
print(1 in l)#true
print(10 in l)#false
print(10 not in l)#true
print(2 not in l)#false

#identity

a=2
b=2
print(a is b)#true
print( a is not b)# false
print(id(a),id(b))#2273880441104 2273880441104

a=2
b=3
print(a is b)#false
print( a is not b)# true
print(id(a),id(b))#1415539589392 1415539589424

a="sai"
b="Sai"
print(a is b)#false
print( a is not b)# true
print(id(a),id(b))#1760788404336 1760788404464

a=[1,2,3]
b=[1,2,3]
c=a
print(a is c)#true
print(b is a)#false
print(id(a))#2657759595776
print(id(c))#2657759595776
print(id(b))#2657759595976

#bitwise operators
a=2
b=4
print(bin(a))#0b10
print(bin(b))#0b100

print(bin(a&b))#0b0
print(a&b)#0

print(bin(a|b))#0b110
print(a|b)#6

print(bin(a^b))#0b110
print(a^b)#6

a=8
print(a<<2)#32
print(a>>2)#2


##control statements

i=10
if i==10:
    print("True")#true

i=10
if i==10:
    print("true")#true
else:
    print("false")

i=int(input("enter a number:"))
j=int(input("enter a number:"))
if(i>j):
    print(i,"is greater")
else:
    print(j,"is greater")

    
i=int(input("enter a number:"))
if(i==1):
    print("one")
elif(i==2):
    print("two")
elif(i==3):
    print("three")
elif(i==4):
    print("four")
else:
    print("invalid")

a = 2
b = 330

print("A") if a > b else print("B")#B

fruits=["apple","banana","grapes","mango"]
for i in fruits:
    print(i)
#o/p:apple
#banana
#grapes
#mango

str="apple"
for i in str:
    print(i,end=" ")#a p p l e


    
fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)
  if x == "banana":
    break#apple banana

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    break
  print(x)#apple 

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    continue
  print(x)#apple cherry
  

for x in range(6):
  print(x,end=" ")#0 1 2 3 4 5

for x in range(6,0,-1):
    print(x,end=" ")# 6 5 4 3 2 1

for x in range(2, 30, 3):
  print(x,end=" ")#2 5 8 11 14 17 20 23 26 29

for x in range(6):
  if x == 3: break
  print(x,end=" ")# 0 1 2
else:
  print("Finally finished!")


adj = ["red", "big", "tasty"]
fruits = ["apple", "banana", "cherry"]

for x in adj:
  for y in fruits:
    print(x, y)
#o/p:red apple
#red banana
#red cherry
#big apple
#big banana
#big cherry
#tasty apple
#tasty banana
#tasty cherry

#while
i = 1
while i < 6:
  print(i,end=" ")#1 2 3 4 5
  i += 1


i = 1
while i < 6:
  print(i,end=" ")#1 2 3 
  if i == 3:
    break
  i += 1

i = 0
while i < 6:
  i += 1
  if i == 3:
    continue
  print(i,end=" ")#1 2 4 5 6
         
































