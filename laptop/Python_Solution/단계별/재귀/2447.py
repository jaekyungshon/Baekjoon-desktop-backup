# Print to Star-10

import sys
sys.setrecursionlimit(10**6)

def Star(n):
 if n==1:return['*']
 s=Star(n//3);l=[]
 #print(f"n:{n} s:{s}")
 for i in s:l.append(i*3)
 for i in s:l.append(i+' '*(n//3)+i)
 for i in s:l.append(i*3)
 #print(f"n:{n} l:{l}")
 return l

print('\n'.join(Star(int(input()))))