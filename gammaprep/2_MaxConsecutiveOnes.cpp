/*
https://leetcode.com/problems/max-consecutive-ones/
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                c=0;
            }
            ans=max(ans,c);
        }
        
        return ans;
    }
};