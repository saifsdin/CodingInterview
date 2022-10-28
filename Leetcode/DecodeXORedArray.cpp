/*
https://leetcode.com/problems/decode-xored-array/
*/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
      // int x=0 xor 2;
       // cout<<x<<endl;
        vector<int> ans;
        ans.push_back(first);
        int no=0;
        for(int i=0;i<encoded.size();i++)
        {
           while(true) 
           {
               
               if(encoded[i]==(ans[i] xor no))
               {
                   cout<<i<<" _"<<no<<endl;
                  ans.push_back(no);
                   no=0;
                   break;
               }
               no++;
               if(ans.size()==encoded.size()+1)
                   break;
           }
            
        }
        
        return ans;
        
        
    }

    public:
     vector<int> decode(vector<int>& encoded, int first) {
       //int x=6 xor 4;
       // cout<<x<<endl;
        vector<int> ans;
        ans.push_back(first);
        int temp;
        for(int i=0;i<encoded.size();i++)
        {
          temp=encoded[i]^first; 
            ans.push_back(temp);
            first=temp;
        }
        
        return ans;
        
        
    }
};