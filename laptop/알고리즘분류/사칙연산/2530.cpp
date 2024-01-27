// AI Clock

#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int h,m,s;
    int p;

    cin >> h >> m >> s;
    cin >> p;

    p+=h*60*60+m*60+s;

    int T=p/60;
    int H=T/60 < 24 ? T/60 : (T/60)%24;
    int M=T%60 < 60 ? T%60 : (T%60)%60;
    int S=p%60;

    cout << H << " " << M << " " << S;
    return 0;
}