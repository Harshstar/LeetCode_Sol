class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int flag=0,i;
        for( i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                flag=0;
                break;
            }
            else if( nums[i]>target)
            { 
                flag=1; 
                break;
            }
        }
            return i;
    }
};
