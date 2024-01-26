# 1697 
"""
시간 초과 코드 51%
import sys,collections
input=sys.stdin.readline
deque=collections.deque

def bfs(root,target):
    q=deque([root])
    while q:
        x=q.popleft()
        visited[x]=1
        if x==target:
            return path[x]
        if 0<=x-1<100001 and not visited[x-1] and x-1 not in q:
            q.append(x-1)
            path[x-1]=path[x]+1
        if 0<=x+1<100001 and not visited[x+1] and x+1 not in q:
            q.append(x+1)
            path[x+1]=path[x]+1
        if 0<=2*x<100001 and not visited[2*x] and 2*x not in q:
            q.append(2*x)
            path[2*x]=path[x]+1
        
n,k=map(int,input().split())
visited=[0 for _ in range(100001)]
path=[0 for _ in range(100001)]
print(bfs(n,k))
"""

import sys,collections
input=sys.stdin.readline
deque=collections.deque

def bfs(root,target):
    q=deque([root])
    while q:
        x=q.popleft()
        if x==target:
            return path[x]
        for node in [x-1,x+1,2*x]:
            if 0<=node<100001 and not path[node]:
                q.append(node)
                path[node]=path[x]+1
        
n,k=map(int,input().split())
path=[0 for _ in range(100001)]
print(bfs(n,k))