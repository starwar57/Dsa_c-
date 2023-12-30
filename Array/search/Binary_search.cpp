#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int start=0,end=n-1,mid;
    while(start<=n)
    {
        //mid find
        mid=(start+n)/2;
        if(arr[mid]==key)
            return mid;
        //arr[mid]==key
        //arr[mid]<key
        else if(arr[mid]<key)
            start=mid+1;
        else
        end=mid-1;
            //arr[mid]>key
    }
    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"enter the key";
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}