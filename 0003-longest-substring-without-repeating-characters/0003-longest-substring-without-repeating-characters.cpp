class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>dp(256,-1);
        int start=-1,maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(dp[s[i]]>start)
                start=dp[s[i]];
            dp[s[i]]=i;
            maxi=max(maxi,i-start);
        }
        return maxi;
    }
};