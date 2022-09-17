/*
https://practice.geeksforgeeks.org/problems/check-string1818
Given a string, check if all its characters are same or not.

Example 1:

Input:
s = "geeks"
Output: NO
Explanation: The string contains different
character 'g', 'e', 'k' and 's'.

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	for(int i=0;i<s.length()-1;i++)
        	{
        	    if(s[i]!=s[i+1])
        	    {
        	        return false;
        	    }
        	}
        	
        	return true;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends