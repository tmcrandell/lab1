#!/usr/bin/python

import serial
import pygame, sys
from pygame.locals import *
pygame.init()
DISPLAYSURF=pygame.display.set_mode((500,400), 0, 32)
pygame.display.set_caption('RGB Lab')

s=serial.Serial("/dev/ttyACM0")

while(True):
    l=s.readline()
    colors= l.rstrip().split(",")
    rgb= [int(val) for val in colors]
    
    DISPLAYSURF.fill(rgb)

    for event in pygame.event.get():
      if event.type == QUIT:
        pygame.quit()
        sys.exit()
    pygame.display.update()
