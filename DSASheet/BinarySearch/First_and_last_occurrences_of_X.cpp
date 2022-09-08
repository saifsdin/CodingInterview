/*
https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x2041

Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.

Note: If the number X is not found in the array, return '-1' as an array.

Example 1:

Input:
N = 4 , X = 3
arr[] = { 1, 3, 3, 4 }
Output:
1 2
Explanation:
For the above array, first occurence
of X = 3 is at index = 1 and last
occurence is at index = 2.
Example 2:

Input:
N = 4, X = 5
arr[] = { 1, 2, 3, 4 }
Output:
-1
Explanation: 
As 5 is not present in the array,
so the answer is -1.

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
 public:
        int first(vector<int> arr,int low,int high,int x)
        {
            if(low<=high)
            {
                int mid=(low+high)/2;
                
                if(arr[mid]==x)
                {
                    if(arr[mid]==arr[mid-1])
                    {
                        return first(arr, low, mid-1,x);
                    }
                    
                    return mid;
                }
                else if(arr[mid]>x)
                {
                    return first(arr, low, mid-1,x);
                }
                else
                {
                    return first(arr, mid+1, high,x);
                }
                
                
                
            }
            
            return -1;
        }

        public:
        int second(vector<int> arr,int low,int high,int x)
        {
            if(low<=high)
            {
                int mid=(low+high)/2;
                
                if(arr[mid]==x)
                {
                   
                    if(arr[mid]==arr[mid+1])
                    {
                        
                        return second(arr, mid+1, high,x);
                    }
                    
                    return mid;
                }
                else if(arr[mid]>x)
                {
                    return second(arr, low, mid-1,x);
                }
                else
                {
                    return second(arr, mid+1, high,x);
                }
                
                
                
            }
            
            return -1;
        }
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        
        // Code here
        vector<int> v;
        int f=first(arr, 0, n-1, x);
        int s=second(arr,0,n-1,x);
        
        if(f==-1 || s==-1)
        {
            v.push_back(-1);
       
        }
        else
        {
          v.push_back(f);
         v.push_back(s);  
        }
        
        
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends