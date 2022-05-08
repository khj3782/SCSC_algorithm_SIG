# -*- coding: utf-8 -*-
"""
Created on Sun May  8 10:45:40 2022

@author: 82108
"""

def twoNodesInSameList(node1, node2):
    while node1.next != None:
        node1 = node1.next
    while node2.next != None:
        node2 = node2.next
    return node1 == node2