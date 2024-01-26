#include <stdio.h>

int main(){
    int n,k;
    int a=0,tmp;
    scanf("%d %d",&n, &k);

    for(int i=0; i<k; i++){
        scanf("%d",&tmp);
        switch(tmp){
            case 3: case 4:
                a+=2; break;
            case 5: case 6:
                a+=3; break;
            case 7: case 8:
                a+=4; break;
        }
    }

    if(n<=a) printf("YES");
    else printf("NO");
}