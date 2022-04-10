cnt = 0

def move(n, a, b, c):
    global cnt
    if n > 0:
        move(n - 1, a, c, b)
        cnt += 1
        move(n - 1, c, b, a)

move(5, 0, 0, 0)
print(cnt)

# 답: 31회
# 함수 호출 횟수가 2 ** (n + 1) - 1 일 경우 문제에서 제시된 원반 옮기기는 2 ** n - 1회 일어난다.
