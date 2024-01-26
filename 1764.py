# Not Listen and See People

#l=[];exec("l+=[input()[:]];"*eval(input().replace(*' +')));a=sorted({*[i for i in l if l.count(i)>1]});print(len(a),*a,sep="\n")


#i=input;n,m=map(int,i().split());N,M=set(),set();exec("N.add(i()[:]);"*n);exec("M.add(i()[:]);"*m);
#a=sorted(N-(N-M));print(len(a),*a,sep="\n")

i=input;n,m=map(int,i().split());a=sorted({*[i()for _ in range(n)]}&{*[i()for _ in range(m)]});print(len(a),*a,sep="\n")