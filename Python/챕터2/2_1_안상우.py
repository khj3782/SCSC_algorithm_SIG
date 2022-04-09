def seq (n):
    if n==1:
      return 0
    else:
      return (seq(n-1)*5)+3


n=int(input("구할 항의 번호를 입력하세요: "))
if n>=1:
   print (seq(n))
else:
   print ("wrong input")