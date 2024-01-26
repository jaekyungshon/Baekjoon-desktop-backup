# 7569 : Tomato2
import sys
from collections import deque
input=sys.stdin.readline

def bfs():
    while q:
        x,y,z=q.popleft()
        for i in range(6):
            nx=x+dx[i]
            ny=y+dy[i]
            nz=z+dz[i]
            if 0<=nx<n and 0<=ny<m and 0<=nz<h:
                if graph[nx][ny][nz]==0:
                    q.append([nx,ny,nz])
                    graph[nx][ny][nz]=graph[x][y][z]+1
                    

m,n,h=map(int,input().split())
graph=[]
q=deque([])
ans=0
dx=[-1,1,0,0,0,0]
dy=[0,0,-1,1,0,0]
dz=[0,0,0,0,-1,1]

for z in range(h):
    tmp=[]
    for x in range(n):
        l=[*map(int,input().split())]
        for y in range(m):
            if l[y]==1:
                q.append([x,y,z])
        tmp.append(l)
    graph.append(tmp)

bfs()

for i in graph:
    for j in i:
        for k in j:
            if k==0:
                print(-1)
                exit(0)
            ans=max(ans,k)

print(ans-1)