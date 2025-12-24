#include<iostream>
#include<algorithm> //for sort function
using namespace std;
int largestElement(int a[], int n){
    // int ele=a[0];//assume 1st ele is larger
    // for(int i=1;i<n;i++){
    //     if(a[i]>ele){
    //         ele=a[i];
    //     }
    // }
    // return ele;
    return a[n-1];
}
int main(){

    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);//this we took if the array is not sorted , we sort the arry first then find the largest element.
    int element=largestElement(a,n);
    cout<<element;
}