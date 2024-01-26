# 14502 : Lab

import sys
from collections import deque
from itertools import combinations as cb
input=sys.stdin.readline

def bfs(V,cntZero):
    q=deque([])
    for i in V:
        q.append(i) # 초기 연구소 모든 바이러스 위치들 큐에 삽입.
    while q: # bfs 탐색 시작. (바이러스 위치 갱신 및 실시간 0개수 카운팅)
        x,y=q.popleft()
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            if 0<=nx<n and 0<=ny<m:
                if tmp[nx][ny]==0:
                    tmp[nx][ny]=2
                    q.append([nx,ny])
                    cntZero-=1
    return cntZero
    
n,m=map(int,input().split())
graph,virus,idx=[],[],[] # 연구소,바이러스위치,0위치
ans,cnt=-1,0 # 정답,0개수
dx=[-1,1,0,0]
dy=[0,0,-1,1]

for i in range(n):
    l=[*map(int,input().split())]
    for j in range(m):
        if l[j]==0:
            idx.append([i,j])
            cnt+=1
        if l[j]==2:
            virus.append([i,j])
    graph.append(l)

for ele in cb(idx,3): # 3개 벽 모든 경우
    tmp=[[graph[i][j] for j in range(m)] for i in range(n)] # 각 경우에서 사용될 연구소.
    countZero=cnt
    for i in ele:
        tmp[i[0]][i[1]]=1
        countZero-=1
    ans=max(ans,bfs(virus,countZero))
        
print(ans)