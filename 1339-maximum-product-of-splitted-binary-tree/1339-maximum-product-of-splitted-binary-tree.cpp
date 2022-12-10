class Solution {
public:
    int totalsum(TreeNode* root){
        if(!root) return 0;
        return totalsum(root->left)+totalsum(root->right)+root->val;
    }
    
    int productmax(TreeNode* root,long int Totalsum,long int &ans){
        if(!root) return 0;
        int subtree_sum = 0;  
        subtree_sum += productmax(root->left,Totalsum,ans);
        subtree_sum += productmax(root->right,Totalsum,ans);
        subtree_sum += root->val;
        if(subtree_sum*(Totalsum-subtree_sum) > ans){
            ans = subtree_sum*(Totalsum - subtree_sum);
        }
        return subtree_sum;
    }
    
    long int maxProduct(TreeNode* root) {
       long Totalsum = totalsum(root);
       long int ans  = 0;
       productmax(root,Totalsum,ans);
        return ans%1000000007;
    }
};