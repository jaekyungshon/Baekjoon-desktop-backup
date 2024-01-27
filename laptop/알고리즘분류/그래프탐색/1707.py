# 1707 : Bipartite-Graph
"""
이분그래프 : 인접한 정점들과 다른 집합으로 구성하여, 그래프의 간선이 두 집합 내로 그려지는 그래프.
=> 탐색 진행시, 1 및 -1을 차례대로 노드에 부여.
=> 1+(-1) != 0 이라면, 인접 정점이 다른 집합으로 안된것.
"""

import sys
from collections import deque
input=sys.stdin.readline

def bfs(v):
    q=deque([v])
    while q:
        v=q.popleft()
        for i in graph[v]:
            if visited[i]==0:
                q.append(i)
                visited[i]=visited[v]*(-1)
            elif visited[v]+visited[i]!=0:
                return False
    return True
    
for _ in range(int(input())):
    V,E=map(int,input().split())
    graph=[[] for _ in range(V+1)]
    visited=[0 for _ in range(V+1)]
    visited[1]=1
    flag=True
    
    for _ in range(E):
        start,end=map(int,input().split())
        graph[start].append(end)
        graph[end].append(start)
    
    for i in range(1,V+1):
        if flag==False:
            break
        if i==1 or visited[i]==0:
            flag=bfs(i)
    
    print("YES" if flag else "NO")
        