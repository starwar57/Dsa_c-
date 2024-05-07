//multiply two numbers represented by linkedlist
#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
}
struct Node *newNode(int data)
{
  struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data=data;
  new_node->next=NULL;
  return new_node;
}
void push(struct Node **head_ref,int new_data)
{
  struct Node* new_node=new Node(new_data);
  new_node->next=(*head_ref);
  (*head_ref)=new_node;
}
long long multiplyTwoLists(Node *first,Node *second)
{
  long long N=100000007;
  long long num1=0,num2=0;
  while(first||second)
  {
    if(first)
    {
      num1=((num1)*10)%N+first->data;
      first=first->next;
    }
    if(second)
    {
      num2=((num2)*10)%N+second->data;
      second=second->next;
    }
  }
  return ((num1%N)*(num2%N))%N;
}
void printlist(struct Node*node)
{
  while(node!-NULL)
  {
    cout<<node->data;
    if(node->next)
    cout<<"->";
    node=node->next;
  }
  cout<<"\n";
}
int main()
{
  struct Node *first=NULL;
  struct Node *second=NULL;
  push(&first,6);
  

}
