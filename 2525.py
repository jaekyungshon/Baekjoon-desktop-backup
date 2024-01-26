# Over Clock


#h,m=map(int,input().split());c=int(input());M=m+c
#print(24-(M//60),M%60)

#eval('input(),'*2)

#i=input;t=i();c=int(i());M=int(t[3:])+c;H=M//60
#print([24-H,int(t[:2])][H>0])


i=input;h,m=map(int,i().split());c=int(i());M=m+c;print((h+M//60)%24,M%60)