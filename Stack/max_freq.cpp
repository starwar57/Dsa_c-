//Design a stack which can give maximum frequency element
#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> freqmap;
unordered_map<int,stack<int>> setmap;
int maxfreq=0;
void push(int x)
{
  int freq=freqmap[x]+1;
  freqmap[x]=freq;
  if(freq>maxfreq)
  maxfreq=freq;
  setmap[freq].push(x);

}
int pop()
{
  int top=setmap[maxfreq].top();
  setmap[maxfreq].pop();
  freqmap[top]--;
  if(setmap[maxfreq].size()==0)
  maxfreq--;
  return top;
}
int main()
{
  push(4);
  push(6);
  push(7);
  push(6);
  push(8);
  cout<<(pop())<<"\n";
  cout<<(pop());
  return 0;
}