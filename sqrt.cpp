//sqrt of x using binary search
#include<bits/stdc++.h>
using namespace std;
int sqrt(int x)//function define for sqrt
{
    if(x==0 || x==1)
    return x;
    int start=1,end=x/2,ans;
    while(start<=end)
    {
        int mid=(start+end)/2;
        int sqr=mid*mid;
         if(sqr==x)
        {
         return mid;
        }
        if(sqr<=x)
        {
            start=mid+1;
            ans=mid;
        }
         else
        {
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int x=11;
    cout<<sqrt(x)<<endl;
    return 0;
}




