/*
https://practice.geeksforgeeks.org/problems/number-pattern0517/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int N)
    {
        // Write Your Code here
        vector<string> ans;
        for(int i=1;i<=N;i++)
        {
            string s;
            
            for(int j=0;j<i;j++)
            {
                s+=to_string(j+1);
            }
            for(int j=i-1;j>0;j--){
                s+=to_string(j);
            }
            
            ans.push_back(s);
        }
        
        return ans;
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
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}
// } Driver Code Ends