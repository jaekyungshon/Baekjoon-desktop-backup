# 7576 : Tomato
import sys
input=sys.stdin.readline

def bfs(q):
    while q:
        x,y=q.pop(0)
        visited[x][y]=1
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if not visited[nx][ny] and graph[nx][ny]==0:
                    graph[nx][ny]=graph[x][y]+1 # 최소 일수 = 탐색 레벨 표현.
                    q.append([nx,ny])
        
m,n=map(int,input().split())
graph=[[]*m for _ in range(n)]
visited=[[0]*m for _ in range(n)]
dx=[-1,1,0,0]
dy=[0,0,-1,1]
one=[]
cnt=0

for i in range(n):
    l=[*map(int,input().split())]
    for j in range(m):
        if l[j]==1:one.append([i,j])
    graph[i]=l
    
bfs(one)

for i in graph:
    if 0 in i:
        print(-1)
        exit(0)
    cnt=max(cnt,max(i))
print(cnt-1)