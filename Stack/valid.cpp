//Check for Balanced Brackets in an expression
#include<bits/stdc++.h>
using namespace std;
bool arebalanced(string exp)
{
  stack<char> temp;
  for(int i=0;i<exp.length();i++)
  {
    if(temp.empty())
    {
      temp.push(exp[i]);
    }
    else if((temp.top()=='(' && exp[i]==')')||(temp.top()=='{' && exp[i]=='}')||(temp.top()=='[' && exp[i]==']'))
    {
      temp.pop();
    }
    else
    {
      temp.push(exp[i]);
    }
  }
  if(temp.empty())
  {
    return true;
  }
  return false;
}
int main()
{
  string exp="{()}[]]";
  if(arebalanced(exp))
  cout<<"balanced";
  else
  cout<<"unbalanced";
}