#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void printLevel(Node *root){
   
   /* it prints line by line visit and explore
   20
   /\
  /  \
30     40
*/

if(root==NULL)
{
    return;
}
queue<Node*> q;
q.push(root);

while(!q.empty())
{
      Node* v = q.front();
     q.pop();
     cout<<v->key<<" ";
     if(v->left!=NULL)
     {
         q.push(v->left);
     }
     if(v->right!=NULL)
     {
         q.push(v->right);
     }
}

}  

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	
	printLevel(root);
}