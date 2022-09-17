/*
https://practice.geeksforgeeks.org/problems/shuffle-integers2401

Given an array arr[] of n elements in the following format {a1, a2, a3, a4, .., an/2, b1, b2, b3, b4, ., bn/2}, the task is shuffle the array to {a1, b1, a2, b2, a3, b3, , an/2, bn/2} without using extra space.

Example 1:

Input: n = 4, arr[] = {1, 2, 9, 15}
Output:  1 9 2 15
Explanation: a1=1 , a2=2 , b1=9 , b2=15
So the final array will be :  
a1, b1, a2, b2 = { 1, 9, 2, 15 }

Example 2:
Input: n = 6
arr[] = {1, 2, 3, 4, 5, 6}
Output: 1 4 2 5 3 6

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	vector<int> v1;
    vector<int> v2;
	public:
	 void solve(int arr[],int size,int a,int b)

 {

     if(b == size)return;

     v1.push_back(arr[a]);

     v2.push_back(arr[b]);

     

     solve(arr,size,a+1,b+1);

 }
	public:
	void shuffleArray(int arr[],int n)
	{
	      solve(arr,n,0,n/2);

     for(int i=0;i<n/2 ;i++)

     {
         // generate index : 0 2 4
         arr[2*i]=v1[i];
      
        // generate index : 1 3 5
         arr[2*i+1]=v2[i];

     } 
	}
	public:
	void shuffleArray1(int arr[],int n)
	{
	    // Your code goes here
	   // Your code goes here
	    vector<int>ans;
	    for(int i=0;i<n/2;i++){
	        ans.push_back(arr[i]);
	        ans.push_back(arr[n/2+i]);
	    }
	    for(int i=0;i<n;i++){
	        arr[i]=ans[i];
	    }
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends