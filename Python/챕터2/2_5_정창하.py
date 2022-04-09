# -*- coding: utf-8 -*-
"""
Created on Sun Apr 10 00:38:52 2022

@author: 82108
"""
  
global t
t = 0

def move(n, a, b, c):
    global t
    if n > 0:
        t += 1
        print(t)
        move(n-1, a, c, b)
        move(n-1, c, b, a)
        
move(5, 'a', 'b', 'c') #example

#answer: 함수 호출 횟수는 2^(n+1)-1,
#        원반 옮기는 횟수는 2^n-1