#include <iostream>
#include <deque>
#include<iomanip>
using namespace std;
 

struct node
{
    int data;
    struct node *left, *right;
};
 
void printSpiral(struct node *root)
{
    if (root == NULL)  
    return;   
    node *ptr=root;
    deque<node*> d;
    d.push_front(root);
    int i=1,s=0,j=0;
    while(!d.empty())
    {
       if(i%2!=0)
       {
          s=d.size();
          for(j=0;j<s;j++)
          {
             ptr=d.back(); d.pop_back();
             cout<<setw(5)<<ptr->data;
             d.push_front(ptr->right); d.push_front(ptr->left);
          }
          cout<<endl; i++;
       }
       else
       {
          s=d.size();
          for(j=0;j<s;j++)
          {
            ptr=d.front(); d.pop_front();
            cout<<setw(5)<<ptr->data;
            d.push_back(ptr->left); d.push_back(ptr->right);
          }
          cout<<endl; i++;
       }
    }
 
   return;
}
 

struct node* newNode(int data)
{
    struct node* node = new struct node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return(node);
}
 
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);
    cout << "Spiral Order traversal of binary tree is \n";
    printSpiral(root);
    return 0;
}
