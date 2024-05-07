#include<bits/stdc++.h>
using namespace std;
class node{
  public:
    int data;
    node* next;
    node(int value)
    {
      data=value;
      next=nullptr;
    }
};
class linkedlist{
  private:
  node* head;
public:
  linkedlist(){
         head=nullptr;
  }
  void insertbegin(int value)
  {
    node* newnode=new node(value);
    newnode->next=head;
    head=newnode;
  }
  void insertend(int value)
  {
    node* newnode=new node(value);
    if(head==nullptr)
    {
      head=newnode;
      return;
    }
    node* temp=head;
    while(temp->next!=nullptr)
    {
      temp=temp->next;
      temp->next=newnode;
    }
  }
  void insertbefore(int value,int beforevalue)
  {
    if(head==nullptr||head->data==beforevalue)
    {
      insertbegin(value);
      return;
    }
    node* current=head;
    while(current->next!=nullptr && current->data!=beforevalue)
    {
      current=current->next;
    }
    if(current->next==nullptr)
    {
      cout<<"value"<<beforevalue;
      return;
    }
    node* newnode=new node(value);
    newnode->next=current->next;
    current->next=newnode;
  }
  void insertafter(int value,int aftervalue)
  {
    node* current=head;
    while(current!=nullptr && current->data!=aftervalue)
    {
      current=current->next;
    }
    if(current==nullptr)
    {
      cout<<"value"<<aftervalue;
      return;
    }
    node* newnode=new node(value);
    newnode->next=current->next;
    current->next=newnode;
  }
  void deletebegin()
  {
    if(head==nullptr)
    {
      cout<<"list is empty"<<endl;
      return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
  }
  void deleteend()
  {
    if(head==nullptr)
    {
      cout<<"list is empty"<<endl;
      return;
    }
    if(head->next==nullptr)
    {
      delete head;
      head=nullptr;
      return;
    }
    node* current=head;
    while(current->next->next!=nullptr)
    {
      current=current->next;
    }
    delete current->next;
    current->next=nullptr;
  }
  void deletebefore(int beforevalue)
  {
    if(head==nullptr || head->next==nullptr || head->next->data==beforevalue)
    {
      cout<<"no element to delete before value"<<beforevalue<<endl;
      return;
    }
    node* current=head;
    while(current->next->next!=nullptr && current->next->data!=beforevalue)
    {
      current=current->next;
    }
    if(current->next->next==nullptr)
    {
      cout<<"value"<<beforevalue<<"not found in the list"<<endl;
      return;
    }
    node* temp=current->next;
    current->next=current->next->next;
    delete temp;
  }
  void deleteafter(int aftervalue)
  {
    node* current=head;
    while(current!=nullptr && current->data!=aftervalue)
    {
      current=current->next;
    }
    if(current==nullptr || current->next==nullptr)
    {
      cout<<"value"<<aftervalue<<"not found in the list"<<endl;
      return;
    }
    node* temp=current->next;
    current->next=current->next->next;
    delete temp;
  }
  void display()
  {
    node* current=head;
    while(current!=nullptr)
    {
      cout<<current->data<<"";
      current=current->next;
    }
    cout<<endl;
  }

};
int main()
{
  linkedlist list;
  list.insertbegin(10);
  list.insertend(20);
  list.insertbefore(20,50);
  list.insertafter(50,60);
  cout<<"the result";
  list.display();
  return 0;
}