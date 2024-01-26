#include <iostream>
using namespace std;

int main(){
    int a=0,b=0;
    int tmp;
    for(int i=3; i>=1; i--){
        cin >> tmp;
        a+=(i*tmp);
    }
    for(int i=3; i>=1; i--){
        cin >> tmp;
        b+=(i*tmp);
    }
    if(a==b) cout << "T";
    else if(a>b) cout << "A";
    else cout << "B";
}