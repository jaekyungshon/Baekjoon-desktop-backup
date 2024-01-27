// Cooker

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int winner;
    int score=0;

    int s[5][4];
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            cin >> s[i][j];
        }
    }

    winner=0;
    for(int i=0; i<4; i++){
        score+=s[0][i];
    }

    for(int i=1; i<5; i++){
        int tmp=0;
        for(int j=0; j<4; j++){
            tmp+=s[i][j];
        }
        if(tmp > score){
            winner=i;
            score=tmp;
        }
    }
    cout << winner+1 << " " << score;
    return 0;
}