//allocate the minimum number of pages in the book
#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int m,int curr_min)
{
    int studentrequire=1;
    int curr_sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>curr_min)
        return false;
        if(curr_sum+arr[i]>curr_min)
        {
            studentrequire++;
            curr_sum=arr[i];
            if(studentrequire>m)
            return false;
        }
        else
        curr_sum+=arr[i];
    }
    return true;
}
int findpage(int arr[],int n,int m)
{
    long long sum=0;
    if(n<m)
    return -1;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int start=mx,end=sum;
    int result=INT_MAX;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(ispossible(arr,n,m,mid))
        {
            result=mid;
            end=mid-1;
        }
        else
        start=mid+1;
    }
    return start;
}
int main()
{
    int arr[]={12,34,67,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=2;
    cout<<"minimum number of pages="<<findpage(arr,n,m)<<endl;
    return 0;
}


