// Test Director

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,b,c;
    long long sum=0;
    vector<int> a;

    cin >> n;
    for(int i=0; i<n; i++){
        int p;
        cin >> p;
        a.push_back(p);
    }

    cin >> b >> c;

    for(int man : a){
        man-=b;
        sum++;
        if(man<=0) continue;
        else{
            int remain;
            remain = man % c;
            if(remain==0) sum+=man/c;
            else sum+=man/c+1;
        }
    }
    cout << sum;
    
    return 0;
}