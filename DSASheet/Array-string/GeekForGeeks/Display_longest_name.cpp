/*
https://practice.geeksforgeeks.org/problems/display-longest-name0853/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
Given a list of names, display the longest name.


Example:

Input:
N = 5
names[] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" }

Output:
GeeksforGeeks
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
        int len=0;
        int ind=0;
        for(int i=0;i<n;i++)
        {
           if(names[i].length()>len) 
           {
               len=names[i].length();
               ind=i;
           }
        }
        
        return names[ind];
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}
  // } Driver Code Ends