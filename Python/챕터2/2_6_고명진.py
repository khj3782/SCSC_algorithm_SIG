
def move(n,a,b,c):
        move(n-1,a,c,b)
        move(n-1,c,b,a)


move(5,1,2,3)

# RecursionError: maximum recursion depth exceeded 발생