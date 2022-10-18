class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length()!=goal.length())
        {
            return false;
        }
        bool rightside=false;
        int index=-1;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==goal[j] && s[i+1]==goal[j+1])
            {
                j++;
                rightside=true;
                if(index==-1)
                {
                    index=i;
                }
            }
            
        }
        if(!rightside)
            return false;
      // cout<<rightside;
        int leftsize=s.length()-index;
        cout<<index<<endl;
        rightside=false;
        int sindex=0;
        for(int i=leftsize;i<s.size();i++)
        {
            //cout<<goal[i]<<endl;
          if(s[sindex]==goal[i])
            {
              cout<<s[sindex]<<endl;
              sindex++;
                rightside=true;
               
            } 
            else
            {
                return false;
            }
        }
        
        return rightside;
    }
};