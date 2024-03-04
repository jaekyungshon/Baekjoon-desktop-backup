# War
# https://www.acmicpc.net/problem/1303

import sys
from collections import deque
input=sys.stdin.readline

def bfs(sx,sy):
    global n,m,team,enemy
    q=deque([(sx,sy)])
    visited[sx][sy]=1
    manId,cnt=graph[sx][sy],1
    
    while q:
        x,y=q.popleft()
        for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
            nx=x+dx; ny=y+dy
            if 0<=nx<n and 0<=ny<m:
                if graph[nx][ny]==manId and visited[nx][ny]==0:
                    visited[nx][ny]=1
                    q.append((nx,ny))
                    cnt+=1

    if manId=='W':
        team+=(cnt*cnt)
    else:
        enemy+=(cnt*cnt)
        
m,n=map(int,input().split())
graph=[[*input()[:-1]] for  _ in range(n)]
visited=[[0]*m for _ in range(n)]
team,enemy=0,0

for i in range(n):
    for j in range(m):
        if visited[i][j]==0:
            bfs(i,j)

print(team,enemy)