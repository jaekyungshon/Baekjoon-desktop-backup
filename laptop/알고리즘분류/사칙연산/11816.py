# Oct, Di, Hex

a=input()
if a[:2]=="0x":print(int(int(a,16)))
elif a[0]=="0":print(int(int(a,8)))
else:print(int(a))