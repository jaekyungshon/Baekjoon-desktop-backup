// Const Num

/*// Solution - Focus to Integer
// Ex) Num range 111 ~ 999, Have not 0

#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    int ra = (((a%100)%10)*100)+(((a%100)/10)*10)+(a/100);
    int rb = (((b%100)%10)*100)+(((b%100)/10)*10)+(b/100);

    printf("%d\n", (ra > rb) ? ra : rb);
    return 0;
}*/

// Solution - Focus to String
#include <stdio.h>
#include <stdlib.h>

char s1[4], s2[4]; // Include to '\0'
char rs1[3], rs2[3];

void print(int flag){
    if(flag == 1){
        for(int i = 0; i < 3; i++){
            printf("%c", rs1[i]);
        }
    }
    else{
        for(int i = 0; i < 3; i++){
            printf("%c", rs2[i]);
        }
    }
}

int main(void){
    scanf("%s %s", s1, s2);

    for(int i = 2; i >= 0; i--){
        rs1[2-i] = s1[i];
        rs2[2-i] = s2[i];
        //printf("%c ", s1[i]);
    }

    // Use1 - Each of Num Position
    // Use2 - ASCII Code
    for(int i = 0; i < 3; i++){
        if(rs1[i] == rs2[i]){
            continue;
        }
        else if(rs1[i] > rs2[i]){
            print(1);
            exit(0);
        }
        else{
            print(2);
            exit(0);
        }
    }
    return 0;
}