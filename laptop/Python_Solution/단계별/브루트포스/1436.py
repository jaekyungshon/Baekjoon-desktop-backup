# Movie Director

"""
n=int(input())
check=666
cnt=1
while 1:
    if "666" in str(check):
        if cnt==n:
            break
        else: cnt+=1
    check+=1
print(check)
"""

# 10 => 2666799

print([i for i in range(9**7)if "666"in str(i)][int(input())-1])