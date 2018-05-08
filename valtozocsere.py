#!/usr/bin/env python

a=5
b=6
s="a: " + repr(a) + " b: " + repr(b)
print(s)

a=a*b
b=a/b
a=a/b
s="a: " + repr(a) + " b: " + repr(b)
print(s)

a=a+b
b=a-b
a=a-b
s="a: " + repr(a) + " b: " + repr(b)
print(s)

a=a^b
b=a^b
a=a^b
s="a: " + repr(a) + " b: " + repr(b)
print(s)