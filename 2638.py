# cheese 2
# https://www.acmicpc.net/problem/2638
# (cheese 1 : https://www.acmicpc.net/problem/2636)

import sys
from collections import deque
input=sys.stdin.readline

def bfs(sx,sy):
    global n,m
    q=deque([(sx,sy)])
    visited[sx][sy]=1
    
    while q:
        x,y=q.popleft()
        for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
            nx=x+dx
            ny=y+dy
            if 0<=nx<n and 0<=ny<m:
                if graph[nx][ny]==0 and visited[nx][ny]==0:
                    q.append((nx,ny))
                    visited[nx][ny]=1
                elif graph[nx][ny]==1:
                    visited[nx][ny]+=1
    
total_che_cnt,time=0,0
n,m=map(int,input().split())
graph=[]
for i in range(n):
    l=[*map(int,input().split())]
    for j in range(m):
        if l[j]==1:
            total_che_cnt+=1
    graph.append(l)

while True:
    visited=[[0]*m for _ in range(n)]
    bfs(0,0)
    time+=1
    
    melt_cnt=0
    for i in range(n):
        for j in range(m):
            if visited[i][j]>=2:
                graph[i][j]=0
                melt_cnt+=1
    
    if total_che_cnt==melt_cnt:
        print(time)
        break
    
    total_che_cnt-=melt_cnt