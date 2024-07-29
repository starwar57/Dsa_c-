remove the loop from the linkedlist
#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node* next;
  Node(int x)
  {
    data=x;
    next=NULL;
  }
};
//function to remove the loop
void removeLoop(Node*,Node*);
int detectandremoveLoop(Node* list)
{
  Node *slow_p=list,*fast_p=list;
  while(slow_p && fast_p && fast_p->next)
  {
    slow_p =slow_p->next;
    fast_p =fast_p->next->next;
    if(slow_p==fast_p)
    {
      removeLoop(slow_p,list);
      return -1;
    }
  }
  return 0;
}
void removeLoop(Node* loop_node,Node* head)
{
  Node* ptr1=loop_node;
  Node* ptr2=loop_node;
  unsigned int k=1,i;
  while(ptr1->next!=ptr2)
  {
    ptr1 = ptr1->next;
    k++;
  }
  ptr1=head;
  ptr2=head;
  for(i=0;i<k;i++)
  ptr2=ptr2->next;
  while(ptr2!=ptr1)
  {
    ptr1=ptr1->next;
    ptr2=ptr2->next;
  }
  while(ptr2->next!=ptr1)
  {
    ptr1=ptr1->next;
    ptr2=ptr2->next;
  }
  while(ptr2->next!=ptr1)
  ptr2=ptr2->next;
  ptr2->next=NULL;
}
void printlist(Node* node)
{
  while(node!=NULL)
  {
    cout<<node->data<<"";
    node=node->next;
  }
}
int main()
{
  Node* head=new Node(50);
  head->next=new Node(20);
  
}