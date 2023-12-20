class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int s1=INT_MAX;
        int s2=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<s1)
            {
                s2=s1;
                s1=prices[i];
            }
            else    
                s2=min(s2,prices[i]);
        }
        if(s1+s2>money)
            return money;
        return money-(s1+s2);
    }
};