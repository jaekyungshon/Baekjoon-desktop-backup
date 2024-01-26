# Yosepuse

"""
i,a,c=input(),"",1
q=[*range(1,int(i[0])+1)]+[0]
while q.count(0)-1!=int(i[0]):
    print(q,c)
    if c%int(i[2])==0 and q[0]:a+=str(q[0]);q=[0]+q[1:]
    elif q[0]==0:q=q[1:]+[0]
    else:q+=[q.pop(0)];c+=1
print(a)
"""

"""
i,a,c=input(),"",1;n=int(i[0]);q=[*range(1,n+1)]+[0]
while q.count(0)-1!=n:
 if c%int(i[2])==0 and q[0]:a+=str(q[0]);q=q[1:]+[0]
 elif q[0]==0:q=q[1:]+[0]
 else:q+=[q.pop(0)]
 if q[0]>0:c+=1
print("<"+', '.join(a)+">")
"""

"""
a,b=map(int,input().split())
s,l="",[*range(1,a+1)]
for _ in l:
 c=b%len(l);l=l[c:]+l[:c];s+=str(l.pop())
print("<"+", ".join(s)+">")
"""

"""
a,b=map(int,input().split())
l=[*range(1,a+1)];s=[];i=0
while l:
 i=(i+b-1)%len(l)
 s+=[l.pop(i)]
print("<"+str(s)[1:-1]+">")
"""

i=input();l=[*range(1,int(i[0])+1)]
s,a=[],0
while l:
 a=(a+int(i[2])-1)%len(l);s+=[l.pop(a)]
print("<"+str(s)[1:-1]+">")