#include<iostream>
using namespace std; 

//-----For non-duplicates
int secondlargest(int a[], int n){
    int max1=a[0];// assume 1st lagrest 
    int max2=a[1];//assume 2nd largest

    for(int i=2;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2){
            max2=a[i];
        }
    }
    return max2;
}

//optimised 
int main(){
    int a[100],max1,max2,n;
    cout<<"no.of elements :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int largest=secondlargest(a,n);
    cout<<" second largest element is "<<largest<<endl;
}