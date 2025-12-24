#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> a,int n){
    if(n==0 || n==1){
        return true;
    }
    return a[n-1]>=a[n-2] && isSorted(a,n-1);
}
int main(){
    vector<int> a={1,2,3,5,2};
    cout<<isSorted(a,a.size());
}