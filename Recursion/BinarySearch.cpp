#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>&a, int tar,int s,int e){
    if(s<=e){
        int mid=s+(e-s)/2;//mid element is calculated
        if(a[mid==tar]) return mid;//if mid is equal to target 
        else if(a[mid]<=tar){
            bs(a,tar,mid+1,e);
        }
        else{
            return bs(a,tar,s,mid-1);
        }
        return -1;
    }
}
int main(){

}