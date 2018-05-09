#!/usummr/bin/env python

a = 10
b = 20
summ = "a: " + repr(a) + " b: " + repr(b)
print(summ)

a = 10
b = 20

a = a + b
b = a - b
a = a - b
summ = "a: " + repr(a) + " b: " + repr(b)
print(summ)

a = 10
b = 20

a = a * b
b = a / b
a = a / b
summ = "a: " + repr(a) + " b: " + repr(b)
print(summ)

a = 10
b = 20

a = a ^ b
b = a ^ b
a = a ^ b
summ = "a: " + repr(a) + " b: " + repr(b)
print(summ)