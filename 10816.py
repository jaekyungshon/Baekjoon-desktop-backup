
p=input
for _ in[0]*int(p()):
 d={};n=int(p())
 for j in[0]*n:
  a,b=p().split()
  if b in d.keys():d[b]+=1
  else:d[b]=1
 i=1
 for j in d.values():i*=j
 print(i+n if len(d.keys())>1 else n)
 
exec("n=int(input());d={};exec('a,b=input().split();d[b]=1 if b not in d.keys() else d[b]+=1;'*n);i=1;c=0;l=d.values();exec('i*=l[c];c+=1'*len(l));print(i+n if len(d.keys())>1 else n);"*int(input()))
 