/*
https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
 bool checkV(char c)
 {
    // c=c-'A'+'a';
     if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
     {
         return true;
     }
     
     return false;
 }
public:	
	string removeVowels1(string S) 
	{
	    // Your code goes here
	    string str; 
	    for(int i=0;i<S.length();i++)
	    {
	        if(!checkV(S[i]))
	        {
	          str=str+S[i];
	        }
	    }
	    
	    return str;
	}
	public: 
string vowel(string s)
{
    regex r("[aeiou]");
    
    return regex_replace(s,r,"");
}
	public:	
	string removeVowels2(string S) 
	{
	    // Your code goes here
	    return vowel(S);
	}
	
	public:	
	string removeVowels(string s) 
	{
	    // Your code goes here
	    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') 
        {
            s.replace(i,1,"");
            i--;
        }
        
    }
    return s;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends