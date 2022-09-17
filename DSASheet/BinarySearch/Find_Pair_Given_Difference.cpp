/*
https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559
Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N.

Example 1:

Input:
L = 6, N = 78
arr[] = {5, 20, 3, 2, 5, 80}
Output: 1
Explanation: (2, 80) have difference of 78.
Example 2:

Input:
L = 5, N = 45
arr[] = {90, 70, 20, 80, 50}
Output: -1
Explanation: There is no pair with difference of 45.

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair1(int arr[], int size, int n){
    //code
    
    set<int> s;
    
    for(int i=0;i<size;i++)
    {
        s.insert(arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        int findv= abs(n-arr[i]);
        if(s.find(findv)!=s.end())
        {
            return 1;
        }
    }
    
    return -1;
    
}
int BinarySearch(int arr[],int low,int high,int target)
{
   
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
            
            
        }
        
        return -1;
        
        
        
    
}
bool findPair2(int arr[], int size, int n){
    //code
    int N = size;
    int num = n;
    
    sort(arr , arr + N);
    for(int i = 0 ; i < N - 1 ; ++i){
        int searchEle = arr[i] + num;
        
        if(BinarySearch(arr , i + 1 , N , searchEle)) return true;
    
    }
    return false;
    
}

bool findPair(int arr[], int size, int n){
   unordered_map<int ,int> mp;
   sort(arr,arr+size);
   for(int i=0; i<size; i++){
       if(arr[i]>n){
          int b=arr[i]-n;
          if(mp[b]){
             return true;
          } 
       }
       mp[arr[i]]++;
   }
   return false;
}


