#include<iostream>
#include<vector>
using namespace std;
//moves zero to end
void movezeros(vector<int>&a){
    int n=a.size();
    vector<int> temp;//() nhi lgani vrna c++ ise function smjhne lgta h.
    //store non zero elements in temp
    for(int i=0;i<n;i++){
        if(a[i]!=0){
        //temp[i]=a[i];
        temp.push_back(a[i]);
        }
    }   
     //store them again in array 
    int i=0;
    for( ;i<temp.size();i++){
        a[i]=temp[i];
    }
    //fill remainig positions with zero
    for(; i<n;i++){
        a[i]=0;
    }
}

int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    movezeros(a);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }


}