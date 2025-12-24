#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v={{ 14,2,3,23},{4,5,6}};

    //rows=> v.size();
    //cols=>no.of elements in row=>v[i].size
    // cout<<v[0][0];


   
      for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}