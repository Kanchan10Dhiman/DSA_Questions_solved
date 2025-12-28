#include<iostream>
#include<string>
using namespace std;
bool isAlphaNum(char ch) {
    return (ch >= '0' && ch <= '9') || 
           (tolower(ch) >= 'a' && tolower(ch) <= 'z');
}

bool ispalindrome(string s){
    int st=0,e=s.length()-1;
    while(st<e){
        if(!isalnum(s[st]))//isalnum in-built function h 
        st++; 
        else if(!isalnum(s[e]))
        e--; //yha mne glti se e++ krdia ta 
        else if(tolower(s[st])!=tolower(s[e])){
            return false; //ek bar b false hua tbi false hojega ki ye palindrome h hi nhi
        }
        else{
            st++;
            e--;
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(ispalindrome(s)){
        cout<<"is palindrome"<<endl;
    }
    else cout<<"not palindrome"<<endl;

}