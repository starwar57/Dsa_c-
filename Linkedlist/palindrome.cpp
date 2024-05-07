#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int data;
  node(int d)
  {
    data = d;
  }
  node* ptr;
};
bool ispalin(node* head)
{
  node* slow=head;
  stack<int> s;
  while(slow!=NULL)
  {
    s.push(slow->data);
    slow = slow->ptr;
  }
  while(head!=NULL)
  {
    int i=s.top();
    s.pop();
    if(head->data!=i)
    {
      return false;
    }
    head=head->ptr;
  }
  return true;
}
int main()
{
  node one=node(1);
  node two=node(2);
  node three=node(3);
  node four=node(2);
  node five=node(1);
  five.ptr=NULL;
  one.ptr=&two;
  two.ptr=&three;
  three.ptr=&four;
  four.ptr=&five;
  node* temp=&one;
  int result=ispalin(&one);
  if(result==1)
  cout<<"this is palindrome"<<endl;
  else
  cout<<"this is not palindrome"<<endl;
  return 0;
}