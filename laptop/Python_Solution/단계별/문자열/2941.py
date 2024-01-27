# Croatia Alpha
"""
import re

a = input()
for i in [r"c=",r"c-",r"dz=",r"d-",r"lj",r"nj",r"s=",r"z="]:
    a=re.sub(i,"*",a)
print(a)"""

import re
a = input()
for i in [r"c=",r"c-",r"dz=",r"d-",r"lj",r"nj",r"s=",r"z="]:
    a=re.sub(i,"*",a)
print(len(a))
