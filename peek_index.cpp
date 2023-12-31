//peek index in mountain array
#include<bits/stdc++.h>
using namespace std;
int peakindex(int arr[],int high)
{
    int low=0;
    int mid;
    high-=1;
    while(low<high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]>=arr[mid+1])
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}
int main()
{
    int mountainarray[]={4,8,16,32,27,9,3};
    int n=sizeof(mountainarray)/sizeof(mountainarray[0]);
    int peak=peakindex(mountainarray,n);
    cout<<"peak index:"<<peak;
    return 0;
}