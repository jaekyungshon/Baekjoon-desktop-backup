# Fourth Dot

a,b=[],[];exec('i,j=map(int,input().split());a+=[i];b+=[j];'*3)
print(f"{sorted([(i,a.count(i))for i in set(a)],key=lambda x:x[1])[0][0]} {sorted([(i,b.count(i))for i in set(b)],key=lambda y:y[1])[0][0]}")
