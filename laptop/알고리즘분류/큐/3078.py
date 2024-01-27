# Good Friends

"""
n,k=map(int,input().split());c=0
q=[*enumerate(eval('input(),'*n))]
while q!=[]:
 e=q.pop(0)
 for i in q:
  if i[0]-e[0]<=k:
   if len(i[1])==len(e[1]):c+=1
  else:break
print(c)
"""

n,k=map(int,input().split());c=0
q=[[]for _ in range(21)]
for i in range(n):
 a=input()
 while(q[len(a)]!=[]and i-q[len(a)][0]>k):q[len(a)].pop(0)
 c+=len(q[len(a)]);q[len(a)]+=[i]
print(c)