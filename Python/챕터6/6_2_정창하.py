# -*- coding: utf-8 -*-
"""
Created on Thu May 12 21:39:24 2022

@author: 82108
"""

class ListStack:
    def __init__(self):
        self.__stack = []
    
    def push(self, x):
        self.__stack.insert(0, x)
    
    def pop(self):
        return self.__stack.pop(0)
    
    def top(self):
        if self.isEmpty():
            print('No element in stack')
            return None
        else:
            return self.__stack[0]
    
    def isEmpty(self) -> bool:
        return not bool(self.__stack)
        # return len(self.__stack) == 0
    
    def popAll(self):
        self.__stack.clear()
        
    def printStack(self):
        print("Stack: ")
        for i in range(len(self.__stack)):
            print('stack[', i, ']:', self.__stack[i])