#include<iostream>
#include<stack>
using namespace std;
int main(){
//stack<int> s={1,2,3,4,5}; this wrong as it is non-sequencial and we cant intialise it...we need to push the elements one by one

stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();//when pop the order is reverse 54321
}
cout<<endl;
s.push(51);
s.push(51);
cout<<s.size();

//swap-->swap values of stack
stack<int> s1;
s1.push(1);
s1.push(2);
s1.push(3);

stack<int> s2;
s2.push(11);
s2.push(22);
s2.push(33);
s2.push(44);
cout<<endl;
s1.swap(s2);
//s2 values 
cout<<"S1 becomes";
while(!s.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
}

//cant use forloop coz we cant know the size of the stack 
/*
int n = s.size(); // store original size
for (int i = 0; i < n; i++) {
    cout << s.top() << " ";
    s.pop();
}
But this works only if you don’t push or pop inside the loop, except that one pop per step.*/

}

/*
Agar woh bole: “Ye stack tumne use kiya, ye kaise banta hai internally?” 
Tab tu bole:

"Sir, stack actually C++ STL ka class-based implementation hai, jisme member functions like push(), pop(), top() hote hain. Agar aap chahein to main khud se stack bana ke dikha sakti hoon using class."
*/

