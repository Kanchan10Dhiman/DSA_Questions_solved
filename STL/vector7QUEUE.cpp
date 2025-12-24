#include<iostream>
#include<queue>
using namespace std;
int main(){
    //swap-->swap values of stack
queue<int> q1;
q1.push(1);
q1.push(2);
q1.push(3);

queue<int>q2;
q2.push(11);
q2.push(22);
q2.push(33);
q2.push(44);
q2.pop();
cout<<endl;
q1.swap(q2);
//s2 values 
cout<<"q1 becomes";
while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
}
}