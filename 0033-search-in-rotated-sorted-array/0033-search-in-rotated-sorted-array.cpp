class Solution {
public:
    int search(vector<int>& nums, int target) {
        //set<int>s;
       // for(int i=0;i<nums.size();i++)
           // s.insert(nums[i]);

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            return i;
        }
        return -1;
    }
};