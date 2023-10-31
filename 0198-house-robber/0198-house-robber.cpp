class Solution {
public:
    int adj(vector<int>&nums,vector<int>&dp ,int ind)
    {
        if(ind==0)
            return nums[ind];
        if(ind<0)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];

        int pick=nums[ind]+adj(nums,dp,ind-2);
        int notpick= 0 +adj(nums,dp,ind-1);
        return dp[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(nums.size(),-1);
        return adj(nums,dp,n);
    }
};