class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        vector<int>ans;
        int div=nums.size()/3;
        for(auto x:mp)
        {
            if(x.second>div)
                ans.push_back(x.first);
        }
        return ans;
    }
};