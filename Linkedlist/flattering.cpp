//flattening of a linkedlist
#include<bits/stdc++.h>
using namespace std;
class Node{
  int data;
  Node *next,*bottom;
};
Node *head-NULL;
Node* merge(Node* a,Node* b)
{
  if(a==NULL)
  return b;
  if(b==NULL)
  return a;
  Node* result;
  if(a->data<b->data)
  {
    result=a;
    result->bottom=merge(a-->bottom,b);
  }
  else
  {
    result=b;
    result->bottom=merge(a,b->bottom);
  }
  result->next=NULL;
  return result;
}
Noe* flatten(Node* root)
{
  if(root==NULL || root->next==NULL)
  return root;
  root->next=flatten(root->next);
  root=merge(root,root->next);
  return root;
}
Node* push(Node* head_ref,int data)
{
  Node* new_node=New Node();
  new_node->data=data;
  new_node->next=NULL;
  new_node->bottom=head_ref;
  head_ref=new_node;
  return head_ref;
}
void printlist()
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->bottom;
  }
  cout<<endl;
}
int main()
{
  
}