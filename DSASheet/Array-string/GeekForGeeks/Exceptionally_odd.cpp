/*
https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1?page=1&difficulty[]=-1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Samsung&company[]=MakeMyTrip&company[]=Paytm&company[]=Goldman%20Sachs&company[]=D-E-Shaw&company[]=Oracle&company[]=Facebook&company[]=Cisco&company[]=Intuit%20&company[]=Directi&company[]=Salesforce&company[]=Twitter&company[]=PayPal&company[]=Zomato&category[]=Arrays&sortBy=submissions
Given an array of N positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the exceptional number.

Example 1:

Input:
N = 7
Arr[] = {1, 2, 3, 2, 3, 1, 3}
Output: 3
Explaination: 3 occurs three times.
*/

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getOddOccurrence1(int arr[], int n) {
        // code here
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        
        //for(auto x:mp)
        for(auto itr=freq.begin();itr!=freq.end();++itr)
        {
            if(itr->second%2!=0)
            {
                return itr->first;
            }
        }
        
        return -1;
    }
    //Xor oprator exclude duplicate only unique value
     int getOddOccurrence(int arr[], int n) {
        // code here
        int res=arr[0];
        for(int i=1;i<n;i++)
        {
            res=arr[i]^res;
        }
        return res;
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
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends