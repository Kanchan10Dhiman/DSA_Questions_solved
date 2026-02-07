//using vector implementing stack
#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int> v;
    //pop,push,top functions of cmplexity o(1);
    public:
    bool empty(){
        return v.size()==0;
    }

    void push(int data){
        v.push_back(data);
    }

    void pop(){
        if(v.empty()){
            cout<<"underflow";
            return;
        }
        v.pop_back();
    }

    int top(){
        // return v.size()-1;//index only
        if(v.size()==0){
            cout<<"stack empty";
            return 1; 
        }
        return v[v.size()-1]; //value at that index
    }
    void print(){
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
    }
    
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout<<s.top()<<endl;
    //print stack without empty
    s.print();
    
    //print stack with making it empty
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
}