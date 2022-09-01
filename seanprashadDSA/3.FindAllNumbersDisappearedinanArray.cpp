//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    
        vector<int> v;
        
        map<int,int> map;
        
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]=nums[i];
        }
         int c=1;
       for(int i=0;i<nums.size();i++)
       {
           
            if(map.find(c)==map.end())
                v.push_back(c);
           
           c++;
           
       }
        
        return v;
        
    }
    
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {

        vector<int> v;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            if (mp[i] == 0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
    
    public:
vector findDisappearedNumbers(vector& nums) {
int a[100001]={0};
vector v;
for(int i=0;i<nums.size();i++){
a[nums[i]]++;
}
for(int i=1;i<=nums.size();i++){
if(a[i]==0){
v.push_back(i);
}
}
return v;
}
};

