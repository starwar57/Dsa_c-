//Maximum Product Subarray
#include<bits/stdc++.h>
using namespace std;
int maxsubarrayproduct(int arr[],int n)
{
  int result=arr[0];
  for(int i=0;i<n;i++)
  {
    int mul=arr[0];
    for(int j=i+1;j<n;j++)
    {
      result=max(result,mul);
      mul*=arr[j];
    }
    result=max(result,max);
  }
  return result;
}
int main()
{
  int arr[]={1,-2,-3,0,7,-8,-2};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"maximum sub array product is"<<maxsubarrayproduct(arr,n)<<endl;
  return 0;
}