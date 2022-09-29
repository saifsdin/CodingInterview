/*
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

*/

//{ Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    private:
    Node* reverseRecursion(Node* head){
        //base case
        if(head == NULL || head->next == NULL){
            return head;
        }
        //recursive relation
        Node* newHead = reverseRecursion(head->next);
        
        // solve 1 case;
       // 1->2->3->4->5->6 
       //1->next->next=1 2->1->next=null
       //2->next-next=2  3->2->1->next=null
       //3->next->next=3 4->3->2->1->next=null
       //4->next->next=4 5->4->3->1>next=null
       //5->next->next=5 6->5->4->3->1>next=null
        head->next->next = head;

        // break connection
        //1->2 break 2->1
        //2->3 break 3->2
        //3->4 break 4->3
        //4->5 break 5->4
        //6->null break 6->5
        head->next = NULL;
        
        return newHead;
        
    }
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        return reverseRecursion(head);
    }
    public:
    //Function to reverse a linked list.
    struct Node* reverseList1(struct Node *head)
    {
        Node* current=head;
        Node* prv=NULL;
        Node* next;
        while(current!=NULL)
        {
           next=current->next;
           current->next=prv;

           prv=current;

           current=next;
           
        }

        return prv;
    }
    
};
    


//{ Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends