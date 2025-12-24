#include<iostream>
using namespace std;
int main(){
    //2d array iinitilisation

    //
    int matrix[3][3] = {
    {1, 2},   // 1 2 0
    {3},      // 3 0 0
    {}        // 0 0 0
    };

    //
    int arr[2][3];  // Declaration

    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;

    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;


   int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   //acess element 
   cout<<m[2][1]<<endl;

   //can also change value 
   m[0][0]=12;
   cout<<m[0][0]<<endl;

   //loops  --input--output

   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
   }
   //loop code
   int a[3][3];
   cout<<"enter elements: "<<endl;
   //input
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
    cout<<endl;
   }
   //ouput
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
   //2d array is  stored lineraly in the memory just like 1d array,but having two methods..ROW AND COLUMN MAJOR

   




}