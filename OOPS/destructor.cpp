#include<iostream>
using namespace std;
class complex{
    public:
    int a,b;
 complex(){
    cout<<"hi"<<endl;
 }
 ~complex(){
    cout<<"by"<<endl;
 }

 void setdata(int x,int y){
      a=x;
      b=y;
 }
 void display(){
    cout<<"value of a"<<a<<endl;
    cout<<"value of b"<<b<<endl;

 }
};
class box{
   public :
   int a;
   box(){
    cout<<"hi i am box"<<endl;
   }
   ~box(){

    cout<<"bye i am box"<<endl;
   }
};
int main(){
    complex c1;
    c1.setdata(2,3);
    c1.display();
    complex c2;
    box b1;
}

/*
🧹 Destructor Call Order (Reverse Creation Order)
At the end of main(), destruction happens in reverse order:

Object	Destructor Call
b1	prints → bye i am box
c2	prints → by
c1	prints → by*/