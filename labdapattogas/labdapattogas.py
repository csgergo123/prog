import os
from time import sleep

def sClear():
    os.system('sClear' if os.name=='nt' else 'clear')

def gotoxy(x,y):
    for i in range(y):
        print()
    for i in range(x):
        print(" ", end="")
    print("o")

x = 10
y = 20

xx = 1
yy = -1

yArray = []
xArray = []

for i in range(23):
    yArray.append(1)

yArray[1] = -1
yArray[22] = -1


for i in range(80):
    xArray.append(1)


xArray[1] = -1
xArray[79] = -1


while (1):
    for i in range(37):
        print("_", end="")

    print("x=", x, end="")
    print("y=", y, end="")

    for i in range(37):
        print("_", end="")

    gotoxy(x,y)

    x+=xx
    y+=yy

    xx*=xArray[x]
    yy*=yArray[y]

    sleep(0.5)
    sClear()