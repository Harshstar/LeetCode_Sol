class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x1=nums[0];
        int x2=nums[1];
        int y1=nums[nums.size()-1];
        int y2=nums[nums.size()-2];
        return (y1*y2)-(x1*x2);
    }
};