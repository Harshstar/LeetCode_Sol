class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()<=1)
            return 0;
        if(nums[0]>nums[1])
            return 0;
        if(nums[0]<nums[1] && nums.size()==2)
            return 1;
        
        if(nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;
        int j=nums.size()-2,i=1;
        while(i<=j)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
            if(nums[j]>nums[j-1] && nums[j]>nums[j+1])
                return j;
            i++;
            j--;
        }
        return i;
    }
};