/*
https://practice.geeksforgeeks.org/problems/npr4253/1
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long fuct(int n)
        {
            if(n<=1)
            {
                return 1;
            }
            
            return n*fuct(n-1);
            
        }
public:
    long long nPr(int n, int r){
        // code here
       // (n!) / (n-r)!.
        int rr=n-r;
       return fuct(n)/fuct(rr);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends