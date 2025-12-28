#include <iostream>
#include<string>
#include<algorithm>//for reverse
using namespace std;
// void reversestring(string &s, int st, int e)
// {
//     st = 0;
//     e = s.length()-1;
//     while (st < e)
//     {
//         swap(s[st], s[e]);
//         st++;
//         e--;
//     }
// }
int main(){
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s;
    
}