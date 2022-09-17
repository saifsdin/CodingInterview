/*
https://practice.geeksforgeeks.org/problems/triangle-shrinking-downwards0459
Given a string of a constant length, print a triangle out of it. The triangle should start with the given string and keeps shrinking downwards by removing one character from the begining of the string. The spaces on the left side of the triangle should be replaced with dot character.

 

Example 1:

Input:
S = Geeks
Output:
Geeks
.eeks
..eks
...ks
....s

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
#include<string>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string triDownwards(string S) {
        // code here
        string out;
        out=S;
        for(int i=0;i<S.length()-1;i++)
        {
            out=out+S.replace(i,1,".");
        }
        
        return out;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin >> S;

        Solution ob;
        string ans=ob.triDownwards(S);
        
        for(int i=0 ; i<ans.length() ; i++)
        {
            cout<<ans[i];
            if((i+1)%S.length()==0)
                cout<<endl;
        }
        
    }
    return 0;
}
// } Driver Code Ends