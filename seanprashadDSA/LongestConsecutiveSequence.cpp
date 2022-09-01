//https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutiveBruteForce(vector<int>& nums) {
        
        // puting all element in multiset becouse it support duplicate value and 
        // automatically sort the element.
        multiset<int> m;
        for(int i=0;i<nums.size();i++)
        {
            m.insert(nums[i]);
        }
        
        //store answer
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            int element=nums[i];
            // while loop becouse need to check next element by incresing by one
            while(true)
            {
                auto i=m.find(element);
                if(i!=m.end())
                {
                   element++;
                    
                   c++; 
                }
                else
                {
                    break;
                }
            }
            ans=max(ans,c);
        }
        
        return ans;
    }
};