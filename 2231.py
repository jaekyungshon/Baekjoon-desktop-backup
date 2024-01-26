# Digit Generator

"""
l,t,n=0,1,int(input())
while t<=n:
 if t+sum(map(int,str(t)))==n:l=t;break;
 t+=1
print(l)
"""

l,n=0,int(input())
for i in range(1,n+1):
 if i+sum(map(int,str(i)))==n:l=i;break;
print(l)