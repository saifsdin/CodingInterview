/*
https://practice.geeksforgeeks.org/problems/third-largest-element/1?page=1&difficulty[]=-1&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Samsung&company[]=MakeMyTrip&company[]=Paytm&company[]=Goldman%20Sachs&company[]=D-E-Shaw&company[]=Oracle&company[]=Facebook&company[]=Cisco&company[]=Intuit%20&company[]=Directi&company[]=Salesforce&company[]=Twitter&company[]=PayPal&company[]=Zomato&category[]=Arrays&sortBy=submissions

Given an array of distinct elements. Find the third largest element in it.

Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.

Example 1:

Input:
N = 5
A[] = {2,4,1,3,5}
Output: 3
Example 2:

Input:
N = 2
A[] = {10,2}
Output: -1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest1(int a[], int n)
    {
         //Your code here
         
         sort(a,a+n);
         int index=n-3;
         return a[index];
    }
    
     int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n<2)
            return -1;

        // there are three variable
        int f=INT_MIN;
        int s=INT_MIN;
        int t=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            // if we found bigger value , replace value with Thirst to second
            // second to first and f to bigger value
           if(f<a[i])
           {
               t=s;
               s=f;
               f=a[i];
           }
           // if we found max of second value , replace with third to second becouse we got
           // second value and assinged second to third
           else if(a[i]>s)
           {
               t=s;
               s=a[i];
               
           }
           // we get max value of third , replace it third value 
           else if(a[i]>t)
           {
               t=a[i];
           }
        }
        
        return t;
        
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends