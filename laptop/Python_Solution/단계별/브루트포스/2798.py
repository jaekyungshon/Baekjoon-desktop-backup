# BlackJack
"""
import itertools
n,m=map(int,input().split())
l=sorted(map(int,input().split()),key=lambda x:x<m)
c=sorted([sum(i)for i in itertools.combinations(l, 3)if sum(i)<=m])
print(c)"""

import itertools;n,m=map(int,input().split());print(max([sum(i)for i in itertools.combinations(map(int,input().split()),3)if sum(i)<=m]))