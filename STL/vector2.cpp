#include<iostream>
#include<vector>
using namespace std;
int main(){
    //erase 
    vector<int>v={1,2,3,4,5};
    v.erase(v.begin());
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int>vec={1,2,3,4,5};
    vec.erase(vec.begin()+2);
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> ve={10,20,30,40,50};
    ve.erase(ve.begin()+1,ve.begin()+3 );
    for(int val: ve){
        cout<<val<<" ";
    }
    cout<<endl;
    //insert
    vector<int> vec1={1,2,3,4,5};
    vec1.insert(vec1.begin()+2,100);
    vec1.clear();//it deletes all the elemnts but capacity remains same
    for(int val: vec1){
        cout<<val<<" ";
    }
    cout<<vec1.capacity()<<endl;
    cout<<"is empty"<<vec1.empty()<<endl;//1 true---0 false

    //iterators--> begin end
    vector<int> vec2={11,2,3,4,5};
    cout<<*(vec2.begin())<<endl;
    cout<<*(vec2.end())<<endl;//0 garbage value
    cout<<*(vec2.end()-1)<<endl;//5
}