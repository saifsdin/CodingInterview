/*
https://practice.geeksforgeeks.org/problems/java-reverse-a-string0416
Given a String S , print the reverse of the string as output.

Example 1:

Input: S = "GeeksforGeeks"
Output: "skeeGrofskeeG" 
Explanation: Element at first is at last and
last is at first, second is at second last and 
second last is at second position and so on 
*/

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
      
      int l=0;
      int h=S.length()-1;
      
      while(l<=h)
      {
          swap(S[l],S[h]);
          l++;
          h--;
      }
      return S;
      
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends