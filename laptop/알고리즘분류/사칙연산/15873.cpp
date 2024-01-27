// Have not space of A+B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    string s;
    cin >> s;

    int idy=s.find("0");
    if(idy==-1){
        cout << stoi(s.substr(0,1))+stoi(s.substr(1,1));
    }
    else{
        if(s.length()>3){
            cout << stoi(s.substr(0,2))+stoi(s.substr(2,2));
        }
        else if(s[1]=='0'){
            cout << stoi(s.substr(0,2))+stoi(s.substr(2,1));
        }
        else{
            cout << stoi(s.substr(0,1))+stoi(s.substr(1,2));
        }
    }
}