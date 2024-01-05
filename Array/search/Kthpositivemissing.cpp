//kth positive missing integer in an array
#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int k,int n)
{
    unordered_map<int,int> umap;
    int mins=9999;
    int maxs=-9999;
    for(int i=0;i<n;i++)
    {
        umap[arr[i]]=1;
        //mark each the element of the array as map
        if(mins>arr[i])
        mins=arr[i];//keep track the minimum element of the array
        if(maxs<arr[i])
        maxs=arr[i];//keep track the maximum element of the array
    }
    int counts=0;
    for(int i=mins;i<=maxs;i++)
    {
        if(umap[i]==0)
        counts++;
        if(counts==k)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={2,3,5,9,10,11,12};
    int k=4;
    cout<<solve(arr,k,7);//(arr,k,sizeofarr)
    return 0;

}