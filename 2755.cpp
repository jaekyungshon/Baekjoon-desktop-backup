#include <iostream>
using namespace std;

int main(){
    int n,total=0;
    double sum=.0;
    cin >> n;

    string name,score;
    int gap;
    cout << fixed;
    cout.precision(2);
    for(int i=0; i<n; i++){
        cin >> name >> gap >> score;
        total+=gap;
        if(score=="A+") sum+=gap*4.3;
        else if(score=="A0") sum+=gap*4.0;
        else if(score=="A-") sum+=gap*3.7;
        else if(score=="B+") sum+=gap*3.3;
        else if(score=="B0") sum+=gap*3.0;
        else if(score=="B-") sum+=gap*2.7;
        else if(score=="C+") sum+=gap*2.3;
        else if(score=="C0") sum+=gap*2.0;
        else if(score=="C-") sum+=gap*1.7;
        else if(score=="D+") sum+=gap*1.3;
        else if(score=="D0") sum+=gap*1.0;
        else if(score=="D-") sum+=gap*0.7;
    }
    
    double ans=sum/total+0.000000000001;
    cout << ans;
}