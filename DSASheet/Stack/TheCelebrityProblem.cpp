/*
https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

*/

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat, int N) 
    {
        stack<int> stk;
        
        for(int i=0;i<N;i++) {
            stk.push(i);
        }
        
        while(stk.size() > 1) {
            int col = stk.top();
            stk.pop();
            int row = stk.top();
            stk.pop();
            if(mat[row][col] == 1) {
                stk.push(col); //col may or may not be a celeb
            } else {
                stk.push(row); //row may or may not be a celeb
            }
        }
        
        int x = stk.top();
        stk.pop();
        
        for(int j=0;j<N;j++) {
            if(j == x) continue;
            if(mat[x][j] == 1) {
                return -1;
            }
        }
        
        for(int i=0;i<N;i++) {
            if(i == x) continue;
            if(mat[i][x] == 0) {
                return -1;
            }
        }
        
        return x;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends