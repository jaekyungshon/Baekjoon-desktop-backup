# Count to Each of Number

from sys import stdin, stdout

n, numList = eval('*'.join(map(str, [int(stdin.readline()) for _ in range(3)]))), [0] * 10
while(n != 0):
    numList[int(n%10)] += 1
    n = int(n / 10)
stdout.write('\n'.join(map(str, numList)))