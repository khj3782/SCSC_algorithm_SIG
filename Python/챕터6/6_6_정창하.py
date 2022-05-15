# -*- coding: utf-8 -*-
"""
Created on Sun May 15 13:50:41 2022

@author: 82108
"""

def parenBalance(s):
    stack = ListStack
    cnt1 = 0
    cnt2 = 0
    cnt3 = 0
    cnt4 = 0
    cnt5 = 0
    cnt6 = 0
    
    for element in s:
        stack.push(element)
        
    for i in range(len(s)):
        if stack.pop() == '(':
            cnt1 += 1
        elif stack.pop() == ')':
            cnt2 += 1
        elif stack.pop() == '[':
            cnt3 += 1
        elif stack.pop() == ']':
            cnt4 += 1
        elif stack.pop() == '{':
            cnt5 += 1
        elif stack.pop() == '}':
            cnt6 += 1
    
    return (cnt1 == cnt2) & (cnt3 == cnt4) & (cnt5 == cnt6)