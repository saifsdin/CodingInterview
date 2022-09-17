/*
https://practice.geeksforgeeks.org/problems/good-or-bad-string1417
In this problem, a String S is composed of lowercase alphabets and wildcard characters i.e. '?'. Here, '?' can be replaced by any of the lowercase alphabets. Now you have to classify the given String on the basis of following rules:

If there are more than 3 consonants together or more than 5 vowels together, the String is considered to be "BAD". A String is considered "GOOD" only if it is not “BAD”.

NOTE: String is considered as "BAD" if the above condition is satisfied even once. Else it is "GOOD" and the task is to make the string "BAD".
 

Example 1:

Input:
S = aeioup??
Output:
1
Explanation: The String doesn't contain more
than 3 consonants or more than 5 vowels together.
So, it's a GOOD string.
Example 2:

Input:
S = bcdaeiou??
Output:
0
Explanation: The String contains the
Substring "aeiou??" which counts as 7
vowels together. So, it's a BAD string.
*/

//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool vowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            return true;
        }
        return false;
    }
  public:
    int isGoodorBad(string S) {
        // code here
        string sv=S;
        string sc=S;
       for(int i=0;i<S.length();i++)
       {
           if(S[i]=='?')
           {
              sv.replace(i,1,"a"); 
              sc.replace(i,1,"d"); 
           }
       }
        //cout<<sv<<endl;
       // cout<<sc<<endl;
       int cv=0;
       for(int i=0;i<sv.length();i++)
       {
            if(vowel(sv[i]))
            {
               
                if(cv>5)
                {
                    return 0;
                }
                cv++;
            }
            else
            {
               
                if(cv>5)
                {
                   // cout<<"v";
                    return 0;
                }
                cv=0;
            }
       }
       int cc=0;
       for(int i=0;i<sc.length();i++)
       {
            if(!vowel(sc[i]))
            {
               
                // cout<<sc[i]<<endl;
                cc++;
                if(cc>3)
                {
                   // cout<<"c";
                    return 0;
                }
                
            }
            else
            {
               
                if(cc>3)
                {
                    return 0;
                }
                cc=0;
            }
       }


       

        return 1;
    }
    
    int isGoodorBad1(string S) {
       // code here
       int v=0,c=0;
       for(int i=0;i<S.length();i++){
           if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
               v++;
               c=0;
           }
           else if(S[i]=='?'){
               v++;
               c++;
           }
           else{
               c++;
               v=0;
           }
           if(c>3||v>5)return 0;
       }return 1;
   }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends

