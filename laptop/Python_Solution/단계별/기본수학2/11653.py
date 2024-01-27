# Prime Factorization
"""
n=int(input())
#l=[i for i in range(2,int(n**.5)+1)if all(i%j for j in range(2,int(i**.5)+1))*i>1]
c=[*filter(lambda x:n%x==0,[i for i in range(2,int(n**.5)+1)if all(i%j for j in range(2,int(i**.5)+1))*i>1])][::-1]
i,l=0,[]
print(c)
while(n>1):
    if len(c)==1:l.append(n//c[0]);l.append(c[0]);break
    elif len(c)==0:print();break
    elif n%c[i]==0:
        l.append(c[i])
        n/=c[i]
    else:
        i+=1
"""

n,a=int(input()),2
while n!=1: 
 if n%a==0:n/=a;print(a)
 else:a+=1

