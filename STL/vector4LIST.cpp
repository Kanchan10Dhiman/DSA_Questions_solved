#include<iostream>
using namespace std;
#include<list>
int main(){
list<int> l={1,2,3,4,5};
l.push_back(41);
l.push_back(12);
l.push_front(22);
l.push_front(13);
l.emplace_back(10);
l.emplace_front(50);
//50 13 22 1 2 3 4 5 41 12 10 
l.pop_front();
l.pop_back();
l.pop_back();
//13 22 1 2 3 4 5 41
for(int val: l){
    cout<<val<<" ";
}

cout<<endl;
cout<<l.size()<<endl;
// l.erase(l.begin()+2);
/*list<int> l = {10, 20, 30, 40, 50};

    auto it = l.begin();     // points to 10
    advance(it, 2);          // now points to 30

    cout << *it << endl;*/

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    l.clear();
    for(int val: l){
    cout<<val<<" ";
   } 
   l.push_front(12);
   for(int val: l){
    cout<<val<<" ";
   } 
   cout<<endl;
   cout<<l.size();
   //example 2
   cout<<"another list ";
   list<int> li={1,2,3,4,5};
   for(auto it=li.begin(); it!=li.end();it++){
    cout<<*(it)<<" ";
   }
// cout<<l[2]; random acess in list is not possible

}