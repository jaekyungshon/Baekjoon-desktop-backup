# Star Loop -2

from sys import stdin, stdout
inp = stdin.readline
pr = stdout.write

n = int(inp())
for i in range(1, n+1):
    for j in range(0,n-i):
        pr(" ")
    for k in range(0, i):
        pr("*")
    pr("\n")
    
