# Bee Home

cnt=1
x=6
n=int(input())
while(1):
    cnt += x
    if(cnt >= n):
        print(x//6+1 if n!=1 else 1)
        break
    x+=6
    
#a=int(input());print(1 if a==1 else[i for i in range(18259)if 3*i*(i+1)+1>=a][0]+1)