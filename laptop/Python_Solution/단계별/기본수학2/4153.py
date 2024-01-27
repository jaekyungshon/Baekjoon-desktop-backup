# Pitaghoras


while 1:
 a,b,c=sorted(map(int,input().split()))
 if a==0:break
 print("right"if a*a+b*b==c*c else "wrong")