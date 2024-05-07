#include<bits/stdc++.h>
using namespace std;
class node{
  public:
          int data;
          node* next;
          node(int x)
          {
            data=x;
            next=NULL;
          }
};
void push(class node**head_ref,int data_val)
{
  class node* new_node=new node(data_val);
  new_node->next=*head_ref;
  *head_ref=new_node;
}
int getmiddle(node* head)
{
  vector<int> v;
  while(head!=NULL)
  {
    v.push_back(head->data);
    head=head->next;
  }
  int middleidx=v.size()/2;
  return v[middleidx];
}
int main()
{
  node* head=NULL;
  for(int i=6;i>0;i--)
  {
    push(&head,i);
  }
  cout<<"Middle value of the linked list is:"<<getmiddle(head)<<endl;
  return 0;

}