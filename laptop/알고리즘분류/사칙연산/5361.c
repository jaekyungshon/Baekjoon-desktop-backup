// Battle Droid Expenses

#include <stdio.h>

int main(){
    int t;
    double a[]={350.34,230.90,190.55,125.30,180.90};
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        double s=0;
        for(int j=0; j<5; j++){
            double tmp;
            scanf("%lf",&tmp);
            s+=a[j]*tmp;
        }
        printf("$%.2lf\n",s);
    }
}