from sys import stdin
input = stdin.readline()

def check(a, b):
    if(a == b):
        print("==")
    elif(a > b):
        print(">")
    else:
        print("<")

a, b = map(int, input.split())
check(a, b)
