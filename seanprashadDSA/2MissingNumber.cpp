/*
https://leetcode.com/problems/missing-number/

*/

class Solution {
public:
    int missingNumber1(vector<int>& nums) {
       
        int n=nums.size();
       int sum=n*(n+1)/2;
        cout<<sum;
        int s=0;
        for(int i=0;i<n;i++)
        {
           s=s+nums[i];
        }
        
        return sum-s;
        
        
         
    }
    
    public:
    int missingNumber(vector<int>& nums) {
       
       int XOR=0;
        
        for(int i=0;i<nums.size();i++)
        {
            XOR=XOR ^ nums[i];
        }
        
         for(int i=1;i<=nums.size();i++)
        {
            XOR=XOR ^ i;
        }
        
        return XOR;
         
    }
};