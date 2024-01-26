# sort inside

#print(''.join(sorted(input(),key=int)[::-1]))

s=sorted;print(*s(s(set(eval("input(),"*int(input())))),key=len),sep="\n")