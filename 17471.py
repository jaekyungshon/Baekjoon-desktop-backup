# gerimendoring
# https://www.acmicpc.net/problem/17471
# 다시 풀어보기

import sys
from collections import deque
input=sys.stdin.readline

n=int(input())
human=[*map(int,input().split())]
graph=[[] for _ in range(n+1)]

for i in range(1,n+1):
    l=[*map(int,input().split())]
    for j in range(1,l[0]+1):
        if l[j] not in graph[i]:
            graph[i].append(l[j])
        if i not in graph[l[j]]:
            graph[l[j]].append(i)
        
ans=10000
