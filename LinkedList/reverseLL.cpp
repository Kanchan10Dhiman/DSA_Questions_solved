#include<iostream>
using namespace std;
//Linked list reverse
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class List{
    Node *head;
    Node *tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_back(int data){
        Node *newNode= new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    void push_back2(int data){
        Node *newNode= new Node(data);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
            newNode->next=NULL;
        }
    }
    void reversell(){
        if(head==NULL){
            cout<<"empty list";
            return;
        }
        Node *prev=NULL;
        Node *curr=head;
        Node *nextp=NULL;

        while(curr!=NULL){
            nextp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextp;
        }
        head=prev;

    }
    
    void printll(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
        
    }
};

int main(){
    List ll;
    ll.push_back2(1);
    ll.push_back2(2);
    ll.push_back2(3);
    ll.push_back2(4);
    ll.reversell();
    ll.printll();

}