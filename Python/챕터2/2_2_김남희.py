cnt = 0
n = int(input())

def seq(n):
    global cnt
    if n == 1:
        cnt += 1
        return 1
    else:
        cnt += 1
        return seq(n - 1) + 3
        

print(seq(n))
print(cnt)

# 답: n회
