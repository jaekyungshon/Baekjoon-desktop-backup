// Calculate to Date

#include <stdio.h>

int main(){
    int e,s,m;
    int n=1,a=1,b=1,c=1;
    scanf("%d %d %d", &e, &s, &m);

    while(1){
        if(a!=e || b!=s || c!=m){
            n++;a++;b++;c++;
            if(a>15) a=1;
            if(b>28) b=1;
            if(c>19) c=1;
        }
        else break;
    }
    printf("%d",n);
    return 0;
}