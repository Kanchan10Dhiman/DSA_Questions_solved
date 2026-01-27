//Linked list->shrddha

//INSERTION
#include<iostream>
using namespace std;

//node bnare h 
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

//Node aur LinkedList ko alag classes isliye rakhte hain kyunki Node sirf data ka structure hoti hai, jabki LinkedList nodes ko manage karne aur operations perform karne ki responsibility leti hai — isse code clear, reusable aur logically correct rehta hai.

//List class bnare h 
class List{
    Node *head;
    Node *tail;

    public:
    List(){
        head=tail=NULL;
    }
    void push_front(int data){
        // Node newNode(data); this is static Linked list me nodes ko stack me banaya to function ke baad memory destroy ho jaati hai,isliye head dangling pointer ban jaata hai aur list break ho jaati hai.

        Node *newNode= new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int data){
        Node *newNode =new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back() {
        // 1️⃣ Empty list
        if (head == NULL) {
        cout << "Linked list is empty" << endl;
        return;
        }

        // 2️⃣ Single node
        if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
        }

       // 3️⃣ Two or more nodes
        Node* temp = head;

        while (temp->next != tail) {
        temp = temp->next;
        }

        delete tail;        // delete last node
        tail = temp;        // update tail
        tail->next = NULL;  // new tail ka next NULL
    }

    void pop_back2() {
        if(head == NULL) {
        return;   // empty list
        }

        // case: single node
        if(head->next == NULL) {
        delete head;
        head = tail = NULL;
        return;
        }

        Node* temp = head;

        // second last node tak jao
        while(temp->next->next != NULL) {
        temp = temp->next;
        }

        // ab temp second last node pe hai
        delete temp->next;     // last node delete
        temp->next = NULL;    // link tod diya
         tail = temp;           // tail update
    }

    void insert(int data,int pos){
        if(pos<0){
            cout<<"invalid position"<<endl;
            return;
        }
        if(pos==0){
           push_front(data);
        }

        Node *temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"invalid position"<<endl;
            }
            temp=temp->next;
        }
        Node *newNode= new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void printll(){//head tb pass krte h function me jb function class k bahr ho
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
    ll.push_front(1);
    ll.push_front(2);
    ll.push_back(3);
    ll.pop_front();
    ll.printll();
    ll.pop_back();
    ll.printll();

}

/*
they said "say"...
they said "heal"..
they said "dont overthink"..

i ask "did you let me say?"
i ask "did you let me heal?"
i ask "did you let me to not overthink?"
*/