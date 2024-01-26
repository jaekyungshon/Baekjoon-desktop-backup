# A. And Matching

from itertools import combinations
for i in[0]*int(input()):
    answer=[]
    n,k=map(int,input().split())
    l=[*range(n)]
    s=[*combinations(l,n//2)]
    c=[*combinations(s,n//2)]
    for i in c:
        tmp=0
        for o in i:
            tmp+=o[0]&o[1]
        if tmp==k:
            answer.append(i)
    #print([answer[-1],-1][answer==[]])
    print(answer)
    