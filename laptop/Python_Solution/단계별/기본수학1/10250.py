# ACM Hotel


h,w,n = map(int,input().split())
y=h if n%h==0 else n%h
x=(n-y)/h+1
print("%d%02d"%(y,x))

#exec('h,w,n=map(int,input().split());y=h if n%h==0 else n%h;print("%d%02d"%(y,(n-y)/h+1));'*int(input()))