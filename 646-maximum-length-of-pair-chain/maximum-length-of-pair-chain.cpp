class Solution {
public:
    int match(int i, int  j,int n,vector<vector<int>>& pairs, vector<vector<int>>&dp)
    {
        if(i==n)
            return 0;
        if(dp[i][j+1001]!=-1)
            return dp[i][j+1001];
        
        int len=match(i+1,j,n,pairs,dp);
        if(pairs[i][0]>j)
            len=max(len,1+match(i+1,pairs[i][1],n,pairs,dp));

        
        return dp[i][j+1001]=len;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        sort(pairs.begin(),pairs.end());
        vector<vector<int>>dp(2500,vector<int>(2500,-1));
        return match(0,-1001,n,pairs,dp);
    }
};