#include<iostream>
using namespace std;
void reverse(int [],int);//function define
//main function
int main()
{
    int arr[100],tot,i,j,temp;
    cout<<"enter the size of the array";
    cin>>tot;
    cout<<"enter"<<tot<<"array elements";
    for(i=0;i<tot;i++)
    cin>>arr[i];
    cout<<"\noriginal array is \n";
    for(i=0;i<tot;i++)
    cout<<arr[i]<<"";
    reverse(arr,tot);
    cout<<"\n\n the reverse of the array is \n";
    for(i=0;i<tot;i++)
    cout<<arr[i]<<"";
    cout<<endl;
    return 0;
}
//reverse function
void reverse(int a[],int t)
{
    int i,j,temp;
    j=t-1;
    for(i=0;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}