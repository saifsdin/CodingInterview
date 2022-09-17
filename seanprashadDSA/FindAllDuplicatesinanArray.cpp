// https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int,int> m;
        vector<int> out;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto i : m)
        {
            if(i.second>1)
            {
                out.push_back(i.first);
            }
        }
        
        return out;
        
    }
public:    
vector findDuplicates(vector& arr) {
vector ans;
int n=arr.size();
if(n==1)
{
return ans;
}
for(int i=0;i<n;i++)
{
int ind=(arr[i]-1)%n;
arr[ind] += n;
}
for(int i=0;i<n;i++)
{
if (( (arr[i]-1) / n) >= 2)
{
ans.push_back(i+1);
}
}
return ans;
}

    public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            if(nums[abs(nums[i])-1]>0)
                ans.push_back(abs(nums[i]));
        }
        return ans;
        
    }

public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;)
        {
            if(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            else
                i++;
        }   
            for(int i=0;i<n;i++)
            {
                if(i+1!=nums[i])
                    ans.push_back(nums[i]);
            }
        
        return ans;
        
    }
};