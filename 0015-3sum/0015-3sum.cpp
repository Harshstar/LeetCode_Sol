class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int low=i+1,high=nums.size()-1;
            while(low<high)
            {
                int current=nums[i]+nums[low]+nums[high];
                if(current>0)
                    high--;
                else if(current<0)
                    low++;
                else
                {
                    answer.push_back({nums[i],nums[low],nums[high]});
                    
                    //To avoid duplicate triplets
                    
                    int last_low=nums[low],last_high=nums[high];
                    while(low<high && nums[low]==last_low)
                        low++;
                    while(low<high && nums[high]==last_high)
                        high--;
                }
            }
        }
        return answer;
    }
};