# Dial

a={e:i for i,j in enumerate(("ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"),3)for e in j}
print(sum(a[i]for i in input()))