# Bowl

l=[*input()];c=10;s=[l.pop(0)]
while l:
 a=s.pop();b=l.pop(0)
 if a!=b:c+=10
 else:c+=5
 s+=[b]
print(c)