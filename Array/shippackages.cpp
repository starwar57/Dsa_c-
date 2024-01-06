//ship packages problem 
#include<bits/stdc++.h>
using namespace std;
//function to check if the weight can be delivered in D days or not
bool isvalid(int weight[],int n,int D,int mx)
{
    //stores the count of days require to be delivered 
    //weights if the maximum capacity is mx
    int st=1;
    int sum=0;
    //traverse all the weight
    for(int i=0;i<n;i++)
    {
        sum+=weight[i];
        //if total weight is greater than max capacity
        if(sum>mx)
        {
            st++;
            sum=weight[i];
        }
        //if days are more than D then return false
        if(st>D)
        return false;
    }
    return true;
}
//function to find the least weight capacity of a boat to ship all the weight within D days
void ship(int weight[],int D,int n)
{
    //stores the total weight to be shipted
    int sum=0;
    //fin the sum of the weight
    for(int i=0;i<n;i++) 
    sum+=weight[i];
    //stores the maximum number of weight in the array that has to be shipted
    int s=weight[0];
    for(int i=1;i<n;i++)
    s=max(s,weight[i]);
    //stores the ending value of the search space
    int e=sum;
    //stores the require result
    int res=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        //if the mid can be shipted then update the result and end value of the search space
        if(isvalid(weight,n,D,mid))
        {
            res=mid;
            e=mid-1;
        }
        //search for a minimum weight
        else
        s=mid+1;
    }
    cout<<res;
}
int main()
{
    int weight[]={9,8,10};
    int D=3;
    int N=sizeof(weight)/sizeof(weight[0]);
    ship(weight,D,N);
    return 0;
}