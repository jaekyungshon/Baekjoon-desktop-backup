# Brete && Kongjun
import math, time

# Sec: 2.3972s
"""
while 1:
    start = time.time()
    n=int(input())
    if not n: break
    c,l=0,[1,1]+[0]*2*n
    for i in range(2,2*n+1):
        if l[i] == 0:
            if n<i<=2*n:
                c+=1
            for j in range(i*i,2*n+1,i):
                l[j]=1
    print(c)
    end = time.time()
    print(f"Sec:{end-start:.5f}")"""

# 496 / Sec: 0.11095

# Sec: ~0.1...
l=[0]*246913
for i in range(2,int(246912**.5)+1):
 for j in range(i*i,len(l)+1,i):l[j]=1
while 1:
 n=int(input())
 if not n:break
 print(len([i for i in range(2,len(l))if l[i]==0 and n<i<=2*n]))



# Sec: 3.12412s
"""
while 1:
    start=time.time()
    n=int(input())
    if not n:break
    c=0
    for i in range(2,2*n+1):
        flag=1
        for j in range(2,int(i**.5)+1):
            if(i%j==0):flag=0;break
        if flag and n<i<=2*n:c+=1
    print(c)
    end=time.time()
    print(f"Sec:{end-start:.5f}")"""