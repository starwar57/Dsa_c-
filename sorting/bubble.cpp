#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n)
{
  int i,j;
  bool swapped;
  for(i=0;i<n-1;i++)
  {
    swapped = false;
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }
    if(swapped==false)
    break;
  }
}
void printarray(int arr[],int n)
{
  int i;
  for(i=0;i<n;i++)
  cout<<""<<arr[i];
}
int main()
{
  int arr[]={64,34,25,12,22,11,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  bubble(arr,n);
  cout<<"sorted array\n";
  printarray(arr,n);
  return 0;
}


