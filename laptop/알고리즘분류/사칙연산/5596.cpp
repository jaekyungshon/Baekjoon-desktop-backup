// Exam Score

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int s=0,t=0;
    for(int i=0; i<4; i++){
        int tmp;
        cin >> tmp;
        s+=tmp;
    }
    for(int i=0; i<4; i++){
        int tmp;
        cin >> tmp;
        t+=tmp;
    }

    cout << (s>t ? s:s==t ? s:t);
    return 0;
}