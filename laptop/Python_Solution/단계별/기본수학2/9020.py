# GoldBarhe
from time import time
"""
a=[1,1]+[0]*10000
for i in range(2,int(10000**.5)+1):
    for j in range(i*i,10001,i):
        a[j]=1
l=[i for i in range(2,10001)if a[i]==0]
for _ in range(int(input())):
    n=int(input());i,a,b,m=2,0,0,11111
    start = time()
    while i<=n//2:
        if i in l and n-i in l and n-2*i<m:a,b,m=i,n-i,n-2*i
        i+=1
    print(a,b)
    end=time()
    print(f"Sec:{(end-start):.5f}")
"""

def prime_list(n):
    sieve = [True] * n
    m = int(n ** 0.5)
    for i in range(2, m + 1):
        if sieve[i] == True:
            for j in range(i + i, n, i):
                sieve[j] = False
    return [i for i in range(2, n) if sieve[i] == True]
def sosu(n):
    li = prime_list(n)
    idx = max([i for i in range(len(li)) if li[i] <= n / 2])
    for i in range(idx, -1, -1):
        for j in range(i, len(li)):
            if li[i] + li[j] == n:
                return [li[i], li[j]]
for _ in range(int(input())):
    n = int(input())
    start=time()
    print(" ".join(map(str, sosu(n))))
    end=time()
    print(f"Sec:{(end-start):.5f}")
    