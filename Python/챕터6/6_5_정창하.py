# -*- coding: utf-8 -*-
"""
Created on Sun May 15 12:33:03 2022

@author: 82108
"""

def parenBalance(s):
    stack = ListStack
    
    for element in s:
        if element == '(':
            stack.push('(')
        elif element == ')':
            if stack.isEmpty():
                return False
            else:
                stack.pop()
                
    return stack.isEmpty()
