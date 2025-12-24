//MAXIMUM SUBArraySUM
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

//Brute force with complexity o(n^3)
int brutforce(vector<int>&v){
    int maxsum=INT_MIN;
   for(int i=0;i<v.size();i++){
    for(int j=i;j<v.size();j++){
        int sum=0;//sum bahr initialise nhi kr kste kuki yha se reset hora h to 0, bahr purana sum fr hr subaaray k liy add hota rehta isliy ye is loop k bahr h.
        for(int k=i;k<=j;k++){
            sum+=v[k];
        }
        maxsum=max(maxsum,sum);
    }
   }
   return maxsum;
}

//Better Approach Complexity=o(n^2)
int better(vector<int>&v){
   int maxsum=INT_MIN;
   int n=v.size();
   for(int i=0;i<n;i++){
    int runningsum=0;
    for(int j=i;j<n;j++){
        runningsum+=v[j];
        maxsum=max(runningsum,maxsum);
    }
   }
   return maxsum;
}

//Kadane's algorithm, complexity o(n)(concept of dp)
int optimised(vector<int>&v){
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<v.size();i++){
        currentsum+=v[i];
        maxsum=max(maxsum,currentsum);
        
        if(currentsum<0)
        currentsum=0;
    }
    return maxsum;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); 
    }
    int maxsum=optimised(v);
    cout<<maxsum;
    
}
