// I'll be the women's president!

#include <stdio.h>

int main(){
    int testCase;
    int l[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    scanf("%d", &testCase);
    for(int i = 0; i < testCase; i++){
        int k, v;
        scanf("%d %d", &k, &v);
        
        for(int j=0; j < k; j++){
            for(int e=1; e < v; e++){
                l[e] += l[e-1];
            }
        }
        printf("%d\n", l[v-1]);
        for(int j=1; j < v; j++){
            l[j] = j+1;
        }
    }
    return 0;
}