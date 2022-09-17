/*
https://practice.geeksforgeeks.org/problems/josephus-problem
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.

The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.

Example 1:

Input:
n = 3 k = 2
Output: 3
Explanation: There are 3 persons so 
skipping 1 person i.e 1st person 2nd 
person will be killed. Thus the safe 
position is 3.
 

Example 2:

Input:
n = 5 k = 3
Output: 4
Explanation: There are 5 persons so 
skipping 2 person i.e 3rd person will 
be killed. Thus the safe position is 4.
 

Your Task:
You don't need to read input or print anything. You are required to complete the function josephus () that takes two parameters n and k and returns an integer denoting safe position. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= k, n <= 20

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
     int josephus(int n, int k)
   {
      vector<int> pos(n);
      for(int i=0;i<n;i++){
          pos[i]=i+1;
      }
      int index = 0;
      for(int i=0;i<n-1;i++){
           index = (index+k-1)%(pos.size());
           pos.erase(pos.begin()+index);
      }
      return pos[0];
   }
     public:
    void solve(vector<int>arr,int k,int index,int &ans){
       if(arr.size()==1){
           ans=arr[0];
           return ;
       }
       int n=arr.size();
       index=(index+k)%n;
       arr.erase(arr.begin()+index);
       solve(arr,k,index,ans);
       return;
   }
    public:
   int josephus(int n, int k)
   {
      //Your code here
      vector<int>arr(n);
      for(int i=0;i<n;i++){
          arr[i]=i+1;
      }
      int ans=-1;
      solve(arr,k-1,0,ans);
      return ans;
   }
   public int josephus(int n, int k)
   {
       //Your code here
       if(n==1){
           return 1;
       }
       else{
           return (josephus(n-1,k)+k-1)%n+1;
       }
    public:
    int josephus(int n, int k)
    {
       //Your code here
       
       int l=0;
       int h=n-1;
       // we take the counter variable
       int c=0;
       
       int k1=k-1;
       
       // we take set for tracking the killing persion , it will exclude for next round....
       set<int> seen;
       while(l<h)
       {
           // if counter reach to last persion , it initile by first person..
           if(c==n)
           {
               c=0;
           }
           // counter start
           c++;
           // check killing person
           if(seen.find(c)==seen.end())
           {
            // if k1==0 it means we kill the person and putting into set..
           if(k1==0)
           {
               // insert into set
               seen.insert(c);
              
              // again start the skiping
              k1=k; 
              h--;
              
           }
           k1--;
           }
           
       }
        for(int i=1;i<=n;i++)
        {
            if(seen.find(i)==seen.end())
            {
                return i;
            }
        }
       return -1;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends