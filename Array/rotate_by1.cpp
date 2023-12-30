#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n)
{
    int last=arr[n-1];//last element sorted in a variable
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"given array is";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    rotate(arr,n);
    cout<<"the rotate array is";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}