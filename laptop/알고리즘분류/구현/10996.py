# Print to star -21


n=int(input())
for _ in range(n):
    for i in range(1,n+1):
        if i%2>0:print("*",end="")
        else:print(" ",end="")
    print()
    for i in range(1,n+1):
        if i%2>0:print(" ",end="")
        else:print("*",end="")
    print()
        
        
