/*
Given a string S, the task is to create a string with the first letter of every word in the string.
 

Example 1:

Input: 
S = "geeks for geeks"
Output: gfg

*/

//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string s="";
	    s=s+S[0];
	    for(int i=1;i<S.length();i++)
	    {
	        if(S[i]==' ')
	        {
	            s=s+S[i+1];
	        }
	    }
	    
	    return s;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 

// } Driver Code Ends