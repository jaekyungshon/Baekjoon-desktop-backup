// Price Hunter

#include <bits/stdc++.h>

using namespace std;

int check(int flag, int rank){
    if(flag){
        if(rank==0) return 0;
        else if(rank<=1) return 5000000;
        else if(rank<=3) return 3000000;
        else if(rank<=6) return 2000000;
        else if(rank<=10) return 500000;
        else if(rank<=15) return 300000;
        else if(rank<=21) return 100000;
        else return 0;
    }
    else{
        if(rank==0) return 0;
        else if(rank<=1) return 5120000;
        else if(rank<=3) return 2560000;
        else if(rank<=7) return 1280000;
        else if(rank<=15) return 640000;
        else if(rank<=31) return 320000;
        else return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a,b,p=0;
        cin >> a >> b;

        p+=check(1,a);
        p+=check(0,b);

        cout << p << "\n";
    }
    return 0;
}