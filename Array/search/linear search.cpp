#include<iostream>
using namespace std;
//linear search function
void linear(int a[],int n)
{
	int temp=-1;//flag set as -1
	for(int i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			cout<<"element found at position"<<i+1<<endl;
			temp=0;
			break;
		}
	}
	if(temp==-1)
	{
		cout<<"no element found"<<endl;
	}
}
//main 
int main()
{
	int arr[5];
	cout<<"enter the elements in the array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to be search"<<endl;
	int num;
	cin>>num;
	linear(arr,num);
	return 0;
		
}