// String

#include <stdio.h>
#include <string.h>
#define MIN(x,y) (x<y ? x:y)

int main(){
    char a[50];
    char b[50];
    int cnt=100000;

    scanf("%s %s",a,b);

    for(int i=0; i<=strlen(b)-strlen(a); i++){
        int tmp=0;
        for(int j=0; a[j]!='\0'; j++){
            if(a[j]!=b[j+i]) tmp++;
        }
        cnt=MIN(tmp,cnt);
    }
    printf("%d",cnt);
    return 0;
}