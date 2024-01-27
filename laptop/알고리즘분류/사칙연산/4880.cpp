// Next Number

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    while(true){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0) break;
        if(b+(b-a)==c){
            cout << "AP " << c+(b-a) << "\n";
        }
        else{
            cout << "GP " << c*(b/a) << "\n";
        }
    }
}