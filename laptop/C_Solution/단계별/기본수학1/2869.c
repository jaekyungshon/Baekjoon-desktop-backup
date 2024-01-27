// When arrive snail to Max Floor?

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, v;
    scanf("%lf %lf %lf", &a, &b, &v);

    printf("%d\n", (int)ceil((v-b)/(a-b)));
    return 0;
}