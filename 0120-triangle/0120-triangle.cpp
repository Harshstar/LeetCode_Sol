class Solution {
public:
    int path(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& triangle,int n){

        if(i==n-1)
            return triangle[i][j];

        if(dp[i][j]!=-1)
            return dp[i][j];

        int down=triangle[i][j]+path(i+1,j,dp,triangle,n);
        int diag=triangle[i][j]+path(i+1,j+1,dp,triangle,n);
        return dp[i][j]=min(down,diag);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return path(0,0,dp,triangle,n);
    }
};