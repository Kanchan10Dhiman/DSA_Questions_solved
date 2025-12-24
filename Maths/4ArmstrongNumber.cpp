#include<iostream>
using namespace std;
//armstrong-->sum of cubes of digit of a number=number
bool isArmstrong(int n){
    int copyN=n;
    int sumOfCubes=0;
    while(n!=0){
        int dig=n%10;
        sumOfCubes+=(dig*dig*dig);
        n=n/10;
    }
    return sumOfCubes==copyN;
}
int main(){
    int n=153;
    if(isArmstrong(n)){
        cout<<"armstrong";
    }
    else cout<<"not-ARmstrong";
}