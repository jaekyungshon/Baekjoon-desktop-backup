// Loop to String

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int testCase;
    scanf("%d", &testCase);

    char c = getchar(); // flushing buffer
    
    for(int i = 0; i < testCase; i++){
        int loop;
        char str[20];
        scanf("%d %s", &loop, str);
        for(int j=0; j < strlen(str); j++){
            for(int k = 0; k < loop; k++){
                printf("%c", str[j]);
            }
        }
        puts("");
    }
    return 0;
}