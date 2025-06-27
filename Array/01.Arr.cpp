// Find largest no in arr :-

#include<iostream>
using namespace std;
int main(){
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr)/ sizeof(int);

  int max = arr[0];

  for (int i = 0; i < n; i++)
  {
    /* code */
    if (arr[i]> max)
    {
      /* code */
      max =arr[i];
    }
    
  }
  cout<<"largest no. = "<<max<<endl;
  
}