# 구구단

n = int(input())
print('\n'.join(map(str, [f"{n} * {i} = {n*i}" for i in range(1, 10)])))
