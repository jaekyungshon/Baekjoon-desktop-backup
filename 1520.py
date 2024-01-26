# 1520 : Down Hill

import sys
sys.setrecursionlimit(10**6)
input=sys.stdin.readline

def dfs(x,y):
    if x==r-1 and y==c-1:
        return 1
    if path[x][y]!=-1:
        return path[x][y]
    
    for i in range(4):
        nx=i+dx[i]
        ny=i+dy[i]
        if 0<=nx<r and 0<=ny<c:
            if graph[nx][ny]<graph[x][y]:
                path[x][y]=path[x][y]+dfs(nx,ny)
                
    return path[x][y]
    
r,c=map(int,input().split())
graph=[[*map(int,input().split())] for _ in range(r)]
path=[[-1]*c for _ in range(r)]
dx=[-1,1,0,0]
dy=[0,0,-1,1]


dfs(0,0)

print(path)