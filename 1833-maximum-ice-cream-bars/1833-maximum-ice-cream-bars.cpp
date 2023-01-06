class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0,i;
        for(i=0;i<costs.size();i++)
        {
            if(sum<=coins)
                sum=sum+costs[i];
            if(sum>coins)
                break;
        }
        return i;
    }
};