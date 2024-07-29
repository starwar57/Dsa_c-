//reverse a queue
#include<bits/stdc++.h>
using namespace std;
void Print(queue<int>& Queue)
{
  while(!Queue.empty())
  {
    cout<<Queue.front()<<" ";
    Queue.pop();
  }
}

