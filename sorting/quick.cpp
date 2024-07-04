#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)//divide the array into two equal part
{
  int pivot=arr[high];
  int i=low-1;
  for(int j=low;j<=high;j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
void quicksort(int arr[],int low,int high)//qucksort function
{
  if(low<high)
  {
    int pi=partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
  }
}
int main()
{
  int arr[]={10,7,8,9,1,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  quicksort(arr,0,n-1);
  cout<<"sorted array\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"";
  }
  return 0;
}
