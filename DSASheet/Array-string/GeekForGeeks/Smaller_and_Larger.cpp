/*
https://practice.geeksforgeeks.org/problems/smaller-and-larger4005/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
Given a sorted array Arr of size N and a value X, find the number of array elements less than or equal to X and elements more than or equal to X. 

Example 1:

Input:
N = 7, X = 0
Arr[] = {1, 2, 8, 10, 11, 12, 19}
Output: 0 7
Explanation: There are no elements less or
equal to 0 and 7 elements greater or equal
to 0.


*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    int ssum=0;
	    int lsum=0;
	    vector<int> v;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<=x)
	        {
	            ssum++;
	        }
	        if(arr[i]>=x)
	        {
	            lsum++;
	        }
	    }
	    
	    v.push_back(ssum);
	    v.push_back(lsum);
	    
	    return v;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends