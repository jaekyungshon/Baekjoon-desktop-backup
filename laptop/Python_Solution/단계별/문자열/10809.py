# Fine to Alphabet

a=[-1 for _ in range(123)]
for i,j in enumerate(input()):
    a[ord(j)] = i if a[ord(j)] == -1 else a[ord(j)]

print(' '.join(map(str, a[97:])))