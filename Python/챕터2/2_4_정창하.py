# -*- coding: utf-8 -*-
"""
Created on Sun Apr 10 00:23:31 2022

@author: 82108
"""

global t
t = 0

def move(n, a, b, c):
    global t
    t += 1
    print(t)
    if n > 0:
        move(n-1, a, c, b)
        move(n-1, c, b, a)
        
move(5, 'a', 'b', 'c') #answer: 63
    