class Solution {
    vector<vector<int>> dp;
    int dfs(int sum, int i, vector<int> &c){
        if(sum < 0 || i == c.size())
            return 0;
        if(sum == 0)
            return 1;

        if(dp[sum][i] != -1)
            return dp[sum][i];

	    int ans = dfs(sum - c[i], i, c) + dfs(sum, i + 1, c);
        dp[sum][i] = ans;

        return dp[sum][i];
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        dp = vector<vector<int>>(amount + 1, vector<int>(n, -1));
	    sort(coins.begin(), coins.end());

        return dfs(amount, 0, coins);
    }
};