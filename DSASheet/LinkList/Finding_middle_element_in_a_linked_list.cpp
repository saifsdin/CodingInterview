/*
https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

*/

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    
     public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddleSlowandFast(Node *head)
    {
       
       Node* fast=head;
       Node* slow=head;
       
       while(fast!=NULL && fast->next!=NULL)
       {
           fast=fast->next->next;
           slow=slow->next;
       }
       
       return slow->data;
       
    }
    public:
    int cout(Node *head)
    {
// Your code here
        int cout=0;
        Node* curr=head;
        while(curr!=NULL)
        {
            cout++;
            curr=curr->next;
        }

        return cout;
    }
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        
        int c=cout(head);
        int mid=c/2;
        int cmid=0;
        Node* current=head;
        while(current!=NULL && cmid<=mid-1)
        {
            cmid++;
            //cout<<current->data;
            current=current->next;
           
        }
        
        return current->data;
    }
};


//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends