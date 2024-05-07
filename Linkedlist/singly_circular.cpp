//singly circular linkedlist
//header file include
#include<iostream>
using namespace std;
//structure define
struct node{
  int data;
  node* next;
};
class circularlinkedlist{
  private:
  node* head;
  public:
  circularlinkedlist()
  {
    head=nullptr;
  }
  //insert  at beginning of list
  void insertbegin(int value)
  {
    node* newnode=new node;
    newnode->data=value;
    if(head==nullptr)
    {
      head=newnode;
      newnode->next=head;
    }
    else{
      node* temp=head;
      while(temp->next!=head)
      {
        temp=temp->next;
      }
      temp->next=newnode;
      newnode->next=head;
      head=newnode;
    }
  }
  //insert at end of list
  void insertend(int value)
  {
    node* noewnode=new node;
    newnode->data=value;
    if(head==nullptr)
    {
      head=newnode;
      newnode->next=head;
    }
    else
    {
      node* temp=head;
      while(temp->next!=nullptr)
      {
        temp=temp->next;
      }
      temp->next=newnode;
      newnode->next=head;
    }
  }
  void deletebegin()
  {
    if(head==nullptr)
    {
      cout<<"list is empty";
      return;
    }
    if(head->next==head)
    {
      delete head;
      head=nullptr;
    }
    else
    {
      node* temp=head;
      while(temp->next!=head)
      {
        temp=temp->next;
      }
      temp->next=head->next;
      
    }
  }
  void deleteend()
  {
    if(head==nullptr)
    {
      cout<<"list is empty";
      return;
    }
    if(head->next==head)
    {
      delete head;
      head=nullptr;
    }
    else
    {
      node* temp=head;
      node* prev=nullptr;
      while(temp->next!=head)
      {
        prev=temp;
        temp=temp->next;
      }
      prev->next=head;
      delete temp;
    }
  }
}