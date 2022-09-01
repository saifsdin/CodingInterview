/*
https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 

Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10
Explanation: 


*/

 //{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
     int leftmax(int arr[],int n,int index)
    {
        int max=-1;
        for(int i=index-1;i>=0;i--)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        
        return max;
    }
    int Rightmax(int arr[],int n,int index)
    {
        if(index==n-1)
            return arr[index];
        int max=-1;
        int start=index+1;
        for(int i=start;i<n;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        
        return max;
    }
    long long trappingWaterBrute(int arr[], int n){
        // code here
        long long ans=0;
        for(int i=1;i<n;i++)
        {
           // get left and right max in between value so that decide the min height 
           // to fill water , if we get 0 means , ther are no way to fill water
           int left= leftmax(arr,n,i);
           int right=Rightmax(arr,n,i);
          // cout<<left<<" "<<right<<endl;

           int minunit=min(left,right);
           if(i!=n-1)
           {
          // cout<<minunit-arr[i]<<endl;
          // min left and right tower value should be bigger than in between value.
          if(arr[i]<minunit)
          {
           ans=ans+(minunit-arr[i]);
          }
           }
           
           
            
        }
        
        return ans;
        
        
    }
    
    long long trappingWater(int arr[], int n){
        // code here
        //take seprate array for left and right
        int leftarr[n];
        int rightarr[n];
        
        leftarr[0]=arr[0];
        for(int i=1;i<n;i++)
        {
           leftarr[i] =max(leftarr[i-1],arr[i]);
        }
        rightarr[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
           rightarr[i] =max(rightarr[i+1],arr[i]);
        }
        
        
        long long ans=0;
        for(int i=0;i<n;i++)
        {
           // get left and right max in between value so that decide the min height 
           // to fill water , if we get 0 means , ther are no way to fill water
          // int left= leftmax(arr,n,i);
          // int right=Rightmax(arr,n,i);
          // cout<<leftarr[i]<<" "<<rightarr[i]<<endl;

           int minunit=min(leftarr[i],rightarr[i]);
           if(i!=n-1)
           {
          // cout<<minunit-arr[i]<<endl;
          // min left and right tower value should be bigger than in between value.
          if(arr[i]<minunit)
          {
           ans=ans+(minunit-arr[i]);
          }
           }
           
           
            
        }
        
        return ans;
        
        
    }
    
    
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends