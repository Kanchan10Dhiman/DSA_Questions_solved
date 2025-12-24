#include<iostream>
using namespace std;
int reverseNumber(int n){
    int digit,rev=0;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}
/*
optimised code for reverse integer
int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        if (rev > INT_MAX/10 || rev < INT_MIN/10) return 0; // Overflow check
        rev = rev * 10 + x % 10;
        x = x / 10;
    }

    return rev;
}*/
int main(){
  int n;
  cout<<" enter n :";
  cin>>n;
  int r=reverseNumber(n);
  cout<<r<<endl;
}