//in-place convert a binary tree to its sum tree
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *left,*right;
  node(int data)
  {
    this->data = data;
    this->left =this->right=nullptr;
  }
};
void preorder(node* root)
{
  if(root==nullptr)
  {
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
int transform(node* root)
{
  if(root==nullptr)
  {
    return 0;
  }
  int left=transform(root->left);
  int right=transform(root->right);
  int old=root->data;
  root->data=left+right;
  return root->data+old;
}
int main()
{
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->left->right = new node(8);
    transform(root);
    preorder(root);
    return 0;
}