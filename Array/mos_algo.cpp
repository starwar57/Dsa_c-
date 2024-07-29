//MO’s Algorithm (Query Square Root Decomposition) 
#include<bits/stdc++.h>
using namespace std;
struct query{
  int l,r;
};

void printquerysum(int a[],query q[],int m)
{
  for(int i=0;i<m;i++)
  {
    int l=q[i].l,r=q[i].r;
    int sum=0;
    for(int j=l;j<=r;j++)
    sum+=a[j];
    cout<<"sum of ["<<l<<","<<r<<"] is "<<sum<<endl;
  }
}
int main()
{
  int a[]={1,1,2,1,3,4,5,2,8};
  int n=sizeof(a)/sizeof(a[0]);
  query q[]={{0,4},{1,3},{2,4}};
  int m=sizeof(q)/sizeof(q[0]);
  printquerysum(a,n,q,m);
  return 0;
  
}