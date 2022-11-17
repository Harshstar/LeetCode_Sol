class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp;
        k%=nums.size();
        int  n=nums.size()-k;
        for(int i=n;i<nums.size();i++)
            temp.push_back(nums[i]);
        for(int i=0;i<n;i++)
            temp.push_back(nums[i]);
        nums=temp;
    }
};
