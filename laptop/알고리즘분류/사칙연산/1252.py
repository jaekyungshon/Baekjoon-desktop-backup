# Bin Adder

"""
l=len;a,b=input().split();c="";p=-1
while p>=-min(l(a),l(b)):c+=str(int(a[p])|int(b[p]));p-=1
if l(a)>l(b):c+=a[p::-1]
else:c+=b[p::-1]
print(c[::-1])"""

a,b=input().split();print(bin(int(a,2)+int(b,2))[2:])
