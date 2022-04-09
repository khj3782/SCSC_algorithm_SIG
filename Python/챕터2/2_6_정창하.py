# -*- coding: utf-8 -*-
"""
Created on Sun Apr 10 00:41:08 2022

@author: 82108
"""

def move(n, a, b, c):
        move(n-1, a, c, b)
        move(n-1, c, b, a)
        
move(3, 'a', 'b', 'c') #example

#answer: 경계 조건이 빠진채로 move 함수의 n이 -무한대로 끝없이 이동.
#        stack overflow 오류 발