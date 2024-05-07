
//reverse a singly linked list
#include<bits/stdc++.h>
using namespace std;
//structure define
struct node
{
  int data;
  struct node* next;
  node(int data)
  {
    this->data = data;
    next=NULL;
  }
};
struct linkedlist{
  node* head;
  linkedlist()
  {
    head=NULL;
  }
  void reverse()//reverse the list
  {
    node* current=head;
    node* prev=NULL,*next=NULL;
    while(current!=NULL)
    {
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
    }
    head=prev;
  }
  void print()//print the linked list
  {
    struct node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"";
      temp=temp->next;
    }
  }
  void push(int data)//push element into the linked list
  {
    node* temp=new node(data);
    temp->next=head;
    head=temp;
  }
};
int main()
{
  linkedlist ll;
  ll.push(20);
  ll.push(4);
  ll.push(15);
  ll.push(13);
  cout<<"given linkedlist \n";
  ll.print();
  ll.reverse();
  cout<<"reversed linkedlist \n";
  ll.print();
  return 0;
}