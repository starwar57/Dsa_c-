//maximum subarray sum in an array kadens algorithm
#include<bits/stdc++.h>
using namespace std;
int maxsubarray(int a[],int size)
{
  int max_so_far = INT_MIN,max_ending_here=0;
  for(int i=0;i<size;i++)
  {
    max_ending_here=max_ending_here + a[i];
    if(max_so_far<max_ending_here)
    max_so_far=max_ending_here;
    if(max_ending_here<0)
    max_ending_here=0;
  }
}
int main()
{
  int a[]={-2,-3,4,-1,-2,1,5,-3};
  int n=sizeof(a)/sizeof(a[0]);
  int max_sum=maxsubarray(a,n);
  cout<<"maximum subarray sum"<<max_sum;
  return 0;
  
}