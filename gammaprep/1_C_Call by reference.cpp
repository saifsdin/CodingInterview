/*
https://practice.geeksforgeeks.org/problems/c-call-by-reference/1
*/

//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int aa=a;
    int ans=0;
    while(aa>0)
    {
        int digit=aa%10;
        ans=ans*10+digit;
        aa=aa/10;
    }
    
    int aaa=b;
    int ans2=0;
    while(aaa>0)
    {
        int digit=aaa%10;
        ans2=ans2*10+digit;
        aaa=aaa/10;
    } 
    a=ans;
    b=ans2;
   
}
void swap(int &a,int &b)
{
   
    //Add your code here.
    int temp=a;
    a=b;
    b=temp;
    
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends