// https://practice.geeksforgeeks.org/problems/ways-to-tile-a-floor5836/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
   #define c 1000000007 
  public:
    long long solve(long long N,vector<long long> &dp) {
        
       
        if(N<0)
            return 0;
        
        //code here
        if(N==0 || N==1)
            return 1;
            
        if(dp[N]!=-1)
        {
            return dp[N]%c;
        }
            
      dp[N]= (solve(N-1,dp)%c + solve(N-2,dp)%c)%c;
      return dp[N];
    }
    
    public:
    long long numberOfWays(long long N) {
        
        vector<long long> dp(N+1,-1);
        return solve(N,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}
// } Driver Code Ends