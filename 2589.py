# 2589 : https://www.acmicpc.net/problem/2589
# BFS

import sys
from collections import deque
input=sys.stdin.readline

def bfs(x,y):
    q=deque([(x,y)])
    visited=[[0 for _ in range(m)] for _ in range(n)]
    visited[x][y]=1
    max_cnt=0
    
    while q:
        x,y=q.popleft()
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if graph[nx][ny]=='L' and visited[nx][ny]==0:
                    q.append((nx,ny))
                    visited[nx][ny]=visited[x][y]+1
                    max_cnt=max(max_cnt,visited[nx][ny])
    
    return max_cnt-1

n,m=map(int,input().split())
graph=[[*input()[:-1]] for _ in range(n)]
dx=[-1,1,0,0]
dy=[0,0,-1,1]
cnt=0

for i in range(n):
    for j in range(m):
        if graph[i][j]=='L':
            cnt=max(cnt,bfs(i,j))

print(cnt)