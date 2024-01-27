# Min, Max

from sys import stdin, stdout
inp = stdin.readline
pr = stdout.write

n, m = int(inp()), list(map(int, inp().rstrip().split(" ")))
pr(f"{min(m)} {max(m)}")