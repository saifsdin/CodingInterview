/*
https://leetcode.com/problems/single-number/

*/

class Solution {
public:
    int singleNumber1(vector<int>& nums) {
        
        map<int,int> map;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            map[nums[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(map[nums[i]]==1)
                return nums[i];
        }
        
        return -1;
        
    }
    public:
    int singleNumberxor(vector<int>& nums) {
        
       int n=nums.size();
       
        int xorr=nums[0];
        for(int i=1;i<n;i++)
        {
            //cancelled out duplicate value and keeping only unique.
            xorr=xorr ^ nums[i];
        }
        
        return xorr;
        
    }
};