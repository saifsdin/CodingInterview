/*
https://practice.geeksforgeeks.org/problems/reversing-the-vowels5304

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool checkv(char c) 
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            return true;
        }
        
        return false;
    }
    public:
        string modify (string s)
        {
            //code here.
            int i=0;
            int j=s.length()-1;
            while(i<=j)
            {
                if(checkv(s[i]) && checkv(s[j]))
                {
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                if(!checkv(s[i]))
                {
                   i++; 
                }
                if(!checkv(s[j]))
                {
                   j--; 
                }
            }
            
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends