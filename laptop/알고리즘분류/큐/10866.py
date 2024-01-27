# Deque


q=[];p=print
for _ in[0]*int(input()):
 global a,b;t=input()
 try:a,b=t.split()
 except:a=t
 if a=="push_front":q=[b]+q
 elif a=="push_back":q+=[b]
 elif a=="pop_front":p(-(q==[])or q[0]);q=q[1:]
 elif a=="pop_back":p(-(q==[])or q[-1]);q=q[:-1]
 elif a=="size":p(len(q))
 elif a=="empty":p(+(q==[]))
 elif a=="front":p(-(q==[])or q[0])
 else:p(-(q==[])or q[-1])


