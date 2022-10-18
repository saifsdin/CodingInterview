/*
https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.


Example 1:

Input:
N = 2
start[] = {2, 1}
end[] = {2, 2}
Output: 
1
Explanation:
A person can perform only one of the
given activities.
Example 2:

Input:
N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}
Output: 
3
Explanation:
A person can perform activities 1, 2
and 4.

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
   public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({end[i],start[i]});
            
        }
        
        sort(v.begin(),v.end());
        
        int ans=1;
        int current=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(current<v[i].second){
                ans++;
                current=v[i].first;
            }
        }
        
        return ans;
    }  
    
    public:
    // only 14 test case passed
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection1(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        int ans=1;
        bool taken=false;
        int currentindex=0;
        for(int i=1;i<n;i++)
        {
           if(end[currentindex]<start[i] && start[currentindex]<start[i])
           {
               ans++;
               currentindex=i;
               
           }
          
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends