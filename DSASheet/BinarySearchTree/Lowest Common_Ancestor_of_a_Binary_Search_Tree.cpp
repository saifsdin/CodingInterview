/*
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
       int mini=min(p->val,q->val);
       int maxi=max(p->val,q->val);
        
        
        while(root!=NULL)
        {
           if(root->val<mini)
           {
               root=root->right;
           }
            else if(root->val>maxi)
            {
                root=root->left;
            }
            else
                return root;
            
           
            
        }
         return root;
    }

    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
    if((root->val>=p->val)&&(root->val<=q->val)){
        return root;
    }
    if((root->val>=p->val)&&(root->val>=q->val)){
        return solve(root->left,p,q);
    }
    if((root->val<=p->val)&&(root->val<=q->val)){
        return solve(root->right,p,q);
    }
    return NULL;
}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(p->val>q->val){
            TreeNode*temp=p;
            p=q;
            q=temp;
        }
        return solve(root,p,q);
    }

    //---------------------------

    public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);
        else
            return root;
    }
//The same, but shorter:

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         return (root->val - p->val) * (root->val - q->val) < 1 ? 
             root : lowestCommonAncestor(p->val < root->val ? root->left : root->right, p, q);
    }
};