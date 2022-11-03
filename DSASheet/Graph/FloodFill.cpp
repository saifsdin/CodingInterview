/*
https://leetcode.com/problems/flood-fill/
*/

class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int initialcolor)
    {
        int m=image.size();
        int n=image[0].size();
        if(sr<0 || sc<0 || sr>=m || sc>n)
            return;
        
        if(image[sr][sc]!=initialcolor)
            return;
         if(image[sr][sc]==color)
            return;
        
        image[sr][sc]=color;
      
        dfs(image, sr-1, sc,  color,initialcolor);
        dfs(image, sr+1, sc,  color,initialcolor);
        dfs(image, sr, sc-1,  color,initialcolor);
        dfs(image, sr, sc+1,  color,initialcolor);
        
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialcolor=image[sr][sc];
        dfs(image, sr, sc,  color, initialcolor);
        return image;
        
    }
};