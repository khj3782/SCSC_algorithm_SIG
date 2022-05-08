# -*- coding: utf-8 -*-
"""
Created on Sun May  8 08:58:58 2022

@author: 82108
"""

def pop(self, i:int, k:int):
    if(i >= 0 and i <= self.__numItems-1):
        prev = self.__getNode(i-1)
        curr = prev.next
        cnt = 1
        for a in range(k-i):
            curr = curr.next
            cnt += 1
            if curr.next == None:
                break
        prev.next = curr.next
        self.__numItems -= cnt