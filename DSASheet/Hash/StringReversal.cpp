/*
https://practice.geeksforgeeks.org/problems/string-reversalunpublished-for-now5324
Given a string, say S, print it in reverse manner eliminating the repeated characters and spaces.

Example 1:

Input: S = "GEEKS FOR GEEKS"
Output: "SKEGROF"

Example 2:

Input: S = "I AM AWESOME"
Output: "EMOSWAI"

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends

string reverseString(string s)
{
    int n = s.size();
    string str="";
    bool array[26]={false};
    for(int i=n-1; i>=0; i--){
        if(s[i]!=' ' && array[s[i]-'A']==false){
            str+=s[i];
            array[s[i]-'A']=true;
        }
    }
    return str;
}
string reverseString1(string s)
{
   //code here.
   string ans="";
   set<char> st;
   vector<char> v;
   for(int i=s.size()-1;i>=0;i--){
       if(s[i]==' ')continue;
       else if(st.find(s[i])!=st.end())continue;
       else{
           v.push_back(s[i]);
           st.insert(s[i]);
       }
   }
   for(auto i:v){
       ans = ans+i;
   }
   return ans;
}

