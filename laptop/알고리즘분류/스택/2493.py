# Top

input();s=[];a=[]
for i,j in[*enumerate(map(int,input().split()))]:
 while s and j>s[-1][1]:s.pop()
 if s==[]:a+=[0]
 else:a+=[s[-1][0]+1]
 s+=[(i,j)]
print(*a)
