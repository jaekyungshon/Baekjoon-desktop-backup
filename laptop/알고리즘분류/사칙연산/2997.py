# Fourth Num

import enum


l=sorted(map(int,input().split()))
if l[1]-l[0]==l[2]-l[1]:print(l[2]+(l[1]-l[0]))
else:
    t=[l[1]-l[0],l[2]-l[1]]
    f=0
    for e,i in enumerate(range(l[0],l[2]+1,t[0])):
        if i not in l and i==l[0]+e*t[0]:print(i);f=1;break;
    if f==0:
        for e,i in enumerate(range(l[0],l[2]+1,t[1])):
            if i not in l and i==l[0]+e*t[1]:print(i);break;