# Que 2
# https://www.acmicpc.net/problem/18258

import sys
from collections import deque
input=sys.stdin.readline

q=deque([])
for _ in range(int(input())):
    command=input()[:-1]
    # push
    try:
        a,b=command.split()
        q.append(b)
    except:
        pass
    # pop
    if command=='pop':
        print(-1 if len(q)==0 else q.popleft())
    # size
    if command=='size':
        print(len(q))
    #empty
    if command=='empty':
        print(1 if len(q)==0 else 0)
    #front
    if command=='front':
        print(-1 if len(q)==0 else q[0])
    #back
    if command=='back':
        print(-1 if len(q)==0 else q[-1])