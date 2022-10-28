
/*
https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1
DSASheet\Array-string\GeekForGeeks\Rearrange_Array_Alternately.cpp
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
Note: Modify the original array itself.

Example 1:

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.
*/




//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    
    //Broute Force -- time exceed error 15 test case pass
    void rearrangeBruteForce(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int Last=n-1;
    	int First=0;
        int r=n-1;
    	while(First<Last)
    	{
            r=n-1;
    	    // Keep first index value in temp
    	    int temp=arr[First];
    	    arr[First]=arr[Last];
    	    // now move right 1st position for First+1
    	    
    	    
    	    for(int i=First+1;i<n-1;i++)
    	    {
               
    	        arr[r]=arr[r-1];
                r--;
    	    }
    	    //assinged temp value
    	    arr[First+1]=temp;
    	    // increase two postion becouse we are doing two things
    	    //1. temp
    	    //2. interchange two value
    	    First+=2;
    	}
    	 
    }
    
    // optimize solution o(n)
     void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
        // take auxilary array to put all element so that we can keep track correct version of array
    	vector<int> v;
    	for(int i=0;i<n;i++)
    	{
    	    v.push_back(arr[i]);
    	    
    	}
    	
    	int i=0;
    	int j=n-1;
    	int k=0;
    	
    	while(i<=j)
    	{
            // assing max element in modified array from auxilury array
    	    arr[k]=v[j];
    	    k++; // increase 1 so that next time assinged in correct position
    	    j--; // decrease 1 so that next time assinged max element
    	    
            // assinged min element from auxilary array 
    	    arr[k]=v[i];
    	    k++; // increase 1  , k increase two position ahead from i index 
    	    i++; // increase 1 , track correct element
    	}
    	 
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends