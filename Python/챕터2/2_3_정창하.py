# -*- coding: utf-8 -*-
"""
Created on Sun Apr 10 00:09:09 2022

@author: 82108
"""

global a
a = 0

def fib(n):
    global a
    a += 1
    if n== 1 or n==2:
        print(a)
        return 1
    else:
        print(a)
        return fib(n-1) + fib(n-2)
 
fib(4) #example

#피보나치 수열을 구하는 재귀함수의 경우,
#함수가 호출되는 횟수만을 출력하도록 코드 짜지 못해
#부득이하게 한번 호출할 때마다 따라서 출력을 하도록 코드를 짰습니다.