# Cal Program

a=""
while 1:
 if b=="=":break
 if a and a[-1]in"+-/*":a="("+a+b+")"
 elif b=="/":a+="//";
 else:a+=b
print(eval(a))