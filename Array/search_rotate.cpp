//Search an element in a sorted and rotated Array
#include<bits/stdc++.h>
using namespace std;
int searchtarget(vector<int>& nums,int target)
{
  int left=0,right=nums.size()-1;
  while(left<=right)
  {
    int mid = left+(right-left)/2;
    if(nums[mid]==target){
      return mid;
    }
    if(nums[mid]>=nums[left])
    {
      if(target>=nums[left] && target<nums[mid])
      {
        right=mid-1;
      }
      else
      {
        left=mid+1;
      }

    }
    else
    {
      if(target>nums[mid] && target<=nums[right])
      {
        left=mid+1;
      }
      else
      {
        right=mid-1;
      }
    }
  }
  return -1;
}
int main()
{
  vector<int> arr1 = {4,5,6,7,0,1,2};
  int target1=0;
  int result1=searchtarget(arr1, target);
  cout<<result1<<endl;
  vector<int> arr2 = {4,5,6,7,0,1,2};
  int target2=3;
  int result2=searchtarget(arr2, target2);
  cout<<result2<<endl;
  return 0;
}