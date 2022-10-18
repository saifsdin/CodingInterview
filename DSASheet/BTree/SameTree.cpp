/*
https://leetcode.com/problems/same-tree/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL)
        {
            return true;
        }
        bool left=false;
        bool right=false;
        if(p!=NULL && q!=NULL)
        {
            if(p->val==q->val)
            {
             left=  isSameTree(p->left, q->left);
             right=  isSameTree(p->right, q->right);
            }
            else
            {
                return false;
            }
            
           
            
        }
        if(left==true && right==true)
            return true;
        
        return false;
       
        
    }
};