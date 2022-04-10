n = int(input())

def sequence(n):
  if n == 0:
    return 0
  else:
    return 5 * sequence(n - 1) + 3

 sequence(n)
