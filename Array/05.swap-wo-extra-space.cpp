//  Reverse an array without extra space :----------

#include<iostream>
using namespace std;

void PrintArr(int *arr , int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<",";
  }
  cout<<endl;
}

int main(){
int arr[]={3,5,2,7,9,0};
int n= sizeof(arr)/sizeof(int);

int st=0; int end= n-1;

while(st<end){
  int temp= arr[st];
  arr[st] = arr[end];
  arr[end]= temp;
  
  // swap(arr[st], arr[end]);             {{======  By using Stl of C++ for Swap the Numbers   ======}}
  st++;
  end--;
}

PrintArr(arr ,n);

return 0;
}