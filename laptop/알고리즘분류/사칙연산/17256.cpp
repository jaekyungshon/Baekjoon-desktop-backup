// Cake

#include <bits/stdc++.h>

using namespace std;

class cake{
public:
    int x;
    int y;
    int z;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cake a,c;
    cin >> a.x >> a.y >> a.z;
    cin >> c.x >> c.y >> c.z;

    cout << c.x-a.z << " " << c.y/a.y << " " << c.z-a.x;
}