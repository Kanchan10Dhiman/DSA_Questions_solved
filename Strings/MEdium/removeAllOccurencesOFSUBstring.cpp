#include<iostream>
#include<string>
using namespace std;
string removeoccurrence(string s, string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}  
int main(){
    string s,s1,part;
    getline(cin,s);
    getline(cin,part);
    s1=removeoccurrence(s,part);
    cout<<s1<<endl;     
}
