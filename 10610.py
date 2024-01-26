# 30

i=''.join(sorted(input(),key=int)[::-1]);print(-(int(i)%30>0)or i)
