#include<iostream>
#include<vector>
using namespace std;
//optimal approach to check prime
string isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "not-prime";
        }
    }
    return "prime";
}
//optimal approach to find count of prime within a range called-->Sieve of Eratosthenes
int countPrime(int n){
    vector<bool>isprime(n+1,true);
    int count=0;
    for(int i=2;i<n;i++){
        if(isprime[i]){
            count++ ;
            
            for(int j=i*2;j<n;j=j+i){
                isprime[j]=false;
            }
        }
    }
    return count;
}

int main(){
int n;
cin>>n;
cout<<isprime(n)<<endl;
cout<<"count prime from 0 to n: "<<countPrime(n)<<endl;



}