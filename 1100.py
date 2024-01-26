# Withe Space

"""
l=[input()for _ in[0]*8]
a=[i for i in l[1::2]if i[1::2].find("F")>0]
b=l[::2]
print(a)
print(b)"""

#l='.'.join(eval('input(),'*8))[::2]
#print('.'.join(eval('input(),'*8))[::2].count("F"))

#import os;print(os.read(0,99)[::2].count("F"))

print([i for i in open(0)][::2].count("F"))