// chess

#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int original[6]={1,1,2,2,2,8};
    int find[6];
    for(int i=0; i<6; i++){
        cin >> find[i];
    }

    for(int i=0; i<6; i++){
        original[i]-=find[i];
        cout << original[i] << " ";
    }
    return 0;
}