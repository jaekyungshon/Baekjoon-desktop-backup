// Tail Num

#include <iostream>
#define abs(x)(x<0 ? -x:x)
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    int k1,k2;
    int r1,c1,r2,c2;
    cin >> k1 >> k2;

    if((k1+3)%4==0){
        r1=1;c1=(k1+3)/4;
    }
    else if((k1+2)%4==0){
        r1=2;c1=(k1+2)/4;
    }
    else if((k1+1)%4==0){
        r1=3;c1=(k1+1)/4;
    }
    else{
        r1=4;c1=k1/4;
    }

    if((k2+3)%4==0){
        r2=1;c2=(k2+3)/4;
    }
    else if((k2+2)%4==0){
        r2=2;c2=(k2+2)/4;
    }
    else if((k2+1)%4==0){
        r2=3;c2=(k2+1)/4;
    }
    else{
        r2=4;c2=k2/4;
    }
    
    int a=(r1>r2 ? r1-r2:r2-r1);
    int b=(c1>c2 ? c1-c2:c2-c1);
    cout << a+b;
}