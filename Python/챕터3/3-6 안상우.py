import sys 
sys.setrecursionlimit(10**6)
import random
def sample(n):
  sum=0
  if n==1:
    return 1
  elif n>1:
    if random.randrange(1,101)<=50:
      list1=[0]*n
      for i in range(n):
        sum+=list1[i]
    sample(n-1)
    
    
timelist=[]
n=1000
while n<=1900:
  import time
  start_time=time.time()

  sample(n)

  end_time=time.time()
  time_spent=end_time-start_time
  
  timelist.append(time_spent)
  n=n+100
  
for i in range(9):
  print("O:",timelist[i+1]/timelist[0])


'''
O: 1.1875740835998478
O: 1.374946883456713
O: 1.6869888697545083
O: 1.781800967652957
O: 2.0937684044163145
O: 2.468797292360909
O: 2.750013046168527
O: 2.8750475253282044
O: 3.2812903033420557
'''