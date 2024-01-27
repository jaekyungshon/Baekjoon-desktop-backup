# finding to documnet

#from sys import stdin
#input=stdin.readline


"""
a=input();b=input();c=0;i=0
while i<=len(a):
    #t=""
    #for j in range(len(b)):t+=a[i];i+=1
    t=a[i:i+len(b)]
    if t==b:c+=1
    i+=len(b)
print(c)"""

"""
# Time O : O(n) => Real Code
i=input;a=i();b=i();c,i=0,0
while i<=len(a):
 if a[i:i+len(b)]==b:c+=1
 i+=len(b)
print(c)"""

# Use Regix
import re;a=input();b=input();print(len(re.compile(b).findall(a)))
