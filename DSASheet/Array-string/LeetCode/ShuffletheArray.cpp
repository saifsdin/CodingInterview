// https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // create blank array for pushing element
        vector<int> v;
        int index=n;
        for(int i=0;i<n;i++)
        {
           
                // start pushing initial incremented order element
                v.push_back(nums[i]);

                // next put the n , n++ element next element in array
                v.push_back(nums[index]);
                
            
                index++;
        }
        
        return v;
    }    
    
};