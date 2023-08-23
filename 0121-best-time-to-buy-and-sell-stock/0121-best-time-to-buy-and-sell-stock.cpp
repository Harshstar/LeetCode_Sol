class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int index=0,maxi=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<prices[index])
                index=i;
            int temp=prices[i]-prices[index];
            if(temp>maxi)
            maxi=temp;
        }
        return maxi;
    }
};
