// Snack

#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int k,n,m;
    cin >> k >> n >> m;
    int s=k*n-m;
    cout << (s>=0 ? s:0);
    return 0;
}