//C++ Program For Swapping Nodes In A Linked List Without Swapping Data
#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int data;
  node* next;
};
void swapnode(node** head_ref,int x,int y)
{
  if(x==y)
  return;
  node* prevx=NULL,*currx=*head_ref;
  while(currx && currx->data!=x)
  {
    prevx=currx;
    currx=currx->next;
  }

  node* prevy=NULL,*curry=*head_ref;
  while(curry && curry->data!=y)
  {
    prevy=curry;
    curry=curry->next;
  }
  if(currx==NULL || curry==NULL)
  return;
  if(prevx!=NULL)
  prevx->next=curry;
  else
  *head_ref=curry;
  node* temp=curry->next;
  curry->next=currx->next;
  currx->next=temp;

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
  node* start=NULL;
  push(&start,7);
  push(&start,6);
  push(&start,5);
  push(&start,4);
  push(&start,3);
  push(&start,2);
  push(&start,1);
  cout<<"linkedlist before calling swapnode";
  printlist(start);
  swapnode(&start,4,3);
  cout<<"linkedlist after calling swapnode";
  printlist(start);
  return 0;  
}