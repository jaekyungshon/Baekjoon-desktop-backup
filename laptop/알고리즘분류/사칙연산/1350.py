# Real Space Bite

from sys import stdin
inp=stdin.readline

size=int(inp())
f=map(int,inp().split())
c=int(inp());a=0

for i in f:
 if i==0:continue
 if i>c:
  if i%c==0:a+=i//c
  else:a+=i//c+1
 elif i==c:a+=1
 else:a+=1

print(a*c)