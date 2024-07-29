//priority queue using linkedlist
#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  int priority;
  Node* next;
  Node(int x,int p)
  {
    data=x;
    priority=p;
    next=NULL;
  }
};
int peek(Node* head)
{
  return head->data;
}
Node* pop(Node* head)
{
  Node* temp=head;
  head=head->next;
  delete temp;
  return head;
}
Node* push(Node* head,int d,int p)
{
  Node* start=head;
  Node* temp=new Node(d,p);
  if(head==NULL ||head->priority>p)
  {
    temp->next=head;
    head=temp;
  }
  else
  {
    while(start->next!=NULL && start->next->priority<p)
    {
      start=start->next;
    }
    temp->next=start->next;
    start->next=temp;
  }
  return head;
}
int isempty(Node* head)
{
  return (head==NULL);
}
int main()
{
  Node* pq=new Node(4,1);
  pq=push(pq,5,2);
  pq=push(pq,6,3);
  pq=push(pq,7,0);
  while(!isempty(pq))
  {
    cout<<" "<<peek(pq);
    pq=pop(pq);
  }
  return 0;
}

