### lambda or Anonymus function

'''x=lambda a:a+5
print(x(10))
print(type(x))#15

def add(x,y):
    s=lambda x,y:x+y
    print(s)
add(1,2)

s=lambda n:n*n
print(s(4))#16

s=lambda a,b:a if a>b else b
print(s(2,4))#4

s=lambda a,b,c :a if a>b and a>c else b if b>c else c
print(s(2,3,4))#4

s=lambda n: "is even" if n%2==0 else "is odd"
print(s(7))# is odd


a=10
b=20
xy=lambda a,b:a*b
print("multiplication:",xy(a,b))#200

###filter

seq=[1,2,3,4,5,6,7,8,9]
even_list=filter(lambda x : x%2==0,seq)
print(list(even_list))#[2, 4, 6, 8]

odd_list=filter(lambda x :x%2!=0,seq)
print(list(odd_list))#[1, 3, 5, 7, 9]

def fun(variable):   # functions
	letters = ['a', 'e', 'i', 'o', 'u']
	if (variable in letters):
		return True
	else:
		return False
sequence = ['g', 'e', 'e', 'j', 'k', 's', 'p', 'r']


filtered = filter(fun, sequence)

print('The filtered letters are:')
for i in filtered:
	print(i)   # e e

ages = [5, 12, 17, 18, 24, 32]

def myFunc(x):
  if x <18:
    return False
  else:
    return True

adults = filter(myFunc, ages)

for x in adults:
  print(x)# 18,24,32


###map()

seq=[1,2,3,4,5,6]
result=map(lambda x:x*2,seq)
print(list(result))#[2, 4, 6, 8, 10, 12]



seq=[1,2,3,4,5,6]
result=map(lambda x:x*x,seq)
print(list(result))#[1, 4, 9, 16, 25, 36]

seq=[1,2,3,4,5,6]
even=map(lambda x:x%2==0,seq)
odd=map(lambda x:x%2!=0,seq)
print(list(even))#[False, True, False, True, False, True]
print(list(odd))#[True, False, True, False, True, False]


def fun(a):
    return a*a
x=map(fun,(1,2,3,4))
print(list(x))#[1, 4, 9, 16]

def myfunc(a):
  return len(a)

x = map(myfunc, ('apple', 'banana', 'cherry'))

print(x)#<map object at 0x000001FED8325D20>

print(list(x))#[5, 6, 6]

def myfunc(a, b):
  return a + b

x = map(myfunc, ('apple', 'banana', 'cherry'), ('orange', 'lemon', 'pineapple'))

print(x)#<map object at 0x000001B078925CC0>

#convert the map into a list, for readability:
print(list(x))#['appleorange', 'bananalemon', 'cherrypineapple']


def myfunc(a, b):
  return a + b

x = map(myfunc, ('apple', 'banana', 'cherry'), ('orange', 'lemon'))

print(x)#<map object at 0x000001B078925DB0>

#convert the map into a list, for readability:
print(list(x))#['appleorange', 'bananalemon']


numbers = (1, 2, 3, 4)
result = map(lambda x: x + x, numbers)
print(list(result))#[2,4,6,8]


result = map(lambda x: x + x, (1,2,3,4))
print(list(result))#[2,4,6,8]


def addition(n):
    return n + n

numbers = (1, 2, 3, 4)
result = map(addition, numbers)
print(list(result))#[2, 4, 6, 8]



def addition(n):
    return n + n
result = map(addition, [1,2,3,4])
print(list(result))#[2, 4, 6, 8]

l1=[1,2,3,4,5]
l2=[10,20,30,40]
res=list(map(lambda x,y:x+y,l1,l2))
print(res)#[11, 22, 33, 44]


###reduce()-->it givees only single output
from functools import *
l1=[1,2,3,4,5,6]
res=reduce(lambda x,y:x+y,l1)
print(res)#21


from functools import *
l1=[1,2,3,4,5,6]
res=reduce(lambda x,y:x-y,l1)
print(res)# -19
