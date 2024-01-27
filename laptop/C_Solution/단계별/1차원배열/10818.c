// Min, Max

#include <stdio.h>
#include <stdlib.h>
#define MAX(x, y) (x >= y ? x : y)
#define MIN(x, y) (x <= y ? x : y)

int main(void){
    int n, nMin = 1000000, nMax = -1000000;

    scanf("%d", &n);
    //int* arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d", &tmp);
        nMin = MIN(nMin, tmp);
        nMax = MAX(nMax, tmp);
    }

    printf("%d %d\n", nMin, nMax);
    //free(arr);
    return 0;
}