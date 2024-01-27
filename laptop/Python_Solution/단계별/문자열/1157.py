# Study Words

#exec("a,b=input().lower(),[0 for _ in range(123)];")

#a=1
#print(-1 if a==1 else 1)


l=[0 for _ in range(123)]
for i in input().upper():
    l[ord(i)]+=1
print(chr(l.index(max(l)))if l.count(max(l))==1 else "?")