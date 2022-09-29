/*
https://leetcode.com/problems/next-greater-element-i/

*/

class Solution {
/*
here used two data structure 
1. stack - we pop stack element when we got next element and put into map for track
2. map - we keep element into map key element and value -> key> next grater element
3. putitng all index value which dont have next element and assinges -1 into map
4. loop into nums array and find the key and assinged value into ans vector 
*/

public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        int c=0;
        for(int i=0;i<nums2.size();++i){
            while(!st.empty() && nums2[i]>nums2[st.top()]){
               
                mp[nums2[st.top()]]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        
        while(!st.empty()){
           
            mp[nums2[st.top()]]=-1;
            st.pop();
        }
        vector<int>ans;
        for(auto x:nums1){
            ans.push_back(mp[x]);
        }
        return ans;
    }
public:
    vector<int> nextGreaterElement1(vector<int>& nums1, vector<int>& nums2) {
       vector<int> out;
        for(int i=0;i<nums1.size();i++)
        {
            // keep track the value found in array
            bool found=false;
            // initially keep -1 value
            int val=-1;
            for(int j=0;j<nums2.size();j++)
            {
                // check when value equal to nums1[i]==nums2[j]
                if(nums1[i]==nums2[j])
                {
                    //found element 
                   found=true;
                    
                   
                }
                if(found)
                {
                    //if value is grater than
                    if(nums2[j]>nums1[i])
                    {
                        val=nums2[j];
                        break;
                    }
                }
            }
            
            if(found)
            {
                out.push_back(val);
            }
        }
        
        return out;
        
    }
};


