# Quick A+B

from sys import stdin
inp = stdin.readline

for _ in range(int(inp())):
    a, b = map(int, inp().split())
    print(a+b)
