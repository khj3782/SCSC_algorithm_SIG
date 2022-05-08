# -*- coding: utf-8 -*-
"""
Created on Sun May  8 09:08:25 2022

@author: 82108
"""

def add(self, x):
    prev = self.__head
    curr = prev.next
    NewNode = BidirectNode(x, None, None)
    
    while curr.next != None:
        if x <= curr.item:
            prev.next = NewNode
            NewNode.prev = prev
            NewNode.next = curr
            curr.prev = NewNode
            break
        prev = curr
        curr = curr.next
        
    if curr.next == None:
        curr.next = NewNode
        NewNode.prev = curr
  
    self.__numItems += 1