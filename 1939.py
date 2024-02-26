# Restrict to weight
# https://www.acmicpc.net/problem/1939

import sys
from collections import deque
input=sys.stdin.readline

def bfs(sn,en,targetWeight):
    global n
    q=deque([sn])
    visited=[0]*(n+1)
    visited[sn]=1
    
    while q:
        x=q.popleft()
        for nx,maxWeight in graph[x]:
            if visited[nx]==0 and maxWeight>=targetWeight:
                visited[nx]=1
                q.append(nx)
    
    return visited[en] or 0


n,m=map(int,input().split())
graph=[[] for _ in range(n+1)]
ans,startWeight,endWeight=0,0,1000000000

for _ in range(m):
    start,end,weight=map(int,input().split())
    graph[start].append((end,weight))
    graph[end].append((start,weight))

startNode,endNode=map(int,input().split())

while(startWeight<=endWeight):
    mid=(startWeight+endWeight)//2
    if bfs(startNode,endNode,mid):
        ans=mid
        startWeight=mid+1
    else:
        endWeight=mid-1

print(ans)
