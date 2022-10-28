/*
All numbers with specific difference
https://practice.geeksforgeeks.org/problems/all-numbers-with-specific-difference3558/1

Given a positive number N and a number D.  Find the count of positive numbers smaller or equal to  N such that the difference between the number and sum of its digits is greater than or equal to given specific value D.

Example 1:

Input:
N = 13 , D = 2
Output:
4
Explanation:
There are 4 numbers satisfying the
Conditions. These are 10,11,12 and 13.
Example 2:

Input:
N = 14 , D = 3
Output:
5
Explanation:
There are 5 numbers satisfying the
Conditions. These are 10,11,12,13 and 14.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
long long sumOfDigit(long long K) 
    {
    
        long long sod = 0;
        while (K)
        {
            sod += K % 10;
            K /= 10;
        }
        return sod;
    }
public:
 long long sumdigit(long long N)
 {
     long long k=N;
     long long sum=0;
     while(k)
     {
         int rem=k%10;
         sum=sum+rem;
         
         k=k/10;
     }
     
     return sum;
 }
  public:
    long long getCount1(long long N , long long D) {
        // code here
       
       long long low=1;
       long long high=N;
       
       
       
       while(low<=high)
       {
           long long mid=(low+high)/2;
           // get all 
           if(mid-sumdigit(mid)<D)
           {
             
               low=mid+1;
           }
           else
           {
              high=mid-1;  
           }
           
          
       }
      
       return (N-high);
       
    }
    
    public:
    long long getCount(long long N , long long D) {
        
        // Binary Search to get the least number satisfying the Conditions
        
        long long low = 1, high = N;
   
        while (low <= high) 
        {
            long long mid = (low + high) / 2;
     
            if (mid - sumdigit(mid) < D)        
                low = mid + 1;
             
    
            else       
                high = mid - 1;        
        }
        
        // The least satisfying number must be subtracted from N to get the answer.
    
        return (N - high);
    }
    
    
    
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N,D;

        cin>>N>>D;

        Solution ob;
        cout << ob.getCount(N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends