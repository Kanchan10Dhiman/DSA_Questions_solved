#include<iostream>
using namespace std;
int countDigit(int n){
    int a,count=0;
    while(n!=0){
        a=n%10;
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    cout<<" enter no : ";
    cin>>n;
    int number=countDigit(n);
    cout<<number<<endl;

}