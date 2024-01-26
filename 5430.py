# AC
"""
for _ in[0]*int(input()):
 a=eval('input(),'*3);l=a[2][1:-1].split(',')
 for i in a[0]:
  if i=='R':l=l[::-1]
  elif l==[]:break
  else:l=l[1:]
 print('['+','.join(l)+']'if l else'error')"""

"""
from collections import *
for _ in[0]*int(input()):
 a=eval('input(),'*3);l=deque(a[2][1:-1].split(','))
 for i in a[0]:
  if i=='R':l.reverse()
  elif len(l)==0:break
  else:l.popleft()
 print('['+','.join(map(str,map(int,l)))+']'if len(l)else'error')"""

"""
from sys import *
i=stdin.readline;w=stdout.write
def AC(com,n,li):
 com.replace('RR','');l,r,d=0,0,True
 for c in com:
  if c=='R':d=not d
  elif c=='D':
   if d:l+=1
   else:r+=1
 if l+r<=n:
  res=li[l:n-r]
  if d:return '['+','.join(res)+']\n'
  else:return '['+','.join(res[::-1])+']\n'
 else:return'error\n'
for _ in[0]*int(i()):
 com=i();n=int(i());li=i().rstrip()[1:-1].split(',')
 if n==0:[]
 w(AC(com,n,li))

"""

r=input
for _ in[0]*int(r()):
 x=r();j=int(r());a=eval(r());i=R=0
 for s in x:
  if w:=s!='R':j-=R;i+=R^1
  R^=w^1
 print([str(a[i:j][::1-2*R]).replace(" ",''),"error"][i>j])
    