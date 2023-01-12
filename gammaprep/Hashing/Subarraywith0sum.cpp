/*
https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
*/

//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
         int sum=0;
        for(int i=0;i<n;i++)
        {
            
            for(int j=i;j<n;j++)
            {
                sum=0;
                for(int k=i;k<=j;k++)
                {
                    sum=sum+arr[k];
                if(sum==0)
                {
                   
                    return true;
                }
                     
                    
                }
                
               
            }
            
           
        }
        
        return false;
        
       
        
        
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends