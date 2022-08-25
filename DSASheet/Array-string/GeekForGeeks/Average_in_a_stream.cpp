/*
https://practice.geeksforgeeks.org/problems/average4856/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
Given a stream of incoming numbers, find average or mean of the stream at every point.

 

Example 1:

Input:
n = 5
arr[] = {10, 20, 30, 40, 50}
Output: 10.00 15.00 20.00 25.00 30.00 
Explanation: 
10 / 1 = 10.00
(10 + 20) / 2 = 15.00
(10 + 20 + 30) / 3 = 20.00
And so on.
 

Example 2:

Input:
n = 2
arr[] = {12, 2}
Output: 12.00 7.00 
Explanation: 
12 / 1 = 12.00
(12 + 2) / 2 = 7.00

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> v;
	    float sum=0;
	    int count=1;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+arr[i];
	        v.push_back(sum/count);
	        count++;
	    }
	    
	    return v;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends