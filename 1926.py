# 1926 : Picture

# Fail : DFS
# Time over (recursion)
"""
import sys
input=sys.stdin.readline

def dfs(x,y):
    global ans
    visited[x][y]=1
    for i in range(4):
        nx=x+dx[i]
        ny=y+dy[i]
        if 0<=nx<n and 0<=ny<m:
            if graph[nx][ny]==1 and visited[nx][ny]==0:
                graph[nx][ny]=graph[x][y]+1
                ans=max(ans,graph[nx][ny])
                dfs(nx,ny)

n,m=map(int,input().split())
graph=[[*map(int,input().split())] for _ in range(n)]
visited=[[0 for _ in range(m)] for _ in range(n)]
dy=[-1,1,0,0]
dx=[0,0,-1,1]
cnt,ans=0,0

for i in range(n):
    for j in range(m):
        if graph[i][j]==1 and visited[i][j]==0:
            dfs(i,j)
            cnt+=1

print(cnt)
print(ans)
"""

import sys
from collections import deque
input=sys.stdin.readline

def bfs(x,y):
    each_picture=1
    q=deque()
    q.append((x,y))
    visited[x][y]=1
    
    while q:
        x,y=q.popleft()
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if graph[nx][ny]==1 and visited[nx][ny]==0:
                    visited[nx][ny]=1
                    q.append((nx,ny))
                    each_picture+=1
    
    return each_picture
    
n,m=map(int,input().split())
graph=[[*map(int,input().split())] for _ in range(n)]
visited=[[0 for _ in range(m)] for _ in range(n)]
dy=[-1,1,0,0]
dx=[0,0,-1,1]
cnt,ans=0,0

for i in range(n):
    for j in range(m):
        if graph[i][j]==1 and visited[i][j]==0:
            cnt+=1
            ans=max(ans,bfs(i,j))

print(cnt)
print(ans)