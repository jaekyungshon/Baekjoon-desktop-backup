# 2206 : Break Brick and Move

import sys
from collections import deque
input=sys.stdin.readline

def bfs(e):
    q=deque([[0,0]])
    if e[0]!=-1:
        tmp[e[0]][e[1]]=0
    while q:
        x,y=q.popleft()
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if tmp[nx][ny]==0:
                    q.append([nx,ny])
                    tmp[nx][ny]=tmp[x][y]+1
    
n,m=map(int,input().split())
graph=[]
wall=[[-1,-1]]
ans=-1
dx=[-1,1,0,0]
dy=[0,0,-1,1]

for i in range(n):
    l=[*input()][:m]
    for j in range(m):
        if l[j]=='1':
            wall.append([i,j])
        l[j]=int(l[j])
    graph.append(l)

for ele in wall:
    tmp=[[j for j in graph[i]] for i in range(n)]
    bfs(ele)
    ans=max(ans,tmp[n-1][m-1])
    
    for i in tmp:
        print(i)
    print()