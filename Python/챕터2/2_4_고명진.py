i = 0
def move(n,a,b,c):
    global i
    i = i+1
    if n>0:
        move(n-1,a,c,b)
        move(n-1,c,b,a)
    else:
        return 0

move(5,1,2,3)
print(i) # 63회