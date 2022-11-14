/*
https://practice.geeksforgeeks.org/problems/c-operators4602/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        vector<int> out;
        out.push_back(A+B);
       
         out.push_back(A*B);
         if(B>A)
         {
            out.push_back(B-A); 
            out.push_back(B/A); 
         }
         else
         {
             out.push_back(A-B); 
            out.push_back(A/B); 
         }
         
         return out;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends