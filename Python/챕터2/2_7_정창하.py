# -*- coding: utf-8 -*-
"""
Created on Sun Apr 10 00:50:57 2022

@author: 82108
"""

global t
t = 0

def selectionSort(A, n):
    global t
    if n > 1:
        t += 1
        k = 0
        largest = A[0]
        
        for a in range(n):
            if A[a] > largest:
                largest = A[a]
                k = a
                
        tmp = A[n-1]
        A[n-1] = A[k]
        A[k] = tmp

        selectionSort(A, n-1)
    else: print(t)

selectionSort([3,2,4,5,1], 5) #example

#answer: n-1  