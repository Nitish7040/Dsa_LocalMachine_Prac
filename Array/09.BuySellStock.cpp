/*
Leetcode ques:- 121 (without using vector)
Buy and sell Stocks ..........

Prices = [7,1,5,3,6,4]
output = 5;
*/

#include<iostream>
using namespace std;

void MaxProfit(int *prices , int n){
  int BestBuy[10000];
  BestBuy[0]= INT8_MAX;

  for (int i = 1; i < n; i++)
  {
    BestBuy[i] = min(BestBuy[i-1] , prices[i-1]);
    cout<<BestBuy[i]<<" ";
  }
  cout<<endl;
  
  int Maxprofit =0 ;
  for (int i = 0; i < n; i++)
  {
    int currentprofit = prices[i] - BestBuy[i];
    Maxprofit = max(Maxprofit , currentprofit);
  }
  cout<<"Max Profit = "<< Maxprofit<<endl;
  

}

int main(){
int prices[6]={7,1,5,3,6,4};
int n= sizeof(prices)/sizeof(int);

MaxProfit(prices , n);

return 0;
}