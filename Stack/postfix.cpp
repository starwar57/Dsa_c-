#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int evaluatePostfix(string postfix)
{
  stack<int> s;
  for(int i=0;i<postfix.length();i++)
  {
    char c=postfix[i];
    if(isdigit(c))
    {
      s.push(c-'0');
    }
    else{
      int op2=s.top();
      s.pop();
      int op1=s.top();
      s.pop();
      switch(c)
      {
        case '+':s.push(op1+op2);
        break;
        case '-':s.push(op1-op2);
        break;
        case '*':s.push(op1*op2);
        break;
        case '/':s.push(op1/op2);
        break;
        case '^':s.push(pow(op1,op2));
          break;
        }
     }
  }
  return s.top();
}
int main()
{
  string postfix;
  cout<<"enter the postfix expression"<<endl;
  cin>>postfix;
  int result=evaluatePostfix(postfix);
  cout<<"Evaluate result:"<<result<<endl;
  return 0;
}