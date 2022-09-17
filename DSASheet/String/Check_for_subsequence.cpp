/*
https://practice.geeksforgeeks.org/problems/check-for-subsequence4930
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
       int i=0,j=0,n=A.length(),m=B.length();
       
       while(i<=n && j<=m)
       {
           if(i==n)
           {
               return true;
           }
           if(j==m)
           {
               return false;
           }
           if(A[i]==B[j])
           {
               i++;
               j++;
           }
           else
           {
               j++;
           }
       }
       
       return false;
    }

    public:
    bool isSubSequence1(string A, string B) 
    {
        // code here
        int count=0;
        int index=0;
        for(int i=0;i<A.length();i++)
        {
            for(int j=index;j<B.length();j++)
            {
                if(A[i]==B[j])
                {
                    index=j;
                    count++;
                    break;
                }
                
            }
            
        }
        
        if(A.length()==count)
        {
            return 1;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends