// BasketBall Game

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    char cnt[26]={0,};

    int n,flag=0;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        cnt[s[0]-97]++;
    }
    for(int i=0; i<26; i++){
        if(cnt[i]>=5){
            cout << (char)(97+i);
            flag=1;
        }
    }
    if(!flag) cout << "PREDAJA";
    return 0;
}