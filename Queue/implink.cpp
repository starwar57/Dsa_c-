#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
struct node* front=NULL;
struct node* rear=NULL;
struct node* temp;
void insert()
{
  int val;
  cout<<"insert element"<<endl;
  cin>>val;
  if(rear==NULL)
  {
    rear=(struct node*)malloc(sizeof(struct node));
    rear->next=NULL;
    rear->data=val;
    front=rear;
  }
  else{
    temp=(struct node*)malloc(sizeof(struct node));
    rear->next=temp;
    temp->data=val;
    temp->next=NULL;
    rear=temp;
  }
}
void delete()
{
  temp=front;
  if(front==NULL)
  {
    cout<<"underflow"<<endl;
    return;
  }
  else if(temp->next!=NULL)
  {
    temp=temp->next;
    cout<<"element deleted from queue"<<front->data<<endl;
    free(front);
    front=temp;
  }
  else
  {
    cout<<"elements deleted from queue is"<<front->data<<endl;
    free(front);
    front=NULL;
    rear=NULL;
  }
}
void display()
{
  temp=front;
  if((front==NULL)&&(rear==NULL))
  {
    cout<<"queue is empty"<<endl;
    return;
  }
  cout<<"queue elements are";
  while(temp!=NULL)
  {
    cout<<temp->data<<"";
    temp=temp->next;
  }
  cout<<endl;
}
int main()
{
  int ch;
  cout<<"1.insert element to queue"<<endl;
  cout<<"2.delete element from queue"<<endl;
  cout<<"3.display element of queue"<<endl;
  cout<<"4.exit"<<endl;
  do
  {
    cout<<"enter choice"<<endl;
    cin>>ch;
    switch(ch)
    {
      case 1:insert();
      break;
      case 2:delete();
      break;
      case 3:display();
      break;
      case 4:cout<<"exit"<<endl;
      break;
      default:cout<<"invalid choice"<<endl;
    }
  } while (ch!=4);
  return 0;
}
