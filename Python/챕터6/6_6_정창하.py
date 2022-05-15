# -*- coding: utf-8 -*-
"""
Created on Sun May 15 13:50:41 2022

@author: 82108
"""

def parenBalance(s):
    stack1 = ListStack
    stack2 = ListStack
    stack3 = ListStack
    
    for element in s:
        if element == '(':
            stack1.push('(')
        elif element == '[':
            stack2.push('[')
        elif element == '{':
            stack3.push('{')
        elif element == ')':
            if stack1.isEmpty():
                return False
            else:
                stack1.pop()
        elif element == ']':
            if stack2.isEmpty():
                return False
            else:
                stack2.pop()
        elif element == '}':
            if stack3.isEmpty():
                return False
            else:
                stack3.pop()
                
    return (stack1.isEmpty() & stack2.isEmpty() & stack3.isEmpty())
