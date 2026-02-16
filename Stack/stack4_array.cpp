#include<iostream>
using namespace std;
class Stack{

    int arr[5];// fixed size of array
    int top;// index at array
public:
    Stack(){
        top=-1;//stack is empty initially(taken -1 coz, 0 se to indexing shuru hoti h )
    }

    //push()
    void push(int x){
        if (top==4){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    //pop()->//acha ye kho ki array ka kuch ni bigda ,....bs stack k operations lgenge to bs hme visualise stack k according hoga...srf accessing k through pr array safe hi rhega
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
    }
    //top
    int peek(){
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];  
    }
    //no. of elements in stack
    int size(){
        return top+1;
    }
    //empty function check
    bool empty(){
        return top==-1;
    }
};

int main() {

    Stack s;
    cout << "Is stack empty? " << s.empty() << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.push(60);   //Overflow test
    cout << "Current top: " << s.peek() << endl;
    cout << "Current size: " << s.size() << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    s.pop();   // Underflow test
    cout << "Is stack empty? " << s.empty() << endl;

    return 0;
}