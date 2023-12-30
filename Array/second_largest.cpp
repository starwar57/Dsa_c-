#include<bits/stdc++.h>
using namespace std;
void printsecond(int arr[],int arr_size)//print the second largest element
{
    sort(arr,arr+arr_size,greater<int>());//sort the array in descending order
    for(int i=1;i<arr_size;i++)
    {
        if(arr[i]!=arr[0])
        {
            cout<<"second largest element is"<<arr[i];
            return;
        }
    }
    cout<<"there is no second largest element in the array"<<endl;
}
int main()
{
    int arr[]={12,35,42,87,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    printsecond(arr,n);
    return 0;
}



