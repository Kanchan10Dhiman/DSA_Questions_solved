#include<iostream>
#include<queue>
using namespace std;
int main(){
 priority_queue<int> q;
 q.push(7);
 q.push(3);
 q.push(5);
 q.push(10);

 while(!q.empty()){
    cout<<q.top()<< " ";
    q.pop();
 }
 cout<<endl;
 priority_queue<int,vector<int>,greater<int> >pq;
  pq.push(7);
 pq.push(3);
 pq.push(5);
 pq.push(10);

 while(!pq.empty()){
    cout<<pq.top()<< " ";
    pq.pop();
 }
 cout<<endl;



}