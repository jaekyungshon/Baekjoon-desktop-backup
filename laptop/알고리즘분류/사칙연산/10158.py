# Ant

i=input;m=lambda:map(int,i().split());w,h=m();p,q=m();t=int(i())
print(w-abs(w-((p+t)%(2*w))),h-abs(h-((q+t)%(2*h))))
