// https://leetcode.com/problems/number-of-lines-to-write-string/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        // create map for keeping index 0 t0 25 , it will use to get width of
        // charachter 
        map<char,int> m;
        for(int i=0;i<26;i++)
        {
            char c='a'+i;
            
            m[c]=i;
        }
        // default line 1 first time
        int line=1;
        int pixel=0;
        vector<int> out;
        for(int i=0;i<s.length();i++)
        {
            int index=m[s[i]];
            int w=widths[index];
            
            pixel=pixel+w;
            if(pixel>100) // if pixel larger than 100
            {
              // subtract those width which increased
              pixel=pixel-w;
              // get one line , pixel 0 to set new line
              pixel=0;
              pixel=pixel+w;
              line=line+1;  
            }
            
        }
        
        out.push_back(line);
        out.push_back(pixel);
        return out;
    }
};

