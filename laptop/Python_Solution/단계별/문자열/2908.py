# Const Num

#print(max([int(i[::-1])for i in input().split()if i.isdigit()]))

a,b=input().split()
print(max(int(a[::-1]),int(b[::-1])))