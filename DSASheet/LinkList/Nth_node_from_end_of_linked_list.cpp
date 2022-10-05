/*
Nth node from end of linked list

https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

*/

//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
int count(Node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    
    return count;
}
int getNthFromLast(Node *head, int n)
{
       // Your code here
      int count = 0; struct Node *temp =head;
    while(head){

                  head = head->next;

                  count++;

              }        

              if(count<n)

               return -1;

             

              count = count -n;

                  while(count--){

                  temp = temp->next;

              }

                             return temp->data;
}
//Function to find the data of nth node from the end of a linked list.
int getNthFromLast1(Node *head, int n)
{
       // Your code here
    if(head==NULL)
    {
        return 0;
    }
       // Your code here
       int c=count(head);
       if(n>c)
       {
           return -1;
       }
       int seek=c-n;
     
      // cout<<seek<<endl;
       int count=1;
       Node* curr=head;
     
       while(curr!=NULL && curr->next!=NULL && count<=seek)
       {
          
           
           curr=curr->next;
           count++;
       }
      // cout<<count;
       return curr->data;
}







