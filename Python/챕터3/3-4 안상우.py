def matrix_mul(n):
  m1 = []
  for l in range(n):
    m1.append([0] * n)
  m2=list(m1)
  m3=list(m1)
    
  for i in range(n):
    for j in range(n):
      for k in range(n):
        m3[i][j] += m1[i][k] * m2[k][j]
  return m3

timelist=[]
n=2**4
while n<=2**9:
  import time
  start_time=time.time()

  matrix_mul(n)

  end_time=time.time()
  time_spent=end_time-start_time
  
  timelist.append(time_spent)
  n=n*2
  
for i in range(5):
  print("O:",timelist[i+1]/timelist[i])

'''
O: 8.99523128278493
O: 7.55574404919684
O: 8.043848755297354
O: 8.362299777180082
O: 8.425851143032606
'''