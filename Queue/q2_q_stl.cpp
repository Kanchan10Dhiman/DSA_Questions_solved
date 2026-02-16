#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
// queue<int> q;
// q.push(10);
// q.push(20);
// q.push(30);

// q.front(); // 10  (next to be removed)
// q.back();  // 30  (last inserted)


}