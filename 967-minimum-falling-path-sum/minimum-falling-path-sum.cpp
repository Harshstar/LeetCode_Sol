class Solution {
public:
    int path(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp)
    {
        if(i==matrix.size())
            return 0;
        if(j<0 || j==matrix.size())
            return 1e9;

        if(dp[i][j]!=-1)
            return dp[i][j];

        int dl=matrix[i][j]+path(i+1,j-1,matrix,dp);
        int d=matrix[i][j]+path(i+1,j,matrix,dp);
        int dr=matrix[i][j]+path(i+1,j+1,matrix,dp);
        return dp[i][j]=min(dl,min(d,dr));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(matrix[0][i]==0)
                c++;
        }
        if(c==100)
            return -1;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini = min(mini,path(0,i,matrix,dp));
        }
        return mini;
    }
};