/*
https://practice.geeksforgeeks.org/problems/reverse-digit0316/1
*/

//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		   long long int no=n;
		     long long int ans=0;
		   while(no>0)
		   {
		        int last=no%10;
		        
		        ans=ans*10+last;
		        
		        no=no/10; // disgard no
		       
		   }
		   
		   return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends