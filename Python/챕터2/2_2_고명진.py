
n = int(input())
i = 0

def seq(x):
    global i
    i = i+1
    if x==1:
        return 1
    else:
        return seq(x-1)+3

seq(n)
print(i)

# 답 : n회 호출된다. 