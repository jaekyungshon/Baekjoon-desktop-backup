# Find 2
# https://www.acmicpc.net/problem/12851

import sys
from collections import deque
input=sys.stdin.readline

def bfs(start,target):
    q=deque([start])
    visited[start]=0
    cnt,total=0,0
    
    while q:
        #print(q)
        x=q.popleft()
        if cnt!=0 and cnt<visited[x]:
            break
        if x==target:
            cnt=visited[x]
            total+=1
            continue
        for nv in (x-1,x+1,x*2):
            if 0<=nv<=100000 and (visited[nv]==-1 or visited[nv]==visited[x]+1):
                visited[nv]=visited[x]+1
                q.append(nv)
    
    return cnt,total


n,k=map(int,input().split())
visited=[-1]*100001

ans0,ans1=bfs(n,k)
print(ans0)
print(ans1)