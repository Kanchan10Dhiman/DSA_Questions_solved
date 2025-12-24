#include<iostream>
using namespace std;
bool linearsearch(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(a[i]==key)
        return true;
    }
    return false;
}

int main(){
    int a[100],n,key;
    cout<<"enter no of elemnts: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter key";
    cin>>key;
    if(linearsearch(a,n,key)){
        cout<<"found"<<endl;
    }
    else cout<<"not found";
    
    
}

