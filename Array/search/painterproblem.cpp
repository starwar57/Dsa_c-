//minimum time to paint the boards in continuous approach
#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    if(arr[i]>max)
    max=arr[i];
    return max;
}
int getsum(int arr[],int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    total+=arr[i];
    return total;
}
int numberofpainters(int arr[],int n,int maxlen)
{
    int total=0,numpainters=1;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
        if(total>maxlen)
        {
            total=maxlen;
             numpainters++;
        }
    }
    return numpainters;
}
int partition(int arr[],int n,int k)
{
    int lo=getmax(arr,n);
    int hi=getsum(arr,n);
    while(lo<hi)
    {
        int mid=lo+(hi-lo)/2;
        int requiredpinter=numberofpainters(arr,n,mid);
        if(requiredpinter<=k)
        hi=mid;
        else
        lo=mid+1;
    }
    return lo;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<partition(arr,n,k)<<endl;
    return 0;
}


