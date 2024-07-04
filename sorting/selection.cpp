#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n)//function for selecting sort
{
  int i,j,min_idx;
  for(i=0;i<n-1;i++)
  {
    min_idx=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min_idx])
      min_idx=j;
    }
    if(min_idx!=i)
    swap(arr[min_idx],arr[i]);
  }
}
void printarray(int arr[],int n)//display function
{
  int i;
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
    cout<<endl;
  }
}
int main()
{
  int arr[]={64,25,12,21,11};
  int n=sizeof(arr)/sizeof(arr[0]);
  selection(arr,n);
  cout<<"sorted array"<<endl;
  printarray(arr,n);
  return 0;

}