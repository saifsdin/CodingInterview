/*
https://leetcode.com/problems/custom-sort-string/
*/

class Solution {
public:
    string customSortString1(string order, string str) {
        
        unordered_map<char,int> mp;
        for(auto i:str)
            mp[i]++;
        string res;
        for(auto i:order)
        {
           
            
            res+=string(mp[i],i);
            mp[i]=0;
        }
       
        for (auto i : mp) {
            cout<<string(i.second, i.first)<<endl;
            res += string(i.second, i.first);
        }
        return res;
        
    }
    
    string customSortString(string order, string str) 
    {
        unordered_map<char,int> mp;
        int j=0;
        for(auto i:order)
            mp[i]=j++;
        sort(str.begin(),str.end(),[&](const char &a,const char &b){
            return mp[a]<mp[b];
        });
        return str;
    }
};