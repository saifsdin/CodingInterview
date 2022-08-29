/*
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        int ctr1=0;
        int ctr2=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                ctr1++;
            }
            if(a[i]==2)
            {
                ctr2++;
            }
            
        }
        
        
        for(int i=n-1;i>=0;i--)
        {
            if(ctr2-->0)
            {
                a[i]=2;
            }
            else if(ctr1-->0)
            {
                a[i]=1;
            }
            else
            {
                a[i]=0;
            }
            
        }
        
     
        
        
        
        
     
    }
    
    void sort0121(int a[], int n)
    {
      int start=0;
      int middle=0;
      int end=n-1;
      
      while(middle<=end)
      {
          if(a[middle]==0)
          {
             int temp;
             temp=a[middle];
             a[middle]=a[start];
             a[start]=temp;
              start++;
              middle++;
          }
          else if(a[middle]==1)
          {
              middle++;
          }
          else 
          {
              int tmp=a[middle];
              a[middle]=a[end];
              a[end]=tmp;
              end--;
          }
          
      }
      
    }
    
   
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends