/*
https://practice.geeksforgeeks.org/problems/sorting-employees5907/1
*/

//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;
struct node{
	int salary;
	string name;
};

// } Driver Code Ends
/* struct node{          // node structure
     int salary;
     string name;
 };
*/

bool comp(node a,node b)
{
    if(a.salary!=b.salary)
    {
        return a.salary<b.salary;
    }
    
    return a.name<b.name;
}

class Solution{

	public:
	void sortRecords(node arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr + n,comp);
	}
	 

};

//{ Driver Code Starts.



int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        node arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i].name>>arr[i].salary;
        

        Solution ob;
        ob.sortRecords(arr, n);
        for(int i=0;i<n;i++)
        	cout<<arr[i].name<<" "<<arr[i].salary<<" ";
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends