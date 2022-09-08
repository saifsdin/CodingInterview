//https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetterBrute(vector<char>& letters, char target) {
       int n=letters.size();
        for(int i=0;i<n;i++)
        {
            if(letters[i]>target && target!=letters[i])
            {
                return letters[i];
            }
        }
        
        return letters[0];
    }
    
    public:
    char nextGreatestLetterBinarySearch(vector<char>& letters, char target) {
       int l=0;
        int h=letters.size();
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(letters[mid]>target && letters[mid]!=target)
            {
                if(mid>0 && letters[mid-1]>target)
                {
                    h=mid-1;
                }
                else
                {
                    return letters[mid]; 
                }
               
            }
            else
            {
                l=mid+1;
            }
        }
        
        return letters[0];
    }
};

