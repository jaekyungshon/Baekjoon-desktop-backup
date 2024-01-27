// Warning

#include <stdio.h>

int main(){
    int h1,m1,s1;
    int h2,m2,s2;
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);

    int t1=(h1*60)*60+(m1*60)+s1;
    int t2=(h2*60)*60+(m2*60)+s2;

    int t=(t2-t1<0 ? (t2+60*60*24)-t1:t2-t1);

    printf("%02d:%02d:%02d",(t/60)/60,(t/60)%60,t%60);
}