#include<iostream>
using namespace std;
bool isSprtedRotated(int a[], int n){
    if(n==1) return false;
    if(n==2) return a[0]>a[1];//is return me Hum hamesha wohi condition daalte hain jisko true evaluate karna hai

    //to find breaks
    int breaks=0;
    for(int i=0;i<n-1;i++){
       if(a[i]>a[i+1])
       breaks++;
    } 
    if(a[0]<a[n-1])
    breaks++ ;

    return (breaks==1);
//==1 → correct choice if question strictly wants sorted+rotated
//<=1 → safe choice if question allows fully sorted arrays as valid (like LeetCode sometimes does)
//Duplicates → don’t affect break count, code works fine
}
int main(){
    

}