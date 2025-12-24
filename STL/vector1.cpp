#include<iostream>
#include<vector>
using namespace std;

int main(){
    //initialise vector
    vector<int> vec={2,5,7}; 
    //cout<<vec.size()<<endl;//no;of elements in vector
    vec.push_back(9);
    vec.push_back(1);
    vec.push_back(12);
    vec.push_back(13);
    vec.emplace_back(4);
    vec.pop_back();//last item deleted
    // cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    
    for(int val: vec){ 
        cout<<val<<" ";
    }
    cout<<endl;

    //accessing the element of the vector randomly
    cout<<vec[1]<<endl;
    cout<<vec.at(2)<<endl;

    //front back
    cout<<vec.front()<<" "<<vec.back()<<endl;

    //initlaise vectors
    vector <int> v(4,9);//we study this in dynamic programming-tabulation dp[][]arrays vector etc
    for(int val: v){ 
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int>vecto(v);
    for(int val: vecto){ 
        cout<<val<<" ";
    }
    cout<<endl;
    
    
}