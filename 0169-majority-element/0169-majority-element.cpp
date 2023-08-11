class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int key=nums[i];
            mp[key]++;
        }
        int count=0,ans=0;
        for(auto x:mp)
        {
            if(count<x.second)
            {
                count=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};