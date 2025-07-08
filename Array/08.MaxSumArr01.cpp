/*
Find the Maximum Subarray sum for the given array by using BRUTE-FORCE METHOD :--------------->>>>>>>

Arr[6]= {2,-3,6,-5,4,2};

Solution:- 7

Time complexity of this solution is :-------
   {{{{{{{{{{{  TC:--   O(n3)           }}}}}}}}}}}
*/

#include<iostream>
using namespace std;

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

}

int main(){

int arr[6]={2,-3,6,-5,4,2};
int n=6;

MaxsubArrSum(arr,n);

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

*/