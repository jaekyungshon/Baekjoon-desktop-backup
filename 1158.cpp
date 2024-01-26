// Yosepuse

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Queue{
    int front,rear;
    int data[5001];
public:
    Queue(){front=rear=0;}
    bool isEmpty(){
        return (front==rear);
    }
    bool isFull(){
        return (front==(rear+1)%5001);
    }
    void push(int x){
        rear=(rear+1)%5001;
        data[rear]=x;
    }
    int pop(){
        front=(front+1)%5001;
        return data[front];
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n,k;
    cin >> n >> k;

    vector<int> v;
    Queue q;
    for(int i=1; i<=n; i++){
        q.push(i);
    }

    int cnt=1;
    int tmp;
    while(!q.isEmpty()){
        tmp=q.pop();
        if(cnt!=k){
            q.push(tmp);
            cnt++;
        }
        else{
            v.push_back(tmp);
            cnt=1;
        }
    }

    cout << "<";
    for(int i=0; i<v.size(); i++){
        if(i!=v.size()-1)
            cout << v[i] << ", ";
        else
            cout << v[i] << ">";
    }
}