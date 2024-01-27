// Count to Each of Number

#include <stdio.h>

int main(void){
    // Maximum 997002999
    int n1, n2, n3, multi, seq=100000000;
    int numIdxList[10] = {0, };

    scanf("%d\n%d\n%d", &n1, &n2, &n3);
    multi = n1*n2*n3;
    if(multi < 100000000) seq /= 10;
    if(multi < 10000000) seq /= 10;

    while(seq >= 100){
        numIdxList[multi/seq]++;
        multi %= seq;
        seq /= 10;
    }
    numIdxList[multi/seq]++;
    numIdxList[multi%seq]++;

    for(int i = 0; i < 10; i++){
        printf("%d\n", numIdxList[i]);
    }    
    return 0;
}