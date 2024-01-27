# 사칙연산
from math import floor
from sys import stdin
input = stdin.readline()

a, b = input.split()
l = [floor(eval(a+i+b)) for i in ["+","-","*","/","%"]]
print('\n'.join(map(str, l)))

