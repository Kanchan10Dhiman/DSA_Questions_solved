#include<iostream>
#include<set>
using namespace std;
int main(){
 set<int> s;
 s.insert(1);
 s.insert(2);
 s.insert(3);
 s.insert(4);
 s.insert(5);
 s.insert(10);
 //cout<<*(s.lower_bound(4))
 //if 4 and above not exist it return s.emd()i.e 0 -->no valid value
 cout<<*(s.lower_bound(4))<<endl;//it returns an iterator
 cout<<*(s.upper_bound(4))<<endl;
 
for(int val : s){
    cout<<val<< " ";
}
cout<<endl;


}