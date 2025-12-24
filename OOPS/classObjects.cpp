#include<iostream>
using namespace std;
//classes and object
class student{
    public:
    string name; // name,agr roll no are data members
    int age;
    int rollno;
    
};

 //function overloading-->different arguemnts but same function name

 int area(int a,int b){
    return a*b;
 }

 int area(int a){
    return 3.14*a*a;
 }
int main(){
    student s1,s2;
    s1.name="kanchan";
    s1.age=12;
    cout<<s1.age<<endl;
    cout<<s1.name<<endl;
    s2.name="dhiman";
    cout<<s2.name<<endl;
    
    //function overlaoding 
     int a=2,b=2;
     int result=area(a,b);
     cout<<result<<endl;

     int res=area(2);
     cout<<res<<endl;

     //acess specifiers public private


     
}