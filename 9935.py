# Bomb String

"""
j=''.join;a=j(input().split(b:=input()))
while b in a:a=j(a.split(b))
print([a,"FRULA"][a==''])
"""

s=input();b=[*input()];l=len(b);r=[]
for i in s:
 r+=[i]
 print(r[-l:])
 if r[-l:]==b:r[-l:]=[]
print(''.join(r)or"FRULA")