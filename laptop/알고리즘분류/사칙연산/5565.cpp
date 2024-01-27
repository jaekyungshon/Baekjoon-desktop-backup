// Receipt

#include <iostream>

using namespace std;

int main(){
    int total;
    int sum=0;

    cin >> total;

    for(int i=0; i<9; i++){
        int price;
        cin >> price;
        sum+=price;
    }

    cout << total-sum;
    return 0;
}