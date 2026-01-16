//LINKED LIST-> learning using struct->struct beahves same as that of class in linked list,the only difference is by default struct is public //by HELLO WORLD
#include<iostream>
using namespace std;

//creating node
struct node{
    int data;
    node *next;

    void printll(node *n){
        int count=0;//just to count the no.of elements in linked list
        while(n!=NULL){
            cout<<n->data<<" "<<endl;
            n=n->next;
            count++;
        }
        cout<<"no.of elements "<<count;
    }
};
int main(){
    //pointer pointing the node
    node *head=new node;
    node *second=new node;
     node *third=new node;
    //inserting data into node
    head->data=4;
    //storing address of next node
    head->next=second;//ek pointer ke andar dusre pointer ka address store ho raha hai

    second->data=3;
    second->next=third;

    third->data=2;
    third->next=NULL;
    cout<<head->data<<endl;//head k data me 4 h

    //prinitng linked list
    head->printll(head); //(*head).printll(head);



    
    

}