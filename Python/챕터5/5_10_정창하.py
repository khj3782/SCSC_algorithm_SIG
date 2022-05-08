# -*- coding: utf-8 -*-
"""
Created on Sun May  8 13:12:37 2022

@author: 82108
"""

def lastIndexOf(self, x):
    cnt = 0
    curr = self.__head.prev
    
    while curr != self.__head:
        if curr.item == x:
            return self.__numItems - cnt
        curr = curr.prev
        cnt += 1

    return -12345