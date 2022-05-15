# -*- coding: utf-8 -*-
"""
Created on Sun May 15 12:33:03 2022

@author: 82108
"""

def parenBalance(s):
    stack = ListStack
    cnt1 = 0
    cnt2 = 0
    
    for element in s:
        stack.push(element)
        
    for i in range(len(s)):
        if stack.pop() == '(':
            cnt1 += 1
        elif stack.pop() == ')':
            cnt2 += 1
    
    return (cnt1 == cnt2)