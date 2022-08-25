/*
https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Samsung&company[]=MakeMyTrip&company[]=Paytm&company[]=Goldman%20Sachs&company[]=D-E-Shaw&company[]=Oracle&company[]=Facebook&company[]=Cisco&company[]=Intuit%20&company[]=Directi&company[]=Salesforce&company[]=Twitter&company[]=PayPal&company[]=Zomato&category[]=Arrays&sortBy=submissions

Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Example 1:

Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be 
rearranged to {0,1,2,4,5}
Example 2:

Input:
N = 3
A[] = {1,2,5}
B[] = {2,4,15}
Output: 0
Explanation: A[] and B[] have only 
one common value.
*/

//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        bool res=false;
        for(int i=0;i<N;i++)
        {
            if(A[i]==B[i])
            {
                res=true;
            }
            else
            {
                return false;
            }
            
        }
        
        return res;
        
    }


    bool checkSet(vector<ll> A, vector<ll> B, int N) {
        //code here
       multiset<int> eleset;
       for(int i=0;i<N;i++)
       {
          eleset.insert(A[i]); 
       }
       
       for(int i=0;i<N;i++)
       {
           auto it=eleset.find(B[i]);
           if(it!=eleset.end())
           {
               eleset.erase(it);
           }
           else
           {
               eleset.insert(B[i]);
           }
       }
       
       if(eleset.empty())
            return true;
        else
            return false;
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends
