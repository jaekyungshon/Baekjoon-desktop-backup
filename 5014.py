# 5014 : StartLink

import sys
from collections import deque
input=sys.stdin.readline

def bfs():
    global f,g
    
    while q:
        v=q.popleft()
        if v==g:
            return cnt[v]
        for e in direction:
            if e==0: continue
            nv=v+e
            if 1<=nv<=f and cnt[nv]==0:
                cnt[nv]=cnt[v]+1
                q.append(nv)
                
    return -1

f,s,g,u,d=map(int,input().split())
q=deque([s])
direction=[u,-d]
cnt=[0 for _ in range(f+1)]

if s==g:
    print(0)
elif (s>g and d==0) or (s<g and u==0):
    print("use the stairs")
else:
    ans=bfs()
    print(ans if ans!=-1 else "use the stairs")