i = 0
def move(n,a,b,c):
    global i
    if n>0:
        move(n-1,a,c,b)
        i = i+1
        move(n-1,c,b,a)
    else:
        return 0

move(5,1,2,3)
print(i)

# 31회
# move 함수의 호출 횟수보다 2^(n)만큼 적다.