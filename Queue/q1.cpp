//queue
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

class Queue{
    Node *head;
    Node *tail;
public:
    bool empty(){
        return head==NULL;
    }
    Queue(){
        head=tail=NULL;
    }

    void push(int data){
        Node* newNode=new Node(data);
        if(empty()){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop(){
        if(empty()){
            cout<<"empty ll";
            return;
        }
        Node *temp=head;
        head=head->next;
        if(head==NULL){   // queue became empty
        tail=NULL;
        }
        delete temp;
    }
    int front(){
        if(empty()){
            cout<<"empty ll";
            return -1;
        }
        return head->data;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    cout<<q.front()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
