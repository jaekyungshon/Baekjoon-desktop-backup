# Turtle


#print([(max(l)-(max(l)-l[l.index(max(l))-1]))*min(l),max(l)*min(l)][l.count(max(l))>1])
l=sorted([*map(int,input().split())]);print([(l[-1]-(l[-1]-l[-2]))*l[0],l[-1]*l[0]][l.count(l[-1])>1])