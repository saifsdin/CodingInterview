/*
https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements4625/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array of N distinct elements, the task is to find all elements in array except two greatest elements in sorted order.


Example 1:

Input : 
a[] = {2, 8, 7, 1, 5}
Output :
1 2 5 
Explanation :
The output three elements have two or
more greater elements.   
Example 2:

Input :
a[] = {7, -2, 3, 4, 9, -1}
Output :
-2 -1 3 4


*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here 
        sort(a,a+n);
        int k=n-2;
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            v.push_back(a[i]);
        }
        
        return v;
        
    }

    public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here 
        int First=INT_MIN;
       int Second=INT_MIN;
       
       for(int i=0;i<n;i++)
       {
           if(First<a[i])
           {
               Second=First;
               First=a[i];
           }
           if(Second<a[i] && a[i]<First)
           {
               Second=a[i];
           }
       }
      
       vector<int> out;
       for(int i=0;i<n;i++)
       {
          
           if( a[i]!=First && a[i]!=Second)
           {
            
               out.push_back(a[i]);
           }
          
       }
       sort(out.begin(),out.end());

       return out;
        
    }  
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution ob;
        vector <int> res = ob.findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}
// } Driver Code Ends