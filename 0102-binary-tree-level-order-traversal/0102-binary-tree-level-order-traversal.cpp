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
    vector<vector<int>>  levelOrder(TreeNode* root) {
        vector<vector<int>>arr;
        queue<TreeNode*>q;
        q.push(root);
        
        if(root==NULL)
            return arr;
        
        while(1)
        {
            int size=q.size();
            if(size==0)
                return arr;
            vector<int>data;
            while(size>0)
            {
                TreeNode* temp=q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                size--;
            }
            arr.push_back(data);
        }
        return arr;
    }
};