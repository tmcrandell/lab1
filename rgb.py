#!/usr/bin/python

import serial

s=serial.Serial("/dev/ttyACM0")

while(True):
    l=s.readline()
    colors= l.rstrip().split(",")
    rgb= [int(val) for val in colors]
    print rgb


    """
    for i in range(len(colors)):
        colors[i]=int(colors[i])
    """
