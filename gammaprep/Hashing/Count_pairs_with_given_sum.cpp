/*
https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
*/

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{ 
    public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
       
       // code here

       unordered_map<int,int> m;

       int count=0;

    for(int i=0;i<n;i++){

    int value = arr[i];

   int neededvalue = k-value;

   if(m.find(neededvalue)!= m.end()){

               count+=m[neededvalue];

//FREQUENCY OF THAT ELEMENT IN AN ARRAY

           }

          m[arr[i]]++;

       }

     return count;

    
    }
public:
    int getPairsCount1(int arr[], int n, int k) {
        // code here
       
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(arr[i]+arr[j]==k)
                    {
                       
                        sum++;
                       
                       
                        
                    }
                }
            }
        }
        
        return sum/2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends