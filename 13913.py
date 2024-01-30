# Find me! : https://www.acmicpc.net/problem/13913

"""
경로 찾는 부분이 은근 헷갈린다.
=> path 배열에 경로를 찾아갈 수 있도록 값을 설정해야함.
=> path 배열을 q에 넣어버리면, 각 노드마다 path 배열을 가지므로 메모리 낭비.
=> 10만개의 원소를 지니는 path 배열 생성.
=> path의 인덱스는 자식노드 정점이 되며, 값은 부모노드 정점이 된다.
ex) path의 16번 인덱스의 값은 8이다. == 16의 부모는 8이다.
=> 즉 정답 출력시, '거꾸로'해야한다.

시간 최적화)
<1>
1칸 거리 이동을 먼저 탐색하기보다는 순간이동을 이용하면 좋다.
(Q의 0번째 원소 기준)
예 1) 5 10 ...
예 2) 5 6 ...
순간이동 노드를 먼저 탐색하면, 그만큼 탐색 수가 준다는 사실을 알 수 있다.
== 정답에 더 가까워진다. == 그래프 깊이를 덜 들어갈 수 있다.
그러므로, 순간이동 노드를 q.popleft 진행하여, 다음 탐색 시 먼저 조회하게 된다.

<2>
현재 탐색 정점이 20이고 정답은 17일 때,
    (40을 탐색할 필요가 있을까?)
=> 필요없다. 결국엔 40미만의 수를 탐색해야하기 때문.
=> 즉, current node data < answer node date 인 경우만 2배를 q에 삽입하면 된다.
정리하자면, 탐색해도 의미없는 노드는 제외시켜버림으로써, 탐색 노드수를 감소시킬 수 있다.
"""
import sys
from collections import deque
input=sys.stdin.readline

def print_path(root,start):
    ans,x=[start],start
    while x!=root:
        x=path[x]
        ans.append(x)
    print(*ans[::-1])
    

def bfs(start,goal):
    q=deque([start])
    visited[start]=1
    
    while q:
        target=q.popleft()
        if target==goal:
            print(visited[target]-1)
            print_path(start,target)
            return
        for nv in (target-1,target+1,target*2):
            if 0<=nv<=100000 and visited[nv]==0:
                if nv==target*2 and target<goal:
                    visited[nv]=visited[target]+1
                    path[nv]=target
                    q.appendleft(nv)
                else:
                    visited[nv]=visited[target]+1
                    path[nv]=target
                    q.append(nv)
                
        
n,k=map(int,input().split())
visited=[0]*100001
path=[0]*100001

bfs(n,k)