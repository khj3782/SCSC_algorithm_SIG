# -*- coding: utf-8 -*-
"""
Created on Sun May  8 10:49:25 2022

@author: 82108
"""

def lastIndexOf(self, x):
    cnt = 0
    order = 0

    curr = self.__head.next
    for index in range(self.__numItems):
        if curr.item == x:
            cnt += 1
        curr = curr.next

    curr = self.__head.next
    for index in range(self.__numItems):
        if curr.item == x:
            cnt -= 1
            if cnt == 0:
                return order
        curr = curr.next
        order += 1
    
    return -12345
        


def lastIndexOf(self, x):
    self.reverse()
    lastIndex = self.__numItems-1-self.index(x)
    self.reverse()
    return lastIndex
    