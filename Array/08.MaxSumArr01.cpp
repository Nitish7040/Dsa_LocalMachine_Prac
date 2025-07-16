/*
Find the Maximum Subarray sum for the given array by using BRUTE-FORCE METHOD :--------------->>>>>>>

Arr[6]= {2,-3,6,-5,4,2};

Solution:- 7

Time complexity of this solution is :-------
   {{{{{{{{{{{  TC:--   O(n3)           }}}}}}}}}}}
*/

#include<iostream>
using namespace std;

// Brute Force approach --------------------->>>>>>

void MaxsubArrSum(int *arr, int n){
  int MaxSum = INT16_MIN;
  
for(int st=0; st<n ; st++){
  for(int end=st; end<n; end++){
    int CurrSum=0;
  for(int i=st; i<=end; i++){
    CurrSum += arr[i];
   
  }
  cout<<CurrSum<<" ,";
  MaxSum= max(MaxSum , CurrSum);

  }
  cout<<endl;
}
cout<<"Maximum sum of the subarray ="<<" "<< MaxSum <<endl;
cout<<endl;
}


// Optimized Approach ------------------------------------->>>>>>>>>>>>>>>>>>

void MaxsubArrSum2(int *arr, int n){
  int MaxSum = INT16_MIN;
  
for(int st=0; st<n ; st++){
  int CurrSum=0;
  for(int end=st; end<n; end++){
   CurrSum += arr[end];
  MaxSum= max(MaxSum , CurrSum);

  }
}
  cout<<"Optimized Maximum sum of the subarray ="<<" "<< MaxSum <<endl;

}


/*    Solve this Using Kadans Algorithm >.............         */

void MaxsubArrSum3(int *arr, int n){
  int MaxSum = INT16_MIN;
  int CurrSum=0;
  
for(int i=0; i<n; i++){
  CurrSum += arr[i];
  MaxSum = max(CurrSum , MaxSum);
  if(CurrSum <0){
    CurrSum =0;
  }
}
  cout<<"Maximum sum of the subarray Using Kadans Algo. ="<<" "<< MaxSum <<endl;

}

int main(){

int arr[6]={2,-3,6,-5,4,2};
int n=6;

MaxsubArrSum(arr,n);
MaxsubArrSum2(arr,n);
MaxsubArrSum3(arr,n);

return 0;
}


/*
OUtput :-------->>>>>

2 ,-1 ,5 ,0 ,4 ,6 ,
-3 ,3 ,-2 ,2 ,4 ,
6 ,1 ,5 ,7 ,
-5 ,-1 ,1 ,
4 ,6 ,
2 

Maximum sum of the subarray = 7

Optimized Maximum sum of the subarray = 7

*/