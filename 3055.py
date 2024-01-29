# 3055 : Escape

# 틀림. (20%)
"""
import sys
from collections import deque
input=sys.stdin.readline

def bfs(i,j):
    global r,c
    visited[i][j]=1
    graph[i][j]='.'
    waterCnt=len(qWater)
    targetCnt=len(qTarget)
    while True:
        if not qTarget:
            break
        for i in range(targetCnt):
            xx,yy=qTarget.popleft()
            if xx==idxGoal[0] and yy==idxGoal[1]:
                return True
            for i in range(4):
                nxx=xx+dx[i]; nyy=yy+dy[i]
                if 0<=nxx<r and 0<=nyy<c:
                    if graph[nxx][nyy] in ['.','D'] and visited[nxx][nyy]==0:
                        visited[nxx][nyy]=visited[xx][yy]+1
                        qTarget.append((nxx,nyy))
        targetCnt=len(qTarget)
        
        for i in range(waterCnt):
            x,y=qWater.popleft()
            for i in range(4):
                nx=x+dx[i]; ny=y+dy[i]
                if 0<=nx<r and 0<=ny<c:
                    if graph[nx][ny]=='.' and visited[nx][ny]>=0:
                        visited[nx][ny]=-1
                        qWater.append((nx,ny))
                        graph[nx][ny]='*'
        waterCnt=len(qWater)
        
    return False


## Data Setting
r,c=map(int,input().split())
graph,idxGoal=[],[-1,-1]
visited=[[0 for _ in range(c)] for _ in range(r)]
qWater,qTarget=deque([]),deque([])
flag=False
dx=[-1,1,0,0]
dy=[0,0,1,-1]

for i in range(r):
    row=[*input()][:-1]
    for j in range(c):
        if row[j]=='D':
            idxGoal[0]=i
            idxGoal[1]=j
        if row[j]=='*':
            qWater.append((i,j))
            visited[i][j]=-1
        if row[j]=='S':
            qTarget.append((i,j))
    graph.append(row)

## Error Handling
if idxGoal[0]==-1 or idxGoal[1]==-1:
    print("Error idxGoal"); exit(0)

## Main Logic
for i in range(r):
    for j in range(c):
        if graph[i][j]=='S' and visited[i][j]==0:
            flag=bfs(i,j)
            if flag==True:
                ans=visited[idxGoal[0]][idxGoal[1]]
                print(ans-1 if ans>1 else "KAKTUS")
                exit(0)

print("KAKTUS")
"""

# 정답 코드
"""
=> 고슴도치 이동 후, 홍수 이동시키면 된다.
=> S*인 경우 : S의 다음 좌표에 거리 갱신 후, 홍수가 현재 위치 범람해도 상관없음.
=> *S인 경우 : 고슴도치는 홍수쪽으로 이동 불가.
=> 두 경우를 아우르는 알고리즘은 '고슴도치 처리 이후, 홍수 처리' 이다.
=> graph 삽입 시, 하나의 q에 고슴도치, 홍수 순서대로 좌표 삽입하면 됨.
"""

import collections
import sys
input = sys.stdin.readline

n, m = map(int, input().split())

graph = [list(input().strip()) for _ in range(n)]
distance = [[0] *m for _ in range(n)]
dx, dy = [-1, 1, 0, 0], [0, 0, -1, 1]
queue = collections.deque()

def bfs(Dx,Dy):
    while queue:
        x,y = queue.popleft()
        if graph[Dx][Dy] == 'S':
            return distance[Dx][Dy]
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < m:
                if (graph[nx][ny] == '.' or graph[nx][ny] == 'D') and graph[x][y] == 'S':
                    graph[nx][ny] = 'S'
                    distance[nx][ny] = distance[x][y] + 1
                    queue.append((nx,ny))
                elif (graph[nx][ny] =='.' or graph[nx][ny] =='S') and graph[x][y] == '*':
                    graph[nx][ny] = '*'
                    queue.append((nx,ny))
    return "KAKTUS"


for x in range(n):
    for y in range(m):
        if graph[x][y] == 'S':
            queue.append((x,y))
        elif graph[x][y] == 'D':
            Dx,Dy = x,y

for x in range(n):
    for y in range(m):
        if graph[x][y] == '*':
            queue.append((x,y))

print(bfs(Dx,Dy))