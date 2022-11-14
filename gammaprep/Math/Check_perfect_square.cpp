/*
https://practice.geeksforgeeks.org/problems/check-perfect-square5253/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPerfectSquare(int N){
        // code here 
        int nn=N/2;
        
        for(int i=1;i<nn;i++)
        {
            if(i*i==N)
            {
                return 1;
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends