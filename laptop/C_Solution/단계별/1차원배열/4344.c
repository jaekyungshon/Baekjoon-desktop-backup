// Over-Average

#include <stdio.h>

void checkToPrint(double avg, double list[], double n){
    int you = 0;
    for(int i = 0; i < (int)n; i++){
        if(list[i] > avg){
            you++;
        }
    }
    printf("%.3lf%%\n", ((double)you / n) * 100.0);
}

int main(void){
    int testCaseCnt;
    scanf("%d", &testCaseCnt);
    char c = getchar(); // flushing buffer

    for(int i = 0; i < testCaseCnt; i++){
        double scoreList[1000] = {0, };
        double n, tmpScore=0.0;
        scanf("%lf", &n);
        for(int j = 0; j < (int)n; j++){
            scanf("%lf", &scoreList[j]);
            tmpScore += scoreList[j];
        }
        double avg = tmpScore / n;
        checkToPrint(avg, scoreList, n);
    }
    return 0;
}