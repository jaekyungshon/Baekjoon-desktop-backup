# One-Demension Array
# OX Quiz
"""Ex: Stack"""
from sys import stdin, stdout
inp = stdin.readline

def check(quiz):
    stk, score = [], 0
    
    for i in range(len(quiz)):
        if i == 0:
            if quiz[i] == "O":
                stk.append(quiz[i])
                score += 1
        elif quiz[i] == "O":
            stk.append(quiz[i])
            score += len(stk)
        else:
            stk = []
    return score

for _ in range(int(inp())):
    s = list(inp())
    stdout.write(f"{check(s)}\n")
    