class Solution {
public:
    int preindex=0;
    TreeNode* make(vector<int> &preorder, vector<int>&inorder,int start,int end)
    {
        if(start>end)
            return NULL;
        TreeNode* ans=new TreeNode(preorder[preindex++]);
        int pos;   
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==ans->val)
            {
                pos=i;
                break;
            }
        }
        ans->left=make(preorder,inorder,start,pos-1);
        ans->right=make(preorder,inorder,pos+1,end);
        return ans;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root=make(preorder,inorder,0,inorder.size()-1);
        return root;
    }
};