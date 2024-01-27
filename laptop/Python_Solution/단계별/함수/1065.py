# Hansu

n = int(input())
print(n if n<=99 else 99+len([i for i in range(101, n+1) if int(str(i)[2]) is int(str(i)[0])+2*(int(str(i)[1])-int(str(i)[0]))]))