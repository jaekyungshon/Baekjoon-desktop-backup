# Hanoi

def Hanoi(n,s,t,v):
 if n==1:print(s,t)
 else:Hanoi(n-1,s,v,t);print(s,t);Hanoi(n-1,v,t,s)
n=int(input());print(2**n-1);Hanoi(n,1,3,2)

