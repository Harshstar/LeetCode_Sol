class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,r=0;
        for(i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]!=val)
                nums[r++]=nums[i];
        }
        return r;
    }
};
