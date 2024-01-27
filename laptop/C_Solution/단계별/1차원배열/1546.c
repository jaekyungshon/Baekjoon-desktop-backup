// Re-evaluate Average

#include <stdio.h>
#include <stdlib.h>
#define MAX(x, y) (x > y ? x : y)

int main(void){
    double avg=0.0, *score;
    double nMax = -1.0;
    int n;
    
    scanf("%d", &n);
    score = (double*)malloc(sizeof(double)*n);

    for(int i = 0; i < n; i++){
        double tmp;
        scanf("%lf", &tmp);
        nMax = MAX(tmp, nMax);
        score[i] = tmp;
    }

    for(int i = 0; i < n; i++){
        avg += (score[i] / nMax * 100.0);
    }

    printf("%lf\n", avg / (double)n);
    return 0;
}