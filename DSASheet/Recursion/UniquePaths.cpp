/*
https://leetcode.com/problems/unique-paths/
*/

class Solution {
public:
   int helper(int start,int end,int m,int n,vector<vector<int>> &dp)
    {
        
       if(start==m && end==n)
        {
          return 1;
        }
       if(dp[start][end]!=-1){
            return dp[start][end];   
        }
      int right=0;
       int down=0;
       if(end<n)
       {
        //right
        right= helper(start,end+1,m,n,dp);
       }
      
        if(start<m)
        {
        //down
        down= helper(start+1,end,m,n,dp);
            
            
        }
       
       return dp[start][end]=right+down;
        
        
       
      
        
    }
    
   
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m,vector<int>(n,-1));
       
       return helper(0,0,m-1,n-1,dp);  
       
    }
};
