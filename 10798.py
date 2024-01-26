# Read to Col

#l=[[*input()]for _ in[0]*5];print(''.join(l[j][i] for i in range(5)for j in range(5)))

#l=''.join(eval('input(),'*5))[::5]

for i in zip(*eval('input()+" "*15,'*5)):print(''.join(i).replace(' ',''),end="")