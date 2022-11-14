/*
https://practice.geeksforgeeks.org/problems/celsius-to-fahrenheit-conversion5212/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    double celciusToFahrenheit(int C){
        //code here
        double F;
        F=C*9/5.0+32.0;
        return F;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout <<setprecision(2)<<fixed<< ob.celciusToFahrenheit(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends

