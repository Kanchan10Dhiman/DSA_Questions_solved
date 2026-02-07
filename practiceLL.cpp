#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Node *head=new Node;
    // head->data=4;
    // head->next=NULL; ye mnaully krna pdega agr below funtion ni bnate;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Linkedlist{
    Node *head;
    Node *tail;

    public:
    Linkedlist(){
        head=tail=NULL;
    }

    //operations lgana start krte h
    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    Node *head=new Node(2);
     Node *head=new Node(3);




}