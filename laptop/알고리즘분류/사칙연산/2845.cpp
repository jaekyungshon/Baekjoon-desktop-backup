// After finish to party

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);    
    
    int l,p;

    cin >> l >> p;
    for(int i=0; i<5; i++){
        int person;
        cin >> person;
        cout << person-l*p << " ";
    }
    return 0;
}