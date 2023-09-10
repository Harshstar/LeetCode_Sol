class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i][0];
            int b=nums[i][1];
            for(int j=a;j<=b;j++)
                    s.insert(j);
        }
        return s.size();
    }
};