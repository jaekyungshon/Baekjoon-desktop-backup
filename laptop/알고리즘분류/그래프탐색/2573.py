# 2573

import sys
from collections import deque
input=sys.stdin.readline

def bfs(x,y,v):
    q=deque([(x,y)])
    while q:
        x,y=q.popleft()
        v[x][y]=1
        zero=0
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if graph[nx][ny]==0:
                    zero+=1; continue
                elif v[nx][ny]==-1:
                    q.append((nx,ny))
        if graph[x][y]>=zero:
            graph[x][y]-=zero
        else:
            graph[x][y]=0
        

n,m=map(int,input().split())
graph=[[*map(int,input().split)] for _ in range(n)]
dx=[-1,1,0,0]
dy=[0,0,-1,1]
cnt=0

while True:
    amount=0
    flag=1
    visited=[[-1]*m for _ in range(n)]
    
    for i in range(n):
        for j in range(m):
            if graph[i][j]>0 and visited[i][j]==-1:
                if amount<1:
                    bfs(i,j,visited); amount+=1
                else:
                    flag=0
                    break
    
    # 다 녹아보리는 경우는? 구현해야됨.
    
    if flag==0:
        print(0)
        break
    cnt+=1