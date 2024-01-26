# Prime Number 2
"""
m,n=int(input()),int(input())
#l=list(all(i%j for j in range(2,int(i**.5)+1))*i>1 for i in range(m,n+1))
l2=[i for i in range(m,n+1) if all(i%j for j in range(2,int(i**.5)+1))*i>1]
print(f"{sum(l2)}\n{min(l2)}" if l2!=[] else -1)"""

#l=[i for i in range(int(input()),int(input())+1)if all(i%j for j in range(2,int(i**.5)+1))*i>1];print(-(l==[])or f"{sum(l)}\n{min(l)}")
print(*map(int,input().split()))
