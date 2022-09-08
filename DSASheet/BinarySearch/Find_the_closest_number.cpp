/*
//https://practice.geeksforgeeks.org/problems/find-the-closest-number5513

Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

Note: If the difference is same for two values print the value which is greater than the given number.

Example 1:

Input : Arr[] = {1, 3, 6, 7} and K = 4
Output : 3
Explanation:
We have an array [1, 3, 6, 7] and target is 4.
If we look at the absolute difference of target 
with every element of an array we will 
get [ |1-4|, |3-4|, |6-4|, |7-4| ]. 
So, the closest number is 3.

Example 2:

Input : Arr[] = {1, 2, 3, 5, 6, 8, 9}, K = 4
Output : 5
 

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function findClosest() that takes an array (arr), sizeOfArray (n), integer target and return the closest number of the target in an array. The driver code takes care of the printing.

Expected Time Complexity: O(log(N)).
Expected Auxiliary Space: O(1).


*/


//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        int close1=BinarySearch(arr,0,n-1,target-1);
        int close2=BinarySearch(arr,0,n-1,target+1);
        
        if(close1>0 && close2>0)
        return max(close1,close2);
        
        if(close1>0 && close2==-1)
        return close1;
        
        if(close1==-1 && close2>0)
        return close2;
        
        
        return -1;
       
       
    } 
    
    int BinarySearch(int arr[],int low,int n,int target)
    {
        int high=n;
        int mid=(low+high)/2;
        
        while(low<=high)
        {
            if(arr[mid]==target)
            {
                return arr[mid];
            }
            if(arr[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
            mid=(low+high)/2;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends