class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            int n=nums[i];
            nums[i]=n*n;
        }
        sort(nums.begin(),nums.end());
        
            return nums;
    }
};


       
