class Solution {
public:
    int subTreesum(TreeNode* root,int& mx)
    {
        if(root==NULL) 
            return 0;
        int l = max(0,subTreesum(root->left,mx));
        int r = max(0,subTreesum(root->right,mx));
        int curr = root->val+l+r;
        cout<<curr<<" ";
        mx = max(mx,curr);                         
        return root->val+max(l,r);                      
    }
    int maxPathSum(TreeNode* root) 
    {
        int mx = INT_MIN;
        subTreesum(root,mx);
        return mx;
    }
};