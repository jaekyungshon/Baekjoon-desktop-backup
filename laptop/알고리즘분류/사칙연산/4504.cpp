// Find Multiples

#include <bits/stdc++.h>

using namespace std;

class check{
    int n,m;
public:
    check() {};
    bool multi();
    void setNM(int,int);
};

void check::setNM(int a, int b){n=a;m=b;}
bool check::multi(){
    if(m==0) return false;
    else{
        if(m%n==0){
            cout << m << " is a multiple of " << n << ".\n";
        }
        else{
            cout << m << " is NOT a multiple of " << n << ".\n";
        }
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    bool flag=true;
    int n;
    cin >> n;
    while(flag==true){
        check c;
        int k;
        cin >> k;
        c.setNM(n,k);
        flag=c.multi();
    }
    return 0;
}