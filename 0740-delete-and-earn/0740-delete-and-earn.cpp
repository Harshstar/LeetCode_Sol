class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>freq(20006);
        int dp[20006];
        for(auto x:nums)
            freq[x]++;
        dp[1]=freq[1];
        dp[2]=max(dp[1],freq[2]*2);
        for(int i=3;i<=maxi;i++)
            dp[i]=max(dp[i-1],dp[i-2]+freq[i]*i);
        
        return dp[maxi];
    }
};