#include<iostream>
#include<string>
using namespace std;
int main(){
    // //declarationa nd intiliasation
    //  string str="hello";
    //  cout<<str<<endl;

    //  string str1("knchu");
    //  cout<<str1<<endl;

    //  string str2;
    //  //cin>>str2;
    //  getline(cin,str2);
    //  cout<<str2<<endl;
    
    //operation on strings

    //concatenate
    string s1="hi",s2="hello";
    cout<<s1+s2<<endl;
    //append
    s1.append(s2);
    cout<<s1<<endl;
    //size or length of string 
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;
    //empty check 
    cout<< s1.empty()<<endl;
    string s3;
    cout<< s3.empty();

    //compare
    // int st= s1.compare(s2); --> If 'i' > 'e' (ASCII 105 > 101), then compare() gives positive number (like 4).


    // cout<<st<<endl;
    cout<<(s1==s2)<<endl;
    cout<<(s1>s2)<<endl; // 0 and 1 in answer  when we do operators

    //substring-->
    string s7="kanchan";
    cout<<s7.substr(1,4)<<endl;
    //find 
    cout<<s7.find("nc")<<endl;//at 2 index
    cout<<s7.find("q")<<endl; //garbage value
    s7.clear();
    cout<<s7<<endl; //tring has clear
    cout<<s7.empty(); //1 i.e true
    cout<<endl;
    //loops

    string s="kanchudhiman";
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for( char val : s){
        cout<<val<<" ";
    }


}