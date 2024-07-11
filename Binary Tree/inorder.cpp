//Inorder tree Traversal
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *left,*right;
  node(int data)
  {
    this->data = data;
    this->left=this->right=nullptr;
  }
};
void inorder(node* root)
{
  if(root==nullptr)
  {
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
int main()
{
  node* root=new node(1);
  node* root=new node(2);
  node* root=new node(3);
  node* root=new node(4);
  node* root=new node(5);
  node* root=new node(6);
  node* root=new node(7);
  node* root=new node(8);
  inorder(root);
  return 0;
}
