#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator1(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return true;
    else return false;

}
int main(){
    int a[]={3,2,7,14,5};
    sort(a,a+5);
    
    for(int val :a){
        cout<<val<<" ";
    }
    cout<<endl;
    vector<int>v={3,2,7,14,5};
    sort(v.begin(),v.end());
    for(int val :v){
        cout<<val<<" ";
    }

    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int val :v){
        cout<<val<<" ";
    }
    cout<<endl;

    //comparators
    vector<pair<int, int>> vec={{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end(), comparator1);
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    //reverse
    vector<int>v1={3,2,7,14,5};
    reverse(v1.begin()+1,v1.begin()+3);// 3 7 2 14 5
    //reverse(v1.begin(),v1.end());
     for(auto val : v1 ){
        cout<<val<<" ";
     }
     cout<<endl;
    //permuation
    //string s="abc";
    //next_permutation(s.begin(),s.end());
    string s="bca";
    prev_permutation(s.begin(),s.end());
    cout<<s<<endl;

    cout<<max(100,3)<<endl;
    cout<<min(100,3)<<endl;



    // int n=10;
    // cout<<_builtin_popcount(n)<<endl;
   


}