# Print Queue

"""
a=input()
l=[[i,j]for i,j in enumerate(map(int,input().split()))]
m=max(l,key=lambda x:x[-1])
c=1
"""

"""
p=int(input())
while p:
 a=input();c=1;l=[[i,j]for i,j in enumerate(map(int,input().split()))];m=max(l,key=lambda x:x[-1])
 while 1:
  b=l[0]
  if b[1]==m[1]:
   if b[0]==int(a[2]):print(c);break
   else:l.pop(0);c+=1;m=max(l,key=lambda x:x[-1])
  else:l.append(l.pop(0))
 p-=1

"""

p=int(input())
while p:
 a=input();c=list(enumerate(map(int,input().split())));i=1
 while len(c)!=0:
  j=c.pop(0)
  if len(list(filter(lambda x:x[1]>j[1],c)))!=0:c.append(j);continue
  else:
   if j[0]==int(a[2]):print(i);break
   else:i+=1
 p-=1

