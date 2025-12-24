#include<iostream>
using namespace std;
void printnum(int n){//recursive function
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    printnum(n-1);   
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    //printnum(n);
    int fact1=fact(n);
    cout<<fact1;

}