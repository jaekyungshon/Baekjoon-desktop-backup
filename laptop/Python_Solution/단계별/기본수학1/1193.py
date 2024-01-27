# Find to Math Fractions
"""
n=int((-1+(1+8*(10**7))**0.5)/2)
n2=-int((-1-(1+8*(10**7))**0.5)/2)
print(n)
print(n2)

print((n+1)*(n+2)) # 20003256
print(4471*4472) # 19994312
print((n2+1)*(n2+2)) # 20012202"""

x=int(input())
n1=-int((-1-(1+8*x)**0.5)/2)
n2=int((-1+(1+8*x)**0.5)/2)
sn1=n1*(n1+1)//2
sn2=n2*(n2+1)//2
n=min(n1,n2)if(sn1>=x)and(sn2>=x)else max(n1,n2)
a1=n-(n*(n+1)//2-x)
a2=1+(n*(n+1)//2-x)
print(f"{a1}/{a2}"if n%2==0 else f"{a2}/{a1}")