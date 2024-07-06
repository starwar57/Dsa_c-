//Best Time to Buy and Sell Stock (at most one transaction allowed)
#include<bits/stdc++.h>
using namespace std;
int maxprofit(int prices[],int n)
{
  int buy=prices[0],max_profit=0;
  for(int i=1;i<n;i++)
  {
    if(buy>prices[i])
    buy=prices[i];
    else if(prices[i]-buy>max_profit)
    max_profit=prices[i]-buy;

  }
  return max_profit;
}
int main()
{
  int prices[]={7,1,5,6,4};
  int n=sizeof(prices)/sizeof(prices[0]);
  int max_profit=maxprofit(prices,n);
  cout<<max_profit<<endl;
  return 0;
}