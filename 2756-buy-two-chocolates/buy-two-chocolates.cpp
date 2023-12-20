class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int n=prices.size();
        if(n==1 || (prices[0]+prices[1]>money) )
            return money;
        return money - (prices[0]+prices[1]);
    }
};