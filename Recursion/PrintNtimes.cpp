#include<iostream>
using namespace std;
void printNtimes(int n){
    if(n==0) return;
    // if(n==1){
    //     cout<<"hello";
    //     return;
    // }
    cout<<n<<"hello"<<endl;
    printNtimes(n-1);
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    printNtimes(n);

}