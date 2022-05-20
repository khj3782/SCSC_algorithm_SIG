# -*- coding: utf-8 -*-
"""
Created on Fri May 20 20:44:14 2022

@author: 82108
"""

class ListQueue:
    def __init__(self):
        self.__queue = []
        
    def enqueue(self, x):
        self.__queue.insert(0, x)
    
    def dequeue(self):
        return self.__queue.pop()
    
    def front(self):
        return self.__queue[-1]
    
    def isEmpty(self) -> bool:
        return len(self.__queue) == 0
    
    def dequeueAll(self):
        self.__queue.clear()