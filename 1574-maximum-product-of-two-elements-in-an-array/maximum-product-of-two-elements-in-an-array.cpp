class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        int maxi=(nums[n-1]-1)*(nums[n-2]-1);
        return maxi;
    }
};