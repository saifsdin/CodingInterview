/*
https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620
Given a string S. The task is to find all permutations of a given string.

Example 1:

Input:
S = ABC
Output: ABC ACB BAC BCA CAB CBA 
Example 2:

Input:
S = ABSG
Output: ABGS ABSG AGBS AGSB ASBG ASGB
BAGS BASG BGAS BGSA BSAG BSGA GABS
GASB GBAS GBSA GSAB GSBA SABG SAGB
SBAG SBGA SGAB SGBA
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    void solve(string S,int index, vector<string>& out)
    {
        if(S.length()==index)
        {
            out.push_back(S);
        }
        
        for(int i=index;i<S.length();i++)
        {
            swap(S[i],S[index]);
            solve(S,index+1,out);
            swap(S[i],S[index]);
        }
    }
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> out;
        solve( S, 0, out);
        sort(out.begin(),out.end());
        return out;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
/*
Start solveABC i=0 index-0
Start solveABC i=1 index-1
Start solveABC i=2 index-2
output: ABC index-3
End solveABC i=2 index-2
End solveABC i=1 index-1
Start solveACB i=2 index-1
Start solveACB i=2 index-2
output: ACB index-3
End solveACB i=2 index-2
End solveABC i=2 index-1
End solveABC i=0 index-0
Start solveBAC i=1 index-0
Start solveBAC i=1 index-1
Start solveBAC i=2 index-2
output: BAC index-3
End solveBAC i=2 index-2
End solveBAC i=1 index-1
Start solveBCA i=2 index-1
Start solveBCA i=2 index-2
output: BCA index-3
End solveBCA i=2 index-2
End solveBAC i=2 index-1
End solveABC i=1 index-0
Start solveCBA i=2 index-0
Start solveCBA i=1 index-1
Start solveCBA i=2 index-2
output: CBA index-3
End solveCBA i=2 index-2
End solveCBA i=1 index-1
Start solveCAB i=2 index-1
Start solveCAB i=2 index-2
output: CAB index-3
End solveCAB i=2 index-2
End solveCBA i=2 index-1
End solveABC i=2 index-0
ABC ACB BAC BCA CAB CBA */
