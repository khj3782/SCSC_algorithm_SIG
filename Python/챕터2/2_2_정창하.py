# -*- coding: utf-8 -*-
"""
Created on Sun Apr 10 00:01:24 2022

@author: 82108
"""

global t
t = 0 

def seq(n):
    global t
    t += 1
    if n == 1:
        print(t)
        return 1
    else:
        return seq(n-1)+3
    
seq(3) #example

#answer: n