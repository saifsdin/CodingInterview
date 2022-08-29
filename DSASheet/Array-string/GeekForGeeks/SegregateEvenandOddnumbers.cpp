/*
https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1?page=2&difficulty[]=-1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Samsung&company[]=MakeMyTrip&company[]=Paytm&company[]=Goldman%20Sachs&company[]=D-E-Shaw&company[]=Oracle&company[]=Facebook&company[]=Cisco&company[]=Intuit%20&company[]=Directi&company[]=Salesforce&company[]=Twitter&company[]=PayPal&company[]=Zomato&category[]=Arrays&sortBy=submissions

Given an array Arr[], write a program that segregates even and odd numbers. The program should put all even numbers first in sorted order, and then odd numbers in sorted order.

Example 1:

Input: 
N = 7
Arr[] = {12, 34, 45, 9, 8, 90, 3}
Output: 8 12 34 90 3 9 45
Explanation: Even numbers are 12, 34,
8 and 90. Rest are odd numbers. After
sorting even numbers 8 12 34 90 and 
after sorting odd numbers 3 9 45. Then
concat both.
Example 2:

Input: 
N = 5
Arr[] = {0, 1, 2, 3, 4}
Output: 0 2 4 1 3
Explanation: 0 2 4 are even and 1 3
are odd numbers.

*/


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	   vector<int> v;
	   sort(arr,arr+n);
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]%2==0)
	       {
	       v.push_back(arr[i]);
	       }
	   }
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]%2!=0)
	       {
	       v.push_back(arr[i]);
	       }
	   }
	   
	   
	   for(int i=0;i<n;i++)
	   {
	       arr[i]=v[i];
	   }
	   
	}
	
	void segregateEvenOdd(int arr[], int n) {
	    vector<int> odd,even;
	    for(int i=0;i<n;i++){
	        if(arr[i]&1) odd.push_back(arr[i]);
	        else even.push_back(arr[i]);
	    }
	    sort(even.begin(),even.end());
	    sort(odd.begin(),odd.end());
	    for(int i=0;i<even.size();i++){
	        arr[i] = even[i];
	    }
	    for(int i=0;i<odd.size();i++){
	        arr[even.size()+i] = odd[i];
	    }
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
        ob.segregateEvenOdd(arr, n);
       for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        } 
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends