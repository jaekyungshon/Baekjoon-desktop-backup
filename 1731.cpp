#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,tmp;
    vector<int> v;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    if(v[1]-v[0]==v[2]-v[1]){
        cout << v[v.size()-1]+(v[1]-v[0]);
    }
    else{
        cout << v[v.size()-1]*(v[1]/v[0]);
    }
}