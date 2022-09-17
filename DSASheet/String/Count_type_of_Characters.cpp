/*
https://practice.geeksforgeeks.org/problems/count-type-of-characters3635
Given a string S, write a program to count the occurrence of Lowercase characters, Uppercase characters, Special characters and Numeric values in the string.
Note: There are no white spaces in the string.

Example 1:

Input:
S = "#GeeKs01fOr@gEEks07"
Output:
5
8
4
2
Explanation: There are 5 uppercase characters,
8 lowercase characters, 4 numeric characters
and 2 special characters.
*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int> out;
            int low=0;
            int up=0;
            int num=0;
            int spe=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    low=low+1;
                }
                else if(s[i]>='a' && s[i]<='z')
                {
                    up=up+1;
                }
                else if(s[i]>='0' && s[i]<='9')
                {
                    num=num+1;
                }
                else
                {
                    spe=spe+1;
                }
            }
            out.push_back(low);
            out.push_back(up);
            out.push_back(num);
            out.push_back(spe);
            
            return out;
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
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends