#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
          int data;
          node* next;
};
void rotate(node** head_ref,int k)
{
  if(k==0)
  return;
  node* current=*head_ref;
  int count=1;
  while(count<k && current!=NULL)
  {
    current=current->next;
    count++;
  }
  if(current==NULL)
  return;
  node* kthnode=current;
  while(current->next!=NULL)
  current=current->next;
  current->next=*head_ref;
  *head_ref=kthnode->next;
  kthnode->next=NULL;
}
void push(node** head_ref,int new_data)
{
  node* new_node=new node();
  new_node->data=new_data;
  new_node->next=(*head_ref);
  (*head_ref)=new_node;
}
void printlist(node* n)
{
  while(n!=NULL)
  {
    cout<<n->data<<" ";
    n=n->next;
  }
}
int main()
{
  node* head=NULL;
  for(int i=60;i>0;i-=10)
  push(&head,i);
  cout<<"given linkedlist is\n";
  printlist(head);
  rotate(&head,4);
  cout<<"rotate list \n";
  printlist(head);
  return 0;
}