/*
https://practice.geeksforgeeks.org/problems/remove-characters-from-alphanumeric-string0648

Remove all characters except the numeric characters from an alphanumeric string.

Example 1:

Input: S = "AA1d23cBB4"
Output: 1234
Explanation: Remove all chacactres 
other than numbers

*/

//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	    for(int i=0;i<S.length();i++)
	    {
	        if((S[i]>='A' && S[i]<='Z') || (S[i]>='a' && S[i]<='z'))
	        {
	            S.replace(i,1,"");
	            i--;
	        }
	    }
	    return S;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends