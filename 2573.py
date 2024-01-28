# 2573 : Iceberg

# 시간 초과(34%)
# 논리는 맞지만, for문 2번으로 인해 시간초과
"""
import sys
from collections import deque
input=sys.stdin.readline

def bfs(x,y):
    q=deque([(x,y)])
    visited[x][y]=1
    
    while q:
        x,y=q.popleft()
        visited[x][y]=1 # 현재 좌표 방문 처리.
        water=0 # 바닷물 개수 
        # 현재 좌표의 주변 바닷물 개수 탐색
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if graph[nx][ny]==0:
                water+=1
        tmpHeight=graph[x][y]-water # 현재 좌표 높이 갱신
        graph[x][y]=tmpHeight if tmpHeight>=0 else 0 # 0이하 높이 불가 처리
        # 현재 좌표의 자식 노드 탐색
        # 현재 좌표 해당 값이 0이 되었다면, 자식 노드에 +1
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            # 빙산이고, (방문x 자식 노드이거나, 방문O 자식노드지만 카운팅이 덜 되었다면)
            if graph[nx][ny]!=0 and (visited[nx][ny]==0 or (nx,ny) in q):
                # 현재 좌표 값(부모노드)가 바닷물이면
                if graph[x][y]==0: graph[nx][ny]+=1 # 자식노드 값+1
                # q에 자식 노드 좌표가 없다면
                if (nx,ny) not in q: q.append((nx,ny)) # 큐에 추가


n,m=map(int,input().split())
graph,ice=[],[] # 문제 그래프, 빙산 좌표
year=0 # 정답 카운팅 변수
dy=[1,-1,0,0]
dx=[0,0,-1,1]

for i in range(n):
    t=[*map(int,input().split())]
    for j in range(m):
        if t[j]>0:
            ice.append((i,j))
    graph.append(t)
            
while ice:
    visited=[[0 for _ in range(m)] for _ in range(n)]
    cnt=0 # 빙산 개수
    delList=[] # 녹은 좌표를 ice에서 제거하기 위한 리스트.
    # 배열의 끝은 탐색 할 필요 없음. 무조건 바닷물
    for i,j in ice:
        # 바닷물이 아니고, 방문하지 않은 칸이라면
        if graph[i][j]!=0 and visited[i][j]==0:
            bfs(i,j)
            cnt+=1 # bfs 탐색 한번==빙산1개
        if graph[i][j]==0:
            delList.append((i,j)) 
    if cnt>1:
        print(year)
        break
    ice=sorted(list(set(ice)-set(delList)))
    year+=1

if cnt<2:
    print(0)
""" 

# 정답
"""
1. 좌표 주변 바닷물 개수 먼저 카운팅
2. 이후, 각 칸 값 갱신.

차이점: for문 2번 -> 1번으로 줄임.
"""
import sys
from collections import deque
input = sys.stdin.readline


def bfs(x, y):
    q = deque([(x, y)])
    visited[x][y] = 1
    seaList = []

    while q:
        x, y = q.popleft()
        sea = 0
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < m:
                if not graph[nx][ny]:
                    sea += 1
                elif graph[nx][ny] and not visited[nx][ny]:
                    q.append((nx, ny))
                    visited[nx][ny] = 1
        if sea > 0:
            seaList.append((x, y, sea))
    for x, y, sea in seaList:
        graph[x][y] = max(0, graph[x][y] - sea)

    return 1


n, m = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(n)]

ice = []
for i in range(n):
    for j in range(m):
        if graph[i][j]:
            ice.append((i, j))

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
year = 0

while ice:
    visited = [[0] * m for _ in range(n)]
    delList = []
    group = 0
    for i, j in ice:
        if graph[i][j] and not visited[i][j]:
            group += bfs(i, j)
        if graph[i][j] == 0:
            delList.append((i, j))
    if group > 1:
        print(year)
        break
    ice = sorted(list(set(ice) - set(delList)))
    year += 1

if group < 2:
    print(0)