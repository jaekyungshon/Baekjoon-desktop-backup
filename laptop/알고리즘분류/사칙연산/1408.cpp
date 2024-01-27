//24

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s,st;
    cin >> s;
    cin >> st;

    int H=stoi(s);
    
    int ind=s.find(':');
    int M=stoi(s.substr(ind+1));

    ind=s.find(':',ind+1);
    int S=stoi(s.substr(ind+1));

    int HH=stoi(st);

    int in=st.find(':');
    int MM=stoi(st.substr(in+1));

    in=st.find(':',in+1);
    int SS=stoi(st.substr(in+1));

    int ans,ansH,ansM,ansS;
    int sTime=H*60*60+M*60+S;
    int stTime;
    if(H<=HH) stTime=HH*60*60+MM*60+SS;
    else stTime=(24+HH)*60*60+MM*60+SS;

    ans=stTime-sTime;
    ansH=(ans/60)/60;
    ansM=(ans/60)%60;
    ansS=ans%60;

    if(ansH==0) cout << "00:";
    else if(ansH<10) cout << "0" << ansH << ":";
    else cout<< ansH << ":";

    if(ansM==0) cout << "00:";
    else if(ansM<10) cout << "0" << ansM << ":";
    else cout << ansM << ":";

    if(ansS==0) cout << "00";
    else if(ansS<10) cout << "0" << ansS;
    else cout << ansS;
}