# Prime Number

"""
input()
l=map(int,input().split())
a = list(all(n%j for j in range(2,n))*n>1 for n in l)
print(a)"""

input();print(sum(all(i%j for j in range(2,i))*i>1 for i in map(int,input().split())))