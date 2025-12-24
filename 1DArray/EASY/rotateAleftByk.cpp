#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>&a){
    int n=a.size();
   int s=0,e=n-1;
   while(s<e){
      swap(a[s],a[e]);
      s++;
      e--;
   }
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    reverseArray(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}