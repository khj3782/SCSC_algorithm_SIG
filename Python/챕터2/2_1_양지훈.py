n = int(input("원하는 항은 ? "))

def algo(n):
    if n == 0:
        return 0
    else :
        return 5*algo(n-1)+3

print("%d항의 값은" %n, algo(n))