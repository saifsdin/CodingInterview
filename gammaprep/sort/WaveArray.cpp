/*
https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// #include <algorithm>


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        bool found=true;
        for(int i=0;i<arr.size()-1;i++)
        {
        if(found)
        {
            if(arr[i]<arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                found=false;
            }
            else
            {
                 found=false;
            }
        }
        else
        {
             if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                found=true;
            }
            else
            {
               found=true; 
            }
        }
        }
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}
// } Driver Code Ends