/*
https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define c 1000000007
class Solution
{
    public:
    long long solve(int n,vector<long long> &dp)
    {
        if(n<0)
        {
            return 0;
        }if(n==0)
        {
            return 1;
        }
        
        if(dp[n]!=-1)
        {
            return dp[n]%c;
        }
        dp[n]=(solve(n-1,dp)%c+solve(n-2,dp)%c+solve(n-3,dp)%c)%c;
        
        return dp[n];
        
    }
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
       
        vector<long long> dp(n+1,-1);
        return solve(n,dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends