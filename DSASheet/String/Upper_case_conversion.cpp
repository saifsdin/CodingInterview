/*
https://practice.geeksforgeeks.org/problems/upper-case-conversion5419

Given a string str, convert the first letter of each word in the string to uppercase. 

Example 1:

Input:
str = "i love programming"
Output: "I Love Programming"
Explanation:
'I', 'L', 'P' are the first letters of 
the three words.
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


char ConvertUpper(char c)
{
    return abs(c-32);// 32 come from A-a;
}
string transform(string s)
{
    // code here
    s[0]=ConvertUpper(s[0]);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ') // when enconter space , next charachter to be change as upper letter 
        {
           s[i+1]=ConvertUpper(s[i+1]) ;
        }
    }
    
    return s;
}