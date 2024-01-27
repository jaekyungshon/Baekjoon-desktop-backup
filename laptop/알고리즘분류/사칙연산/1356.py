# youdecimal
"""
f=0;l='*'.join(input());f=0;a=len(l)
for i in range(0,a-2,2):
    f=1 if eval(l[:i+1])==eval(l[i+2:])else 0
print(f"flag={f}")
print("YNEOS"[f==0::2])"""

l='*'.join(input());print("YNEOS"[1 not in[eval(l[:i+1])==eval(l[i+2:])for i in range(0,len(l)-2,2)]::2])