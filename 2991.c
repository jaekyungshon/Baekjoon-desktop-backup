#include <stdio.h>

int main(){
    int a,b,c,d;
    int p,m,n;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    scanf("%d %d %d",&p,&m,&n);

    int P1=1+p/(a+b+2);
    int P2=1+p/(c+d+2);
    int M1=1+m/(a+b+2);
    int M2=1+m/(c+d+2);
    int N1=1+n/(a+b+2);
    int N2=1+n/(c+d+2);

    printf("%d %d %d %d %d %d\n",P1,P2,M1,M2,N1,N2);
    int pa,pm,pn;
    pa=pm=pn=0;

    if((a+b+2)*(P1-1)+a>=p) pa++;
    if((c+d+2)*(P2-1)+c>=p) pa++;
    if((a+b+2)*(M1-1)+a>=m) pm++;
    if((c+d+2)*(M2-1)+c>=m) pm++;
    if((a+b+2)*(N1-1)+a>=n) pn++;
    if((c+d+2)*(N2-1)+c>=n) pn++;

    printf("%d\n%d\n%d",pa,pm,pn);
}