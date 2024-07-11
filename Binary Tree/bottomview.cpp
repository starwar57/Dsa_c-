//Print bottom view of a binary tree
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int key;
  node *left,*right;
  node(int key)
  {
    this->key = key;
    this->left =this->right=nullptr;
  }
};
void printbottom(node* n,int dist,int level,auto &map)
{
  if(node==nullptr)
  {
    return;
  }
  if(level>=map[dist].second)
  {
    map[dist]={node->key,level};
  }
  printbottom(node->left,dist-1,level+1,map);

   printbottom(node->right,dist+1,level+1,map);

}
void printbottom(node* root)
{
   map<int, pair<int, int>> map;
 
    printbottom(root, 0, 0, map);
 
    for (auto it: map) {
        cout << it.second.first << " ";
    }
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
    printbottom(root);
    return 0;
 
}