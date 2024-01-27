# ROT13



for i in map(ord,input()):
 if 65<=i<=90:
  if i+13>90:print(chr(65+((i+13)-90)-1),end="")
  else:print(chr(i+13),end="")
 elif 97<=i<=122:
  if i+13>122:print(chr(97+((i+13)-122)-1),end="")
  else:print(chr(i+13),end="")
 else:print(chr(i),end="")
