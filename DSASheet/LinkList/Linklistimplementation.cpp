
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }

    cout<<endl;
}

void insertfront(Node** head, int data)
{
    Node* newnode=new Node();

    newnode->data=data;

    newnode->next=*head;
    *head=newnode;
}
void insertend(Node* head, int data)
{
    Node* newnode=new Node();

    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
         head=newnode;
    }
    else
    {
   
    Node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newnode;
    }

   
}

void insertnodebyvalue(Node* head,int value,int insValue )
{
    Node* temp=head;
    Node* prev=NULL;
    while(temp->next!=NULL && temp->data!=value)
    {
        prev=temp->next;
        temp=temp->next;
    }
   
    // create new node;
   
    Node* newnode=new Node();
    newnode->data=insValue;

    Node* next=prev->next; 
   
    prev->next=newnode;
   cout<<prev->next->data<<endl;
    newnode->next=next;

   // temp->next=prev;


}
void deletenodenext(Node* head,int val)
{
    Node* temp=head;
    Node* prv=NULL;
    while(temp->next!=NULL && temp->data!=val)
    {
            prv=temp->next;
            temp=temp->next;
    }

    Node* next=prv->next->next;
    prv->next=next;
}
void deletenode(Node* head,int val)
{
    Node* temp=head;
    Node* prv=NULL;
    while(temp->next!=NULL && temp->data!=val)
    {
            prv=temp;
            temp=temp->next;
    }

    Node* next=prv->next->next;
    prv->next=next;
}

int main() {
   Node* first=NULL;
   Node* second=NULL;
   Node* three=NULL;
 first=new Node();
    second=new Node();
 three=new Node();

   first->data=1;
   first->next=second;

   second->data=2;
  second->next=three;
   three->data=3;
  three->next=NULL;

// front add node
insertfront(&first,5);
insertend(first, 10);
insertnodebyvalue(first,2,7 );
printList(first);
//deletenodenext(first,2);
deletenode(first,7);
printList(first);
   
   return 0;
}
/*
Time Complexity	Worst Case	Average Case
Search	O(n)	O(n)
Insert	O(1)	O(1)
Deletion	O(1)	O(1)

*/

