//first and last position of elements in sorted array
//use linear or binary search
#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int x,int n)
{
    int low=0,high=n-1,res=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        high=mid-1;
        else if(arr[mid]<x)
        low=mid-1;
        else
        {
            res=mid;
            high=mid-1;
        }
    }
    return res;
}
int last(int arr[],int x,int n)
{
    int low=0,high=n-1,res=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        high=mid-1;
        else if(arr[mid]<x)
        low=mid+1;
        else
        {
            res=mid;
            low=mid+1;
        }
    }
    return res;
}
int main()
{
    int arr[]={1,2,2,2,2,3,4,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    cout<<"first occurrence="<<first(arr,x,n);
    cout<<"last occurrence="<<last(arr,x,n);
    return 0;
}