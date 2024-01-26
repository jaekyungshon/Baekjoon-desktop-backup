#a,b,c=input();print(-1 if int(b)>=int(c)else int(a)/(int(c)-int(b)))
a,b,c=map(int,input().split())
print(-1 if b>=c else a//(c-b)+1)