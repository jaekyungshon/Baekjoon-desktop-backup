// Tax

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << (n/100)*78 << " " << (n/100)*80+(((n/100)*20)/100)*78;
}