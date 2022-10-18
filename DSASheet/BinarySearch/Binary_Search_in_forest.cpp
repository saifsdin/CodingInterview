/*
https://practice.geeksforgeeks.org/problems/ffd66b6a0bf7cefb9987fa455974b6ea5695709e/1
There are n trees in a forest. The heights of the trees is stored in array tree[], where tree[i] denotes the height of the ith tree in the forest. If the ith tree is cut at a height H, then the wood collected is tree[i] - H, provided tree[i] > H. If the total woods that needs to be collected is exactly equal to k, find the height H at which every tree should be cut (all trees have to be cut at the same height). If it is not possible then return -1 else return H.

Example 1:

Input:
n = 5, k = 4
tree[] = {2, 3, 6, 2, 4}
Output: 3
Explanation: Wood collected by cutting trees
at height 3 = 0 + 0 + (6-3) + 0 + (4-3) = 4
hence 3 is to be subtracted from all numbers.
Since 2 is lesser than 3, nothing gets
subtracted from it.
Example 2:

Input:
n = 6, k = 8
tree[] = {1, 7, 6, 3, 4, 7}
Output: 4
Explanation: Wood collected by cutting trees
at height 4 = 0+(7-4)+(6-4)+0+0+(7-4) = 8


*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int found(int tree[],int h,int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(tree[i]>h)
            {
            int resh=tree[i]-h;
            
            sum=sum+resh;
            }
        }
        
        return sum;
    }
    public:
    int find_height(int tree[], int n, int k)
    {
        
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
           if(max<tree[i]) 
           {
               max=tree[i];
           }
        }
        // code here
        int low=0;
        int height=max;
        
        while(low<=height)
        {
            int mid=(low+height)/2;
            
            int res=found(tree,mid,n);
            
            if(res==k)
            {
                return mid;
            }
            else if(k>res)
            {
                height=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
            
            
        }
        
        return -1;
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends