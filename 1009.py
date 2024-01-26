

#exec('a,b=map(int,input().split());print(str(a**b)[-1]);'*int(input())) 71

#for _ in[0]*int(input()):print(str(eval(input().replace(' ','**')))[-1]) 72


#exec("print(str(eval(input().replace(' ','**')))[-1]);"*int(input()))

#exec("a,b=map(int,input().split());print(a**b%10 or 10);"*int(input()))

#exec("print(eval(input().replace(' ','**'))%10 or 10);"*int(input()))

#exec("print(pow(*map(int,input().split()),-10)+10);"*int(input()))

#exec("print(pow(*map(int,input().split()),-10));"*int(input()))

print(pow(3,7,-10))