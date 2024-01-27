# Loop to String

#exec("a,b=map(str,input().split());print(''.join(map(str,sorted(b*int(a)))));"*int(input()))
# exec("a,b=input().split();print(''.join(sorted(b*int(a))));"*int(input()))
exec("a=input();print(''.join(i*int(a[0])for i in a[2:]));"*int(input()))