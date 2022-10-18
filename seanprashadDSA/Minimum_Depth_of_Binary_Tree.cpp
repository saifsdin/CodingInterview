/*
https://leetcode.com/problems/minimum-depth-of-binary-tree/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int left=0;
        int right=0;
        
       left= minDepth(root->left);
       right= minDepth(root->right);
       // if one of the subtree is empty, return the height of the other plus one
       if (left == 0 || right == 0) return max(left, right) + 1;
       
        
        return  min(left,right)+1;
       
    }
};