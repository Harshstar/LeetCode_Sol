class Solution {
public:
    vector<vector<int>>ans;
    void recur(vector<int>&ds,vector<int>&nums,vector<bool>&visited)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(visited[i]==false)
            {
                visited[i]=true;
                ds.push_back(nums[i]);
                recur(ds,nums,visited);
                ds.pop_back();
                visited[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<bool>visited(nums.size(),false);
        recur(ds,nums,visited);
        return ans;
    }
};