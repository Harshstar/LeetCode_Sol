class Solution {
public:
    int palin(int i,int j, string &s, string &temp,vector<vector<int>>&dp) {
        if(i<0 || j<0 )
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];

        //pick
        if(s[i]==temp[j])
            return dp[i][j]=1+palin(i-1,j-1,s,temp,dp);
        
        //not pick
        return dp[i][j]=max(palin(i-1,j,s,temp,dp),palin(i,j-1,s,temp,dp));
    }
    int longestPalindromeSubseq(string s) {
        string temp=s;
        reverse(temp.begin(),temp.end());
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return palin(n-1,n-1,s,temp,dp);
    }
};