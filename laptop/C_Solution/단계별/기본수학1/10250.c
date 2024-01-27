// ACM Hotel

#include <stdio.h>

int main(){
    int t;
    for(scanf("%d", &t); t > 0; t--){
        int h,w,n;
        scanf("%d %d %d", &h, &w, &n);

        int y, x;
        if(n % h == 0) y=h;
        else y=n%h;
        x = (n-y)/h+1;

        printf("%d%02d\n", y, x);
    }
    return 0;
}