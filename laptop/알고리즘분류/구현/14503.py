# Robot Cleaner

D=[[3,(0,-1)],[0,(-1,0)],[1,(0,1)],[2,(1,0)]];B=[(1,0),(0,-1),(-1,0),(0,1)];C=0
i=lambda:map(int,input().split())
n,m=i();r,c,d=i();l=[[*i()]for _ in range(n)]
while 1:
 if l[r][c]==0:C+=1;l[r][c]=2
 f=1;t=0;
 while t<4:
  a=D[d][1];d=D[d][0]
  if l[r+a[0]][c+a[1]]==0:r+=a[0];c+=a[1];f=0;break;
  t+=1
 if f:
  if l[r+B[d][0]][c+B[d][1]]==1:break;
  else:r+=B[d][0];c+=B[d][1]
print(C)
