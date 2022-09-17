/*
https://practice.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313
Given a string S. The task is to convert characters of string to lowercase.

Example 1:

Input: S = "ABCddE"
Output: "abcdde"
Explanation: A, B, C and E are converted to
a, b, c and E thus all uppercase characters 
of the string converted to lowercase letter.
Example 2:

Input: S = "LMNOppQQ"
Output: "lmnoppqq"
Explanation: L, M, N, O, and Q are 
converted to l, m, n, o and q thus 
all uppercase characters of the 
string converted to lowercase letter.
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>='A' && S[i]<='Z')
            {
                S[i]=S[i]-'A'+'a';
            }
        }
        
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends