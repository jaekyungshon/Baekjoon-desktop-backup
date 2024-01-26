# 16928 : Snakes and Ladders

import sys
from collections import deque
input=sys.stdin.readline

def bfs():
    while q:
        x,y,z=q.popleft()
        

n,m=map(int,input().split())
graph=[[0 for _ in range(11)] for _ in range(11)]
ladders=[[*map(int,input().split())] for _ in range(n)]
snakes=[[*map(int,input().spjlit())] for _ in range(m)]
q=deque()
q.append((1,1,0))
bfs()