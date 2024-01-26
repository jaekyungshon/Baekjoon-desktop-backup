// Pow

#include <stdio.h>
#include <math.h>

typedef struct DivisorList{
    int a,b;
}DivisorList;

int get_divisor(DivisorList l[], int n){
    int size=0;
    DivisorList element;

    for(int i=1; i<=(int)sqrt(n); i++){
        if(n%i==0){
            element.a=i;
            element.b=n/i;
            l[size++]=element;
        }
    }

    return size;
}

int get_answer(DivisorList l[], int size, int n){
    int cnt=0;
    for(int i=0; i<size; i++){
        int a=l[i].a;
        int b=l[i].b;
        if((a+b)%2==0){
            int A1=(a+b)/2;
            int B1=(b-a)/2;
            int B2=(a-b)/2;
            if(B1>0 && A1*A1-B1*B1==n) cnt++;
            if(B2>0 && A1*A1-B2*B2==n) cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    scanf("%d",&n);

    DivisorList list[31];
    int size=get_divisor(list,n);
    printf("%d",get_answer(list,size,n));
}