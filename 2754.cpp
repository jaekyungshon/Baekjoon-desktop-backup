// Calculate-C Lang Score

#include <bits/stdc++.h>
using namespace std;

class Cal{
    string a;
    double b;
public:
    void setAB(string A, double B) {a=A;b=B;}
    string getA() {return a;}
    double getB() {return b;}
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed;
    cout.precision(1);

    string l[13]={"A+","A0","A-","B+","B0","B-","C+","C0","C-","D+","D0","D-","F"};
    double k[13]={4.3,4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.7,1.3,1.0,0.7,0.0};
    Cal list[13];

    for(int i=0; i<13; i++){
        list[i].setAB(l[i],k[i]);
    }

    string tmp;
    cin >> tmp;

    for(int i=0; i<13; i++){
        if(list[i].getA()==tmp){
            cout << list[i].getB();
            break;
        }
    }
}