/*
https://practice.geeksforgeeks.org/problems/java-delete-alternate-characters4036

*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string out;
        for(int i=0;i<S.length();i++)
        {
            if(i%2==0)
            {
                out=out+S[i];
            }
            
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
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}

// } Driver Code Ends