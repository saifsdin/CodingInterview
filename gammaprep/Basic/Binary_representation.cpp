/*
https://practice.geeksforgeeks.org/problems/binary-representation5003/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        string s="000000000000000000000000000000";
    for(int i=0;i<32;i++)
    {
        if(N%2==1)
        s[i]='1';
        N=N/2;
    }
    reverse(s.begin(),s.end());
    return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends