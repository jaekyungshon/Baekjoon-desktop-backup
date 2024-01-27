# The Balance of the World

"""
while a:=input():
    if(a=="."):break
    s=[];b="([";c=")]"
    for i in a:
        if i in b:s+=[i]
        elif s:
            if (i==')'and s[-1]=='(')or(i==']'and s[-1]=='['):s.pop()
    print("no"if s else "yes")
"""

"""
while a:=input():
 if(a=="."):break
 s=[];f=1
 for i in a:
  if i in "([":s+=[i]
  elif i in ")]":
   if s and s[-1]=="(["[")]".index(i)]:s.pop()
   else:f=0;break
 print("yes"if f and s==[]else "no")
"""