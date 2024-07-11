//Check if two binary trees are identical or not 
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int key;
  node *left,*right;
  node(int key)
  {
    this->key = key;
    this->left=this->right=nullptr;

  }
};
int isidentical(node* x,node* y)
{
  if(x==nullptr || y==nullptr)
  {
    return 1;
  }
  return(x&&y)&&(x->key==y->key)&&isidentical(x->left,y->left)&&isidentical(x->right,y->right);
}
int main()
{
  node* x=nullptr;
  x=new node(15);
  x->left=new node(10);
  x->right=new node(20);
  x->left->left=new node(8);
  x->left->right=new node(12);
  x->right->left=new node(16);
  x->right->right=new node(25);
  node* y = nullptr;
 
    y = new node(15);
    y->left = new node(10);
    y->right = new node(20);
    y->left->left = new node(8);
    y->left->right = new node(12);
    y->right->left = new node(16);
    y->right->right = new node(25);
    if(isidentical(x,y))
    {
      cout<<"identical";
    }
    else
    {
      cout<<"not identical";
    }
    return 0;
}