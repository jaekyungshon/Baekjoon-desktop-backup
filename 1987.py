#1987 : Alphabet
import sys
input=sys.stdin.readline

def dfs(x,y,count):
    global cnt
    cnt=max(cnt,count)
    
    for i in range(4):
        nx=x+dx[i]
        ny=y+dy[i]
        if 0<=nx<r and 0<=ny<c:
            if not visited[nx][ny] and graph[nx][ny] not in pathHistory:
                pathHistory.add(graph[nx][ny])
                dfs(nx,ny,count+1)
                pathHistory.remove(graph[nx][ny])
    
r,c=map(int,input().split())
graph=[input() for _ in range(r)]
visited=[[0]*c for _ in range(r)]
dx=[-1,1,0,0]
dy=[0,0,-1,1]
pathHistory=set()
cnt=0

pathHistory.add(graph[0][0])
dfs(0,0,1)
print(cnt)