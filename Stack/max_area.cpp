//Maximum size rectangle binary sub-matrix with all 1s

#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

int maxhist(int row[])
{
  stack<int> result;
  int top_val;
  int max_area=0;
  int area=0;
  int i=0;
  while(i<C)
  {
    if(result.empty() || row[result.top()]<=row[i])
    result.push(i++);
    else
    {
      top_val=row[result.top()];
      result.pop();
      area=top_val*i;
      if(!result.empty())
      area=top_val*(i-result.top()-1);
      max_area=max(area,max_area);
    }
  }
  while(!result.empty())
  {
    top_val=row[result.top()];
    result.pop();
    area=top_val*i;
    if(!result.empty())
    area=top_val*(i-result.top()-1);
    max_area=max(area,max_area);
  }
  return max_area;
}