//segregate 0s and 1s in the array
//use two pointer apporach
#include<bits/stdc++.h>
using namespace std;
//function to put 0s on left and all 1s on right
void segregate(int arr[],int size)
{
    int type_zero=0;
    int type_one=size-1;
    while(type_zero<type_one)
    {
        if(arr[type_zero]==1)
        {
            if(arr[type_one]!=1)
            swap(arr[type_zero],arr[type_one]);
            type_one--;
        }
        else
        type_zero++;
    }
}
int main()
{
    int arr[]={0,1,0,1,1,1};
    int i;
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    segregate(arr, arr_size);
    cout<<"array after segregate is";
    for(i=0;i<arr_size;i++)
    cout<<arr[i]<<"";
    return 0;
}