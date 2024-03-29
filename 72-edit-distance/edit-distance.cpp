class Solution {
public:
    int match(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
    {
        if(i<0)
            return j+1; // since no. of operation to make an empty string to j one
        if(j<0)
            return i+1;

        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j])
            return match(i-1,j-1,s1,s2,dp);

        int insert=1+match(i,j-1,s1,s2,dp);
        int del=1+match(i-1,j,s1,s2,dp);
        int replace=1+match(i-1,j-1,s1,s2,dp);
        return dp[i][j]=min(insert,min(del,replace));
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return match(n-1,m-1,word1,word2,dp);
    }
};