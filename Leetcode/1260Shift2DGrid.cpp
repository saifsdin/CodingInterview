/*
https://leetcode.com/problems/shift-2d-grid/

*/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        vector<int> allvalue;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                allvalue.push_back(grid[i][j]);
            }
        }
        
        for(int i=0;i<k;i++)
        {
         int temp=allvalue[allvalue.size()-1];
        
        for(int i=allvalue.size()-1;i>0;i--)
        {
            allvalue[i]=allvalue[i-1]; 
        }
        
        allvalue[0]=temp;
        }
        int index=0;
        vector<vector<int>> vec;
        for (int i = 0; i < grid.size(); i++) {
        // Vector to store column elements
        vector<int> v1;
  
        for (int j = 0; j < grid[i].size(); j++) {
            v1.push_back(allvalue[index]);
           index++;
        }
  
        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }
        
        return vec;
        
    }
};