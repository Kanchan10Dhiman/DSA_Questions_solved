#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    
 deque<int> d={1,2,3,4,5};
 for(int val: d){
    cout<<val<<" ";
 } 
 cout<<endl;
 cout<<d[2]<<endl;
 // same as list 
 
 //PAIR
 cout<<"Pairs: ";
 pair<int,int>p={2,3};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //example pair
 cout<<"pair 2 example"<<endl;
 pair<int ,pair<int,char>>pa={6,{3,'s'}};
  cout<<pa.first<<endl;
  cout<<pa.second.second<<endl;
  cout<<pa.second.first<<endl;

  //vector off pair
  vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
//   for(pair<int,int> p :v){
//     cout<<p.first<<" "<<p.second<<endl;
//   }
 for(auto p :v){
    cout<<p.first<<" "<<p.second<<endl;
  }
  cout<<"pushback";
  v.push_back({7,8});//pair fisrt then insert
  v.emplace_back(9,23);//directly creted in the vector

  for(auto p :v){
    cout<<p.first<<" "<<p.second<<endl;
  }

   



}
