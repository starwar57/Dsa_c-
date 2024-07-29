// C++ implementation of De-queue using circular array

#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class deque{
  int arr[MAX];
  int front;
  int rear;
  int size;
public:
  deque(int size)
  {
    front=-1;
    rear=0;
    this->size=size;
  }
  void insertfront(int key);
  void insertrear(int key);
  void deletefront();
  void deleterear();
  boolisfull();
  bool isempty();
  int getfront();
  int getrear();
};
bool deque::isfull()
{
  return ((front==0 && rear==size-1) ||(front==rear+1));
}
bool deque::insertfront(int key)
{
  if(isfull())
  {
    cout<<"overflow\n"<<endl;
    return;
  }
  if(front==-1)
  {
    front=0;
    rear=0;
  }
  else if(front==0)
  front=size-1;
  else
  front=front-1;
  arr[front]=key;
}
void deque ::insertrear(int key)
{
  if(isfull())
  {
    cout<<"overflow"
  }
}