# Get to Prime Number

"""
m,n=map(int,input().split())
a=set(range(2,n+1))-set(range(2,m))
b=set([i*j for i in range(2,n+1)for j in range(2,int(n**.5)+1)if i*j<=n])
#print(a)
#print(b)
c=(a-b)
print(c)

m,n=map(int,input().split())
print('\n'.join(map(str,set(range(2,n+1))-set(range(2,m))-set([i*j for i in range(2,n+1)for j in range(2,int(n**.5)+1)if i*j<=n]))))
"""
"""
m,n=map(int,input().split())
l=[1,1]+[0]*n
for i in range(2,n+1):
 if l[i]==0:
  if i >= m:
   print(i)
  for j in range(i*i,n+1,i):
   l[j] = 1"""
   
m,n=map(int,input().split())
l=[1,1]+[0]*n
for i in range(2,n+1):
 if l[i]==0:
  if i>=m:print(i)
  for j in range(i*i,n+1,i):l[j]=1
   
