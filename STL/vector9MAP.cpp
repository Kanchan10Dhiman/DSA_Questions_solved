#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"]=100;
    m["book"]=10;
    m["pen"]=30;
    

    m.insert({"camera", 20});
    m.emplace("boat",45);
    m.erase("tv");
   
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //in map the data is sort into ascending order of characters of string..
    cout<<"count:-"<<m.count("tv")<<endl;
    //to print value of key
    cout<<m["tv"]<<endl;

    if(m.find("camera")!=m.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    cout<<"MULTIMAP"<<endl;
    //multimap
    multimap<string,int> ma;
    ma.emplace("tv",19);
    ma.emplace("tv",19);
    ma.emplace("tv",19);

    //ma.erase("tv");
    ma.erase(ma.find("tv"));

    for(auto p : ma){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"UNOREDERD_MAP"<<endl;
    
    //unordered map
    unordered_map<string,int> um;
    um.emplace("tv",19);
    um.emplace("laptop",19);
    um.emplace("bud",19);
    for(auto p : um){
        cout<<p.first<<" "<<p.second<<endl;
    }


    




}