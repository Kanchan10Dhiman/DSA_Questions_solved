#include<iostream>
using namespace std;
void printName(int n){
    if(n==0) return ;
    cout<<"kanchan you did it"<<endl;
    printName(n-1);
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    printName(n);
}