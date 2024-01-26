// OX Quiz

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char quizList[80];

void check(int t, int s){
    int tmp = t;
    int score = s;
    for(int i = 0; i < strlen(quizList); i++){
        if(i == 0){
            if(quizList[i] == 'O'){
                score += (++tmp);
            }
        }
        else if(quizList[i] != 'O'){
            tmp = 0;
        }
        else if(quizList[i] == 'O'){
            score += (++tmp);
        }
    }
    printf("%d\n", score);
}

int main(void){
    int n;
    scanf("%d", &n);
    char c = getchar(); // flushing buffer
    
    for(int i = 0; i < n; i++){
        scanf("%s", quizList);
        check(0, 0);
    }
}