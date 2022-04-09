
i = 0

def fib(n):
    global i
    i = i+1
    if n==1 or n==2:
        return 1
    else: 
        return fib(n-1)+fib(n-2)

fib(5)
print(i) # 9회