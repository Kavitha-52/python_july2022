## main.py --> all modules in 1 file
EX:1

def add(x,y):
    print("sum :",x+y)
    return
def mul(x,y):
    print("product :",x*y)
    return
def sub(x,y):
    print("sub:",x-y)
    return

def test_calc():
    add(10,20)
    mul(10,5)
    sub(10,-20)
    return
test_calc()


o/p:
sum : 30
product : 50
sub: 30


EX:2
Python package--->package
	calc--->sub package
	    _init_.py
	    arith.py
	main.py



main.py:

from calc import arith
def test_calc():
    arith.add(10,20)
    arith.mul(10,5)
    arith.sub(10,-20)
    return
test_calc()

arith.py:

def add(x,y):
    print("sum :",x+y)
    return
def mul(x,y):
    print("product :",x*y)
    return
def sub(x,y):
    print("sub:",x-y)
    return

EX:3


main.py


from calc import addition,multiplication,subtraction
import time

def test_calc():
    addition.add(10,20)
    time.sleep(5)
    multiplication.mul(10,5)
    time.sleep(10)
    subtraction.sub(10,-20)
    return
test_calc()

ANOTHER METHOD: alias name

from calc import addition as a,multiplication as m,subtraction as s
import time

def test_calc():
    a.add(10,20)
    time.sleep(5)
    m.mul(10,5)
    time.sleep(10)
    s.sub(10,-20)
    return
test_calc()


addition.py
def add(x,y):
    print("sum :",x+y)
    return

subctraction.py
def sub(x,y):
    print("sub:",x-y)
    return

multiplication.py
def mul(x,y):
    print("product :",x*y)
    return

