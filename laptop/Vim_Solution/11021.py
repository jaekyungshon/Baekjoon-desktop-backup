# A+B-7

from sys import stdin, stdout
inp = stdin.readline
pr = stdout.write

pr('\n'.join(map(str, [f"Case #{i+1}: {sum(j)}" for i, j in enumerate([list(map(int, inp().split())) for _ in range(int(inp()))])])))
