# Mars Math

for _ in[0]*int(input()):
 a,*b=input().split();a=float(a)
 for i in b:
  if i=="@":a*=3
  elif i=="%":a+=5
  else:a-=7
 print(f"{a:.2f}")