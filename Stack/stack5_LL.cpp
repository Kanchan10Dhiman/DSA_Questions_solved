#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Stack{
    // pointer to top node hmne alg se ku bnaya ...abi head ki jgh isko lere h isliy

    Node *top;
public:
    Stack(){
        cout<<"constructor called";
        top=NULL;
    }

    //Push ->yha alg se if conditon use nhi krni kuki top ek hi pointer h ...linked me if use kia tha kuki vha 2 pointer the head to beshk point ho jata but tail null hi reh jata isliy
    void push(int data){
        Node *newNode= new Node(data);
        newNode->next=top;
        top=newNode;
    }
    //pop
    void pop(){
        if(top==NULL){
            cout<<"underflow ";
            return;
        }
        Node *temp=top;
        top=top->next;
        temp->next=NULL;
        delete temp;  
    }
    //peek
    int peek(){
        if(top==NULL){
            cout<<"stack empty";
            return -1;
        }
        return top->data;
    }
    //empty
    bool empty(){
        return top==NULL;
    }
    
    ~Stack(){
        while(top!=NULL){
            Node *temp=top;
            top=top->next;
            delete temp;
        }
        cout<<"destructoro called";
    }
    
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    while(!s.empty()){
        cout<<s.peek()<<" ";
        s.pop();
    }
    cout<<endl;
}