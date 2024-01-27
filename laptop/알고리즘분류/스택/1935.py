# Postfix Factions 2

i=input;n=int(i());l=i();s=[];c={chr(n+65):v for n,v in enumerate([i()for _ in[0]*n])}
for j in l:
 if j.isalpha():s+=[c[j]]
 else:o=s.pop();k=s.pop();s+=["("+[k+"+"+o,k+"-"+o,k+"*"+o,k+"/"+o]["+-*/".index(j)]+")"]
print(f"{eval(s[0]):.2f}")