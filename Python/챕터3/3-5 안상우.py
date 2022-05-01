def sample(n):
  list=[0]*n
  import random
  for i in range(n):
    if random.randrange(1,101)<=50:
      sum=0
      for i in range(n):
        sum+=list[i]
  return sum


timelist=[]
n=2**6
while n<=2**13:
  import time
  start_time=time.time()

  sample(n)

  end_time=time.time()
  time_spent=end_time-start_time
  
  timelist.append(time_spent)
  n=n*2
  
for i in range(7):
  print("O:",timelist[i+1]/timelist[i])
  
'''
O: 0.09091894940030798
O: 2.9990458015267176
O: 4.001193127585109
O: 4.0
O: 4.353731387789993
O: 4.211018432164452
O: 4.066928005781593
'''