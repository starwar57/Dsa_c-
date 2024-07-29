#include<bits/stdc++.h>
using namespace std;
struct mystack{
  stack<int> s;
  int minele;
  void getmin()
  {
    if(s.empty())
    cout<<"stack is empty\n";
    else
    cout<<"minimum element in the stack is"<<minele<<"\n";
  }
  void peek()
  {
    if(s.empty())
    {
      cout<<"stack is empty";
      return;
    }
    int t=s.top();
    cout<<"top most element is";
    (t<minele)?cout<<minele:cout<<t;

  }
  void pop()
  {
    if(s.empty())
    {
      cout<<"stack is empty";
      return;
    }
    cout<<"top most element removed";
    int t=s.top();
    s.pop();
    if(t<minele)
    {
      cout<<minele<<"\n";
      minele=2*minele-t;
    }
    else
    cout<<t<<"\n";
  }
  void push(int x)
    {
        
        if (s.empty()) {
            minele = x;
            s.push(x);
            cout << "Number Inserted: " << x << "\n";
            return;
        }
 
      
        else if (x < minele) {
            s.push(2 * x - minele);
            minele = x;
        }
 
        else
            s.push(x);
 
        cout << "Number Inserted: " << x << "\n";
    }
};
int main()
{
  mystack s;
  s.push(3);
  s.push(5);
  s.getmin();
  s.push(2);
  s.push(1);
  s.getmin();
  s.pop();
  s.getmin();
  s.pop();
  s.peek();
  return 0;
}