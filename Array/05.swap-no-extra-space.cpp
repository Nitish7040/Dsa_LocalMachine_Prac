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
  swap(arr[st], arr[end]);
  st++;
  end--;
}

PrintArr(arr ,n);

return 0;
}
