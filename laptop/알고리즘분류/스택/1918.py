# postfix notation

s,a=[],"";c={"*":2,"/":2,"+":1,"-":1}
for i in "("+input()+")":
 if i=="(":s+=[i]
 elif i.isalpha():a+=i
 elif i==")":
  while s:
   t=s.pop()
   if t=="(":break;
   a+=t
 else:
  while s[-1]!="("and c[i]<=c[s[-1]]:a+=s.pop()
  s+=[i]
print(a)