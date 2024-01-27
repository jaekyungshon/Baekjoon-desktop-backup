# Self Number

from sys import stdout

def SelfNum():
    l1 = set(range(1, 10000))
    l2 = set()
    
    for i in range(1, 10000):
        l2.add(i+sum([int(j) for j in str(i)]))
        
    return l1-l2
            

for i in sorted(SelfNum()):
    stdout.write(str(i)+"\n");
