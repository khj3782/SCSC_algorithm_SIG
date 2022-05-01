import sys
sys.setrecursionlimit(10000)

def sample(n):
  if n==1:
    return 1
  else:
    sum=0
    list=[0]*n
    for i in range(n):
      sum+=list[i]
    temp=sum+sample(n-1)
    return temp
  

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
O: 1.2581110670704723
O: 1.5646634162109743
O: 1.6615305875063977
O: 1.9038408995578406
O: 2.1293075913661537
O: 2.5484509025979274
O: 2.9843069948934238
O: 3.274577562620016
O: 3.8876899573233383
'''