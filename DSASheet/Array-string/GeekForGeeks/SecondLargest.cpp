/*
https://practice.geeksforgeeks.org/problems/second-largest3735/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
Given an array Arr of size N, print second largest element from an array.

Example 1:

Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int i,greatest=0,great=0;
             greatest=arr[0];
   for(i=1;i<n;i++)
   {
       if(greatest<arr[i])
       {
           greatest=arr[i];
       }
       
   }
 //   return greatest;
  for(i=0;i<n;i++)
  {
     if(great<arr[i] && arr[i]<greatest)
     {
         
       great=arr[i];
         
     }
     
  }
  
  if(great==0)
  {
      return -1;
  }
     return great;
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends