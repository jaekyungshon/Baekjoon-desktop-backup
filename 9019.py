# DSLR - https://www.acmicpc.net/problem/9019

import sys
from collections import deque
input=sys.stdin.readline

def bfs(a,b,visited):
    q=deque([(a,"")])
    visited[a]=1
    
    while q:
        n,command=q.popleft()
        if n==b:
            return command
        # D
        t=(n*2)%10000
        if visited[t]==0:
            q.append((t,command+"D"))
            visited[t]=1
        # S
        t=(n-1)%10000
        if visited[t]==0:
            q.append((t,command+"S"))
            visited[t]=1
        # L
        t=(n//1000)+(n%1000)*10
        if visited[t]==0:
            q.append((t,command+"L"))
            visited[t]=1
        # R
        t=(n//10)+(n%10)*1000
        if visited[t]==0:
            q.append((t,command+"R"))
            visited[t]=1
    
for _ in range(int(input())):
    a,b=map(int,input().split())
    visited=[0 for _ in range(10001)]
    print(bfs(a,b,visited))