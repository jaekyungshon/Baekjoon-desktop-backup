# Histogram

# Time Over
"""
i=input;n=int(i());l=[0]+[int(i())for _ in[0]*n]+[0];c=[0];a=0
for i in range(1,n+2):
 while(c and(l[c[-1]]>l[i])):d=c.pop();a=max(a,(i-1-c[-1])*l[d])
 c+=[i]
print(a)"""

import sys;p=sys.stdin.readline
l=[0]+[int(p())for _ in[0]*int(p())]+[0];s,a=[0],0
for i in range(1,len(l)):
 while s and l[s[-1]]>l[i]:e=s.pop();a=max(a,(i-1-s[-1])*l[e])
 s+=[i]
print(a)