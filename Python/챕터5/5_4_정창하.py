# -*- coding: utf-8 -*-
"""
Created on Sun May  8 08:11:28 2022

@author: 82108
"""

def printInterval(i:int, j:int):
    curr = self.getNode(i)
    end = self.getNode(j)
    for i in range(j-i+1):
        print(curr.item, end=' ')
        
    