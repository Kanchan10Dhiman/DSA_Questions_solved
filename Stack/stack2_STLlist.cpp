#include<iostream>
#include<list>
using namespace std;
class Stack{
    list<int> ll;
    public:
    bool empty(){
        return ll.size()==0;// ll.empty();
    }
    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        if(ll.empty()){
            cout<<"list empty";
            return;
        }
        ll.pop_front();
    }
    int top(){
        if(ll.empty()){
            cout<<"list empty";
            return -1;
        }
        return ll.front();
    }
    void printsl(){
        for(int x : ll){
    cout << x << " ";
    } 

    }

};
int main(){
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);

  s.printsl();

}
//STL containers do not perform internal safety checks for operations like pop or front because they are designed for performance and assume the programmer ensures correct usage. Therefore, underflow checks must be handled by the user.