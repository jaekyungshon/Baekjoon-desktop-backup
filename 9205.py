# Kastenlauf
# https://www.acmicpc.net/problem/9205

import sys
from collections import deque
input=sys.stdin.readline

for _ in range(int(input())):
    conv_cnt=int(input())
    home_x,home_y=map(int,input().split())
    conv_list=[[*map(int,input().split())] for _ in range(conv_cnt)]
    goal_x,goal_y=map(int,input().split())
    
    row,col=abs(home_x-goal_x),abs(home_y-goal_y)
    visited=[[0 for _ in range(col)] for _ in range(row)]
    # stop 1