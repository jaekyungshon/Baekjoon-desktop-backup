# Coin

"""
n,k=map(int,input().split());c=0
for i in[int(input())for _ in[0]*n][::-1]:
 if i<=k:c+=k//i;k%=i
print(c)"""

n,k=map(int,input().split());c=0
for i in eval('int(input()),'*n)[::-1]:c+=k//i;k%=i
print(c)