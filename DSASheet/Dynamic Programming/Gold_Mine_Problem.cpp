/*
https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1
*/

class Solution{
    int dp[51][51];
public:
int solve(int start,int end,int n,int m,vector<vector<int>> M)
{
    
    if(start>=n || end>=m || start<0 || end<0)
    {
        return 0;
    }
    
    if(dp[start][end]!=-1)
    {
        return dp[start][end];
    }
    
    int updyn= solve( start-1, end+1, n, m,M)+M[start][end];
    int right= solve( start, end+1, n, m,M)+M[start][end];
    int updown= solve( start+1, end+1, n, m,M)+M[start][end];
   
    return dp[start][end]=max(updyn,max(right,updown));
    
}
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
          memset(dp,-1,sizeof dp);
        // code here
        int ans=INT_MIN;

        for(int i=0;i<n;i++){

            ans=max(ans,solve(i, 0, n, m,M));

        }

       return ans; 
       
    }
};