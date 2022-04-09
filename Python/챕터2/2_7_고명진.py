i=0

def selectionSort(a,n):
    global i
    i = i+1
    if n>1:
        m = max(a[:n])
        l = a[n-1]
        k = a.index(m)
        a[k]= l
        a[n-1]=m
        selectionSort(a,n-1)
    else:
        return a


a = list(input())
n = len(a)
selectionSort(a,n)
print(i) # n일 때, 함수가 n번 호출


