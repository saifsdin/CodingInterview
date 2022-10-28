/*
https://practice.geeksforgeeks.org/problems/count-all-possible-paths-from-top-left-to-bottom-right3011/1
*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution {
  
  public:
   int solve(int m,int n,int start,int end,vector<vector<int>> &dp)
   {
       
       if(start==m-1 && end==n-1)
       {
           return 1;
       }
       
       if(end>=n || start>=m)
       {
           return 0;
       }
       if(dp[start][end]!=-1)
       {
           return dp[start][end];
       }
       //right
      int ans=solve(m,n,start,end+1,dp)+solve(m,n,start+1,end,dp);
      return dp[start][end]=ans % 1000000007;
       //down
       
   }
  public:
    long long int numberOfPaths(int m, int n){
        // code here
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends