#include<iostream> //for input output
#include<climits> // for int_min 
using namespace std;
int secondlargest(int a[], int n){

    if(n<2){
        return INT_MIN;
    }
  int largest=INT_MIN;
  int secondlarge=INT_MIN;

  for (int i=0;i<n;i++){
     //case1
     if(a[i]>largest){
        secondlarge=largest;// here i do mistake..by writng these staments in wrong order...
        largest=a[i];
     }
     else if(a[i]<largest && a[i]>secondlarge){
        secondlarge=a[i];
    }
  }
  return secondlarge;
}
int main(){
    int a[100],n;
    cout<<"enter no. of elements:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int secondLarge=secondlargest(a,n);
    cout<<secondLarge<<endl;

}