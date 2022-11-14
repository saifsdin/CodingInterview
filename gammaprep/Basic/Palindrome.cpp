/*
https://practice.geeksforgeeks.org/problems/palindrome0746/1
*/

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    int rev(int n)
    {
        int no=n;
        int ans=0;
        while(no>0)
        {
            int left=no%10;
            
             ans=ans*10+left;
            
            no=no/10;
            
            
            
            
        }
        
        return ans;
    }
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int revno=rev(n);
		    if(n==revno)
		        return "Yes";
		        
		  return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends