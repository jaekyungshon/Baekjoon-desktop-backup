# 1325 : Hacking

"""
import sys
sys.setrecursionlimit(150000)
input=sys.stdin.readline

def dfs(v):
    global cnt
    visited[v]=1
    for nv in graph[v]:
        if visited[nv]==0:
            cnt+=1
            dfs(nv)
    
n,m=map(int,input().split())
graph=[[] for _ in range(n+1)]
visited=[0]*(n+1)
ans,cnt=[0]*(n+1),0

for _ in range(m):
    children,parent=map(int,input().split())
    graph[parent].append(children)

for root in range(1,n+1):
    dfs(root)
    ans[root]=cnt
    cnt=0
    visited=[0]*(n+1)

print(*[i for i in range(1,n+1) if ans[i]==max(ans)])
"""

"""
import sys
sys.setrecursionlimit(150000)
input=sys.stdin.readline

def dfs(v):
    global cnt
    visited.add(v)
    for nv in graph[v]:
        if nv not in visited:
            cnt+=1
            dfs(nv)
    
n,m=map(int,input().split())
graph=[[] for _ in range(n+1)]
visited=set()
ans,cnt=[0]*(n+1),0

for _ in range(m):
    children,parent=map(int,input().split())
    graph[parent].append(children)

for root in range(1,n+1):
    dfs(root)
    ans[root]=cnt
    cnt=0
    visited=set()

print(*[i for i in range(1,n+1) if ans[i]==max(ans)])
"""

"""
import sys
input=sys.stdin.readline

def dfs():
    cnt=0
    while stk:
        v=stk.pop()
        visited.add(v)
        for nv in graph[v]:
            if nv not in visited:
                cnt+=1
                stk.append(nv)
    return cnt
    
n,m=map(int,input().split())
graph=[[] for _ in range(n+1)]
visited=set()
stk=[]
ans=[0]*(n+1)
max_ans=-1

for _ in range(m):
    children,parent=map(int,input().split())
    graph[parent].append(children)

for root in range(1,n+1):
    stk.append(root)
    count=dfs()
    ans[root]=count
    max_ans=max(max_ans,count)
    visited=set()

print(*[i for i in range(1,n+1) if ans[i]==max_ans])
""" 

import sys
from collections import deque
input=sys.stdin.readline

def bfs(v):
    cnt=0
    q=deque([v])
    visited=[0]*(n+1)
    visited[v]=1
    
    while q:
        v=q.popleft()
        for nv in graph[v]:
            if visited[nv]==0:
                visited[nv]=1
                cnt+=1
                q.append(nv)
    
    return cnt

n,m=map(int,input().split())
graph=[[] for _ in range(n+1)]
ans=[]
max_ans=-1

for _ in range(m):
    children,parent=map(int,input().split())
    graph[parent].append(children)
    
for root in range(1,n+1):
    count=bfs(root)
    if count > max_ans:
        max_ans=count
        ans.clear()
        ans.append(root)
    elif count==max_ans:
        ans.append(root)

print(*ans)