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
    string calc(TreeNode* root,string &ans)
    {
        if(root==NULL)
            return ans;
        if(root!=NULL)
            ans=ans+to_string(root->val);
        if(root->left != NULL)
        {
            ans=ans+'(';
            calc(root->left,ans);
            ans=ans+')';
        }
        if(root->right != NULL)
        {
            if(root->left == NULL)
                ans=ans+"()";
            ans=ans+'(';
            calc(root->right,ans);
            ans=ans+')';
        }
        return ans;
    }
    string tree2str(TreeNode* root) {
        string ans;
        return calc(root,ans);
    }
};