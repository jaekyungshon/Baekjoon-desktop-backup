# Turret

exec('x,y,r,a,b,c=map(int,input().split());d=abs(int((abs(x-a)**2+abs(y-b)**2)**.5));e=abs(r-c);f=r+c;print(2 if e<d<f else 1 if (d==e or d==f)and r!=c else -1 if d==0 and r==c else 0);'*int(input()))

"""
for _ in range(int(input())):
 x,y,r,a,b,c=map(int,input().split())
 d=abs(int((abs(x-a)**2+abs(y-b)**2)**.5));e=abs(r-c);f=r+c
 print(2 if e<d<f else 1 if (d==e or d==f)and r!=c else -1 if d==0 and r==c else 0)
"""

# ijk abc
exec('x,y,r,i,j,k=map(int,input().split());a=((x-i)**2+(y-j)**2)**.5;print(-1if a==0and k==r else 1if a==abs(k-r)or k+r==a else 0if a>k+r or a<abs(k-r)else 2);'*int(input()))
#t=int(input())
#while t:x,y,r,a,b,c=map(int,input().split());d=abs(int((abs(x-a)**2+abs(y-b)**2)**.5));e=abs(r-c);f=r+c;print(2 if e<d<f else 1 if (d==e or d==f)and r!=c else -1 if d==0 and r==c else 0);t-=1