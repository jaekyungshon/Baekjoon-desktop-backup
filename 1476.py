# Calculate to Date

e,s,m=map(int,input().split())
n=1;a=1;b=1;c=1
while 1:
 if a!=e or b!=s or c!=m:
  n+=1;a+=1;b+=1;c+=1
  if a>15:a=1
  if b>28:b=1
  if c>19:c=1
 else:break
print(n)