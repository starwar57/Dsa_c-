//Triplet Sum in Array (3sum)
#include<bits/stdc++.h>
using namespace std;
bool findthreenumber(int a[],int arr_size[],int sum)
{
  for(int i=0;i<arr_size-2;i++)
  {
    for(j=i+1;j<arr_size-1;j++)
    {
      for(k=j+1;k<arr_size-1;k++)
      {
        if(a[i]+a[j]+a[k==sum])
        {
          cout<<"triplet is"<<a[i]<<","<<a[j]<<","<<a[k];
          return true;
        }
      }
    }
  }
  return false;
}
int main()
{
  int a[]={1,4,45,6,10,8};
  int sum=22;
  int arr_size=sizeof(a)/sizeof(a[0]);
  findthreenumbers(a,arr_size,sum);
  return 0;
}