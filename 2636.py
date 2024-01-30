# Cheese : https://www.acmicpc.net/problem/2636
# BFS

import sys
from collections import deque
input=sys.stdin.readline

def bfs(visited):
    global n,m
    q=deque([(0,0)])
    visited[0][0]=1
    cnt=0
    
    while q:
        x,y=q.popleft()
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if visited[nx][ny]==0:
                    if graph[nx][ny]==0:
                        q.append((nx,ny))
                    else:
                        graph[nx][ny]=0
                        cnt+=1
                    visited[nx][ny]=1
                    
    return cnt


n,m=map(int,input().split())
graph=[]
time,total=0,0
dx=[-1,1,0,0]
dy=[0,0,-1,1]

for i in range(n):
    row=[*map(int,input().split())]
    total+=row.count(1)
    graph.append(row)
    
while True:
    visited=[[0 for _ in range(m)] for _ in range(n)]
    melt_cnt=bfs(visited)
    time+=1
    if total==melt_cnt:
        print(time)
        print(melt_cnt)
        break
    total-=melt_cnt
