# Stick

"""
s,l=[],input();c=0
for i in range(len(l)):
 if l[i]=="(":s.append(l[i])
 elif l[i]==")":
  if l[i-1]==")":s.pop();c+=1
  else:s.pop();c+=len(s)
print(c)"""

s=[];l=input();c=0
for i in range(len(l)):
 if l[i]=="(":s+=[l[i]]
 elif l[i]==")"and l[i-1]==")":s.pop();c+=1
 else:s.pop();c+=len(s)
print(c)