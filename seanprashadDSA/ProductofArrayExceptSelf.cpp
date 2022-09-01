//https://leetcode.com/problems/product-of-array-except-self/

class Solution {

public:
    vector<int> productExceptSelfoptimize(vector<int>& nums) {
       
        int n=nums.size();
        vector<int> out;
        int left[n];
        int right[n];
        
        left[0]=nums[0];
        for(int i=1;i<n;i++)
        {
           left[i]=left[i-1]*nums[i]; 
        }
        
        right[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i];
           
        }
        
        
        
        int current=1;
        for(int i=0;i<n;i++)
        {
            if(i==0 || i==n-1)
            {
                if(i==0)
                {
               current=right[i+1];
                out.push_back(current);
                }
                else
                {
                    
                   current=left[i-1]; 
                   out.push_back(current);
                    
                }
            }
            else
            {
               current=left[i-1]*right[i+1]; 
                     out.push_back(current); 
            }
        }
        
        return out;
       
    }
public:
    vector<int> productExceptSelf2(vector<int>& nums) {
        
        int n=nums.size()-1;
        vector<int> v;
        int ans=1;
        
        int i=0;
        int p=0;
        while(i<=n)
        {
            if(p!=i)
            {
               
                ans=ans*nums[p];
                
            }
            if(p==n)
            {
                
                v.push_back(ans);
                ans=1;
                p=0;
                i++;
            }
            else
            {
               p++;  
            }
           
        }
        
        return v;
       
    }
    public:
    vector<int> productExceptSelfbrute(vector<int>& nums) {
        
        vector<int> out;
        
        for(int i=0;i<nums.size();i++)
        {
            int current=1;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    current=current*nums[j];
                }
            }
           // int mult=nums[i]*current;
            out.push_back(current);
        }
        
        return out;
    }
};