cnt = 0

def fib(n):
  global cnt
  if n == 1 or n == 2:
    cnt += 1
    return 1
  else:
    cnt += 1
    return fib(n - 1) + fib (n - 2)

print(fib(5))
print(cnt)

# 9회
