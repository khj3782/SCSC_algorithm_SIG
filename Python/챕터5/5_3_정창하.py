# -*- coding: utf-8 -*-
"""
Created on Sun May  8 08:03:30 2022

@author: 82108
"""

def printInterval(i:int, j:int):
    prev = self.__getNode(i-1)
    curr = prev.next
    end = self.__getNode(j)
    while prev != end:
        print(curr.item, end= ' ')
        prev = curr
        curr = curr.next
    print()