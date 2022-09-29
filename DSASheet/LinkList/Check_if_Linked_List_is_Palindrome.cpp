/*
Check if Linked List is Palindrome
https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

*/

//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
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




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
public:   
Node* reverseList(Node* slowptr)

    {

        Node* prev = NULL;

        Node* curr = slowptr;

        

        while(curr!=NULL)

        {

            Node* temp = curr->next;

            curr->next = prev;

            prev = curr;

            curr = temp;

        }

        return prev;

    }

    
    public:
    bool isPalindrome1(Node *head)

    {

        Node* dummy = head;

        Node* slowptr = head;

        Node* fastptr = head;

        

        if(head==NULL || head->next==NULL)

        return true;

        

        while(fastptr!=NULL && fastptr->next!=NULL)

        {

            slowptr = slowptr->next;

            fastptr = fastptr->next->next;

        }

        

        if(fastptr==NULL)

        {

           slowptr =  reverse(slowptr);

        }

        else

        {

            slowptr->next =  reverse(slowptr->next);

            slowptr = slowptr->next;

        }

        

        

        while(slowptr!=NULL)

        {

            if(slowptr->data != dummy->data)

            return false;

            

            slowptr = slowptr->next;

            dummy = dummy->next;

        }

        

        return true;

    }
    public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
         Node* dummy = head;
        Node* slow=head;
        Node* fast=head;
        
         if(head==NULL || head->next==NULL)
            return true;
        
       // while(fast!=NULL && fast->next!=NULL)
       // {
       //     fast=fast->next->next;
       //     slow=slow->next;
      //  }
      
       while(fast!=NULL && fast->next!=NULL)

        {

            slow = slow->next;

            fast = fast->next->next;

        }
        
        if(fast==NULL)

        {

           slow =  reverse(slow);

        }

        else

        {

            slow->next =  reverse(slow->next);

            slow = slow->next;

        }
        
        
        //Node* next=reverse(slow);
       // Node* curr=head;
        
        while(slow!=NULL)
        {
            if(slow->data!=dummy->data)
            
                return false;
          
            
            slow=slow->next;
            dummy=dummy->next;
        }
        
        
        
        return true;
    }
    
  public:
  Node* reverse(Node* head)
  {
      if(head==NULL)
      {
          return head;
      }
      
      Node* Current=head;
      Node* prev=NULL;
     
      
      while(Current!=NULL)
      {
          Node* next = Current->next;
          Current->next=prev;
          prev=Current;
          
          Current=next;
      }
      
      return prev;
  }
  
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends