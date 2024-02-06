# Fire
# https://www.acmicpc.net/problem/5427

import sys
from collections import deque
input=sys.stdin.readline

def bfs(n,m,start,fire):
    q=deque([start])
    visited=[[0]*m for _ in range(n)]
    visited[start[0]][start[1]]=1
    for e in fire:
        q.append(e)
        visited[e[0]][e[1]]=-1
    
    while q:
        x,y=q.popleft()
        if (x==0 or x==n-1 or y==0 or y==m-1) and visited[x][y]>0:
            return visited[x][y]
        for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
            nx=x+dx; ny=y+dy
            if 0<=nx<n and 0<=ny<m:
                if graph[x][y]=="@" and graph[nx][ny]=="." and visited[nx][ny]==0:
                    visited[nx][ny]=visited[x][y]+1
                    graph[nx][ny]="@"
                    q.append((nx,ny))
                if graph[x][y]=="*" and graph[nx][ny]!="#" and visited[nx][ny]!=-1:
                    visited[nx][ny]=-1
                    graph[nx][ny]="*"
                    q.append((nx,ny))
    
    return False
    
    
for _ in range(int(input())):
    m,n=map(int,input().split())
    graph,start,fire=[],(),[]
    for i in range(n):
        l=[*input()][:-1]
        for j in range(m):
            if l[j]=="@":
                start=(i,j)
            if l[j]=="*":
                fire.append((i,j))
        graph.append(l)
    cnt=bfs(n,m,start,fire)
    print(cnt if cnt else "IMPOSSIBLE")
    