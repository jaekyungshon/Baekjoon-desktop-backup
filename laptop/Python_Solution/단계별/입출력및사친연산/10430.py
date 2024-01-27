# 나머지
from sys import stdin
input = stdin.readline()

A,B,C=map(int, input.split())
print('\n'.join(map(str, [(A+B)%C, ((A%C) + (B%C))%C, (A*B)%C, ((A%C) * (B%C))%C])))