/*
https://practice.geeksforgeeks.org/problems/decimal-to-any-base-conversion2440/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string getNumber(int B, int N)
    {
        // Write Your Code here
        string v;
        int a,t;
        
        while(N>0)
        {
            t=N%B;
            N=N/B;
            
            if(t==10)
            {
                v.append("A");
            }
            else if(t==11)
            {
                v.append("B");
            }
            else if(t==12)
            {
                v.append("C");
            }
            else if(t==13)
            {
                v.append("D");
            }
            else if(t==14)
            {
                v.append("E");
            }
            else if(t==15)
            {
                v.append("F");
            }
            else
            {
                v.append(to_string(t));
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int B,N;
        cin>>B>>N;
        Solution ob;
        string ans  = ob.getNumber(B,N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends