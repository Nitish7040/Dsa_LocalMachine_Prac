/*
Print the Subarray for the given array:-
Arr[5]={1,2,3,4,5}; 
*/

#include<iostream>
using namespace std;
void PrintSubarrays(int *arr, int n){
  for(int st=0 ; st<n; st++){
    for(int end=st; end<n; end++){
      for(int i=st; i<=end ; i++){
        cout<<arr[i];
      }
      cout<<",";
    }
    cout<<endl;
  }
}

int main(){

int arr[5]={1,2,3,4,5};
int n=5;
PrintSubarrays(arr,n);

return 0;
}

/*
Output for subarrays :------->
1,12,123,1234,12345,
2,23,234,2345,
3,34,345,
4,45,
5
*/