/*
Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.

Example 1:

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first. 

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        char ret='#';
        map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            
        }
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])!=m.end())
            {
               auto it = m.find(s[i]); 
               if(it->second >1)
               {
                   return s[i];
               }
            }
        }
        return ret;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends