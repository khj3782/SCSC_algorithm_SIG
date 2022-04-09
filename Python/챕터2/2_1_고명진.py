
n = int(input("n="))

def a(x):
    if x==0:
        return 0
    else:
        return 5*a(x-1)+3

print(a(n))

# a(n)=3/4 * (5^(n-1)-1)
