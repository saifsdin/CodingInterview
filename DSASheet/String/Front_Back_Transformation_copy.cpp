/*
https://practice.geeksforgeeks.org/problems/front-back-transformation1659

iven a string S, consisting only of english alphabets, replace all the alphabets with the alphabets occuring at the same position when counted in reverse order of alphabets. For example, 'a' would be replaced by 'z', 'b' by 'y', 'c' by 'x' and so on. Any capital letters would be replaced by capital letters only.

 

Example 1:

Input: S = "Hello"
Output: Svool
Explanation: 'H' is the 8th letter from the
beginning of alphabets, which is replaced by
'S' which comes at 8th position in reverse order
of alphabets. Similarly, all other letters are 
replaced by their respective upper or lower case 
letters accordingly.

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends

char ConvertUpper(char c)
{
    return abs(c-32);// 32 come from A-a;
}
int retindex(char ch)
{
     char alpha;
    for(int i=0;i<26;i++)
    {
       
        
        if(ch>='A' && ch<='Z')
        {
           
            alpha='A'+i;
            
        }
        else
        {
             alpha='a'+i;
        }
          
           
         // cout<<alpha<<" "<<ch<<endl;  
        if(alpha == ch)
        {
            return i;
        }
    }
    return -1;
}
string convert(string s)
{
    // code here.
    
    char right[26];
    
    for(int i=0;i<26;i++)
    {
      
        
        char alphaz='z'-i;
        //cout<<alphaz<<endl;
        right[i]=alphaz;
    }
    
    for(int i=0;i<s.length();i++)
    {
       int ind= retindex(s[i]);
      // cout<<ind<<endl;
      if(s[i]>='A' && s[i]<='Z')
      {
            s[i]=ConvertUpper(right[ind]);
      }
      else
      {
            s[i]=right[ind];
      }
       
        
        
    }
    
    return s;
}