def sample(n):
  sum=0
  list=[0]*n
  for i in range(n):
    sum+=list[i]
  return sum

timelist=[]
n=2**15
while n<=2**25:
  import time
  start_time=time.time()

  sample(n)

  end_time=time.time()
  time_spent=end_time-start_time
  
  timelist.append(time_spent)
  n=n*2
  
for i in range(10):
  print("O:",timelist[i+1]/timelist[i])
  
'''
O: 2.0047709923664123
O: 1.8705080913850547
O: 1.933316369535139
O: 2.2068852054456465
O: 2.0465632920828987
O: 1.8248672256908272
O: 2.204758335520741
O: 1.8539467852937754
O: 1.9130254625667475
O: 2.043851315776878
'''
