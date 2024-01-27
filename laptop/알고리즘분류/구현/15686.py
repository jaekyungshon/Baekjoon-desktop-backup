# Chicken Delivery

#l=[];exec('l+=[[*map(int,input().split())]];'*n)
"""
n,m=map(int,input().split())
l=[[*map(int,input().split())]for _ in range(n)]
c=[(i+1,j+1)for i in range(n) for j in range(n)if l[i][j]==2]
h=[(i+1,j+1)for i in range(n) for j in range(n)if l[i][j]==1]
ch=[*combinations(c,m)]
"""

"""import itertools;n,m=map(int,input().split());l=[[*map(int,input().split())]for _ in range(n)];c,h=[],[]
for i in range(n):
 for j in range(n):
  if l[i][j]==2:c+=[(i+1,j+1)]
  elif l[i][j]==1:h+=[(i+1,j+1)]
p=[[abs(a-i)+abs(b-j)for a,b in h]for k in [*itertools.combinations(c,m)] for i,j in k]
if len(c)>m:print(min([sum([min(j)for j in zip(p[i],p[i+m-1])])for i in range(0,len(p),m)]))
else:
 for i in range(1,m):
  for j in range(len(h)):p[0][j]=min(p[i][j],p[0][j])
 print(sum(p[0]))"""

import itertools;n,m=map(int,input().split());l=[[*map(int,input().split())]for _ in range(n)];c,h=[],[];r=999999
for i in range(n):
 for j in range(n):
  if l[i][j]==2:c+=[(i+1,j+1)]
  elif l[i][j]==1:h+=[(i+1,j+1)]
for C in itertools.combinations(c,m):
 d=0
 for i,j in h:d+=min(abs(x-i)+abs(y-j)for x,y in C)
 r=min(r,d)
print(r)