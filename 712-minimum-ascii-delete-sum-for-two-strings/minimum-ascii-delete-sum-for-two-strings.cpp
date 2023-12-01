class Solution {
public:
    int ascii(int i,int j,string &s1,string &s2, vector<vector<int>>&dp)
    {
        if(i<0)
        {
            int t=j,ans=0;
            while(t>=0) 
                ans+=s2[t--];
            return dp[i+1][j+1]=ans;
        }
        if(j<0)
        {
            int t=i,ans=0;
            while(t>=0)
                ans+=s1[t--];
            return dp[i+1][j+1]=ans;
        }

        if(dp[i+1][j+1]!=-1)
            return dp[i+1][j+1];


        if(s1[i]==s2[j])
            return dp[i+1][j+1]=ascii(i-1,j-1,s1,s2,dp);

        int delete1=s1[i]+ascii(i-1,j,s1,s2,dp);
        int delete2=s2[j]+ascii(i,j-1,s1,s2,dp);
        return dp[i+1][j+1]=min(delete1,delete2);
    }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return ascii(n-1,m-1,s1,s2,dp);
    }
};