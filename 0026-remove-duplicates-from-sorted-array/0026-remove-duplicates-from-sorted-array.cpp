class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        int i,j;
        for(i=0 , j=1; j<len ; j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
            }
            nums[i]=nums[j];
        }
        return i+1;
    }
};