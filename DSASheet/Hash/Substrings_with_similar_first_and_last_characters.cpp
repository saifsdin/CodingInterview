/*
https://practice.geeksforgeeks.org/problems/substrings-with-similar-first-and-last-characters3644
Method 3 (Best approach) : Now if we carefully observe then we can realize
 that the answer just depends on frequencies of characters in the original string.
  For example in string abcab, frequency of ‘a’ is 2, and substrings
   contributing to answering are a, abca and a respectively, a total of 3,
    which is calculated by (frequency of ‘a’+1)C2. 

*/

// C++ program to count all substrings with same
// first and last characters.
#include <bits/stdc++.h>
using namespace std;
 const int MAX_CHAR = 26;
// Returns true if first and last characters
// of s are same.
int checkEquality(string s)
{
    return (s[0] == s[s.size() - 1]);
}
 
int countSubstringWithEqualEnds(string s)
{
    int result = 0;
    int n = s.length();
 
    // Starting point of substring
    for (int i = 0; i < n; i++)
 
       // Length of substring
       for (int len = 1; len <= n-i; len++)
 
          // Check if current substring has same
          // starting and ending characters.
          if (checkEquality(s.substr(i, len)))
          {
              cout<<s.substr(i, len)<<endl;
            result++;
          }
 
    return result;
}
int countSubstringWithEqualEnds1(string s)
{
    int result = 0;
    int n = s.length();
 
    // Calculating frequency of each character
    // in the string.
    int count[MAX_CHAR] = {0};
    for (int i=0; i<n; i++)
        count[s[i]-'a']++;
 
    // Computing result using counts
    for (int i=0; i<MAX_CHAR; i++)
    {
        cout<<(count[i]*(count[i]+1)/2)<<endl;
        result += (count[i]*(count[i]+1)/2);
    }
 
    return result;
} 
// Driver function
int main()
{
    string s("abcab");
    cout << countSubstringWithEqualEnds(s);
    return 0;
}