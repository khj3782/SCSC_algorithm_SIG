cnt = 0

def move(n, a, b, c):
    global cnt
    cnt += 1
    if n > 0:
        move(n - 1, a, c, b)
        move(n - 1, c, b, a)

move(5, 0, 0, 0)
print(cnt)

# 답: 63회
