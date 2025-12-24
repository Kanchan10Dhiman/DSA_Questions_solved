#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    // vector<int>::iterator it;
    // //forward loop
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }
    cout<<endl;
    //backward loop
    // vector<int>::reverse_iterator it;
    for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<*(it)<<" ";
    }
    
    

}