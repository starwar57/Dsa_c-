#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={1,2,3};
  sort(arr,arr+3);
  cout<<"the 3! possible permutation with 3 elements\n";
  do
  {
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";
  }while(next_permutation(arr,arr+3));
  
  cout<<"after loop"<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<"\n";
  return 0;
}