class Solution {
public:
    int calc(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
    {
        if(i<0 || j<0)
            return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];
        
        //take
        if(s1[i]==s2[j])
            return dp[i][j]=1+calc(i-1,j-1,s1,s2,dp);
        
        int not_take1=calc(i-1,j,s1,s2,dp);
        int not_take2=calc(i,j-1,s1,s2,dp);

        return dp[i][j]=max(not_take1,not_take2);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return calc(n-1,m-1,text1,text2,dp);
    }
};
