/*
https://practice.geeksforgeeks.org/problems/subset-sums2234

*/
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
    //https://www.geeksforgeeks.org/print-sums-subsets-given-set/
public:
    vector<int> subsetSums1(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int> out={0};
        for(int i=0;i<n;i++)
        {
            int size=out.size();
            
            for(int t=0;t<size;t++)
            {
                out.push_back(out[t]+arr[i]);
            }
        }
        
        return out;
    }
    public:
    void subset(vector<int> arr, int l,int n, vector<int>& out,int sum=0)
    {
        if(l>n)
        {
            out.push_back(sum);
            return;
        }
        subset(arr,l+1,n,out,sum);
        subset(arr,l+1,n,out,sum+arr[l]);
    }
    
    public:
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> ans;
       subset(arr, 0,n-1, ans);
       return ans;
    }
    
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends