/*
Time complexity for binary search =    O(log n)
*/


#include<iostream>
using namespace std;

int binarySearch(int *arr , int n , int key){
  int st=0;
  int end = n-1;

  while(st<= end){
    int mid = (st + end)/2;

    if(arr[mid] == key){
      return mid;  // -----------> Key Found

    } else if (arr[mid]<key){  //-----------> Check in 2nd Half
      st= mid+1;
    } else{
                           //---------------> check in 1st Half
      end= mid-1;
    }
  }
  return -1;
}

int main(){

int arr[]= {2,4,6,8,10,12,14,16};
int n= sizeof(arr)/sizeof(int);

cout<< binarySearch(arr,n,2)<<endl;

}