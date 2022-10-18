/*
https://leetcode.com/problems/set-matrix-zeroes/
*/

// not most of test case pass , need to more practices.

class Solution {
//working @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

class Solution {

public:
    void setZeroes(vector<vector<int>>& matrix) {
        
       
        int rows = matrix.size(), cols = matrix[0].size();
  vector < int > dummy1(rows,-1), dummy2(cols,-1);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {
        dummy1[i] = 0;
        dummy2[j] = 0;
      }
    }

  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (dummy1[i] == 0 || dummy2[j]==0) {
        matrix[i][j] = 0;
      }
    }
  }
       
    }
};

//@@@@@@@@@@@@@@@@@@@end@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
public:
    void setzero(vector<vector<int>>& matrix,int rr,int cc)
    {
        int size=matrix.size();
       
       
        for(int r=0;r<size;r++)
        {
            for(int c=0;c<matrix[r].size();c++)
            {
               if(rr==r || cc==c)
               {
                matrix[r][c]=0;
               }
               
                
            }
               
            
            
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
       
        int size=matrix.size();
       map<int,int> mCR;
        for(int r=0;r<size;r++)
        {
            for(int c=0;c<matrix[r].size();c++)
            {
                if(matrix[r][c]==0)
                {
                    
                  mCR[c]=r;
               
                }
            }
            
            
        }
        
        for(auto i : mCR)
        {
            int C=i.first;
            int R=i.second;
           cout<<C<<" "<<R<<endl;
            setzero(matrix,R,C);
        }
        
       
    }


    
};