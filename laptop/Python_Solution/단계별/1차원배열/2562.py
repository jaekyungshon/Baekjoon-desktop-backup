# Max Num

from sys import stdin, stdout
inp = stdin.readline
pr = stdout.write

l = [int(inp()) for _ in range(9)]
pr(f"{max(l)}\n{l.index(max(l))+1}")