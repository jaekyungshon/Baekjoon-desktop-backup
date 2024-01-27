# Set
# Bitmask

"""
B=0
for _ in[0]*int(input()):
 l=input()
 if ' 'in l:c=l.split();a=c[0];b=int(c[1])
 else:a=l
 if a=="add":B|=(1<<b)
 elif a=="remove":B&=~(1<<b)
 elif a=="check":print([0,1][B&(1<<b)>0])
 elif a=="toggle":B^=(1<<b)
 elif a=="all":B=(1<<21)-1
 else:B=0
"""


B=0
for _ in[0]*int(input()):
 l=input()
 if ' 'in l:c=l.split();a=c[0];b=int(c[1])
 else:a=l
 if a[0]=="c":print([0,1][B&(1<<b)>0])
 else:B=[B|(1<<b),B&~(1<<b),B^(1<<b),(1<<21)-1,0][["add","remove","toggle","all","empty"].index(a)]

