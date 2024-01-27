# Room Number

c=[0]*10
for i in input():
 if i=='9' or i=='6':
  if c[9]>=c[6]:c[6]+=1
  else:c[9]+=1
 else:c[int(i)]+=1
print(max(c))

