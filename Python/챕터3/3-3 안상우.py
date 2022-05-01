def sample(n):
  list=[0]*n 
  sum=0
  for i in range(n):
    for j in range(n):
      sum+=list[i]*list[j]
  return sum

timelist=[]
n=2**7
while n<=2**13:
  import time
  start_time=time.time()

  sample(n)

  end_time=time.time()
  time_spent=end_time-start_time
  
  timelist.append(time_spent)
  n=n*2
  
for i in range(6):
  print("O:",timelist[i+1]/timelist[i])

'''
O: 4.949385052034058
O: 3.807703335563414
O: 4.182410893574297
O: 4.358370254565204
O: 4.523944255433849
O: 3.7948944319759566
'''