// Find to Alphabet

#include <stdio.h>
#include <string.h>

int main(void){
    int list[123];
    char s[100];
    scanf("%s", s);
    
    // Init - Answer List
    for(int i = 0; i < 123; i++){
        list[i] = -1;
    }
    
    // Check - Alphabet Index
    for(int i = 0; i < strlen(s); i++){
        int idx = s[i];
        if(list[idx] == -1){
            list[idx] = i;
        }
    }
    
    // Print to Answer
    for(int i = 97; i <= 122; i++){
        printf("%d ", list[i]);
    }
    return 0;
}