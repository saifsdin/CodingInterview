/*
https://practice.geeksforgeeks.org/problems/anagram-palindrome4720

Given a string S, Check if characters of the given string can be rearranged to form a palindrome.
Note: You have to return 1 if it is possible to convert the given string into palindrome else return 0. 

Example 1:

Input:
S = "geeksogeeks"
Output: Yes
Explanation: The string can be converted
into a palindrome: geeksoskeeg

Example 2:

Input: 
S = "geeksforgeeks"
Output: No
Explanation: The given string can't be
converted into a palindrome.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isPossible() which takes the string S as input and returns 1 if the string can be converted into a palindrome. Else, it returns 0.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(Distinct Characters).


Constraints:
1 <= |S| <= 106
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

// i take the auxirary array and count the element
// if string length odd means one charachter will single count 1 only if it count 2 this is not palidrom
// if string even all charachter count should be even charachter count%2==0 if 1 then this is not
//palidrom.
int isPossible (string S)
{
    // your code here
  
  int freq[26]={0};
  
  for(int i=0;i<S.length();i++)
  {
      freq[S[i]-'a']++;
  }
  int even=0;
  for(int i=0;i<26;i++)
  {
      if(S.length()%2==0)
      {
          if(freq[i]%2==1)
          {
              return 0;
          }
      }
      else
      {
          if(freq[i]%2==1)
          {
             even++;
             if(even>1)
             {
                 return 0;
             }
          }
      }
  }
  
  return 1;
}

int isPossible (string S)
{
   map<char,int> mp;
   for(auto x:S)
       mp[x]++;
   
   int countOddValues=0;
   for(auto x:mp)
   {
       if(x.second%2!=0)
           countOddValues++;
   }
   return countOddValues>1?0:1;
}