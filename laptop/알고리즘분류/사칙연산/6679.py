# Specialized Four-Digit Numbers


def c(n,f):
 a=0
 while(n>0):a+=n%f;n//=f;
 return a
print(*[i for i in range(1000,10000)if c(i,10)==c(i,12)==c(i,16)],sep="\n")
