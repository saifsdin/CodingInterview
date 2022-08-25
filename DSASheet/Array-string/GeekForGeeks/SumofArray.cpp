/*
https://practice.geeksforgeeks.org/problems/sum-of-array2326/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
Given an integer array Arr[] of size N. The task is to find sum of it.

Example 1:

Input:
N = 4
Arr[] = {1, 2, 3, 4}
Output: 10
Explanation: 1 + 2 + 3 + 4 = 10.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        ans=ans+arr[i];
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends