class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int c=0;
        for(auto x:mp)
        {
            if(x.second==1)
                return -1;
            if(x.second%3==0)
                c=c+x.second/3;
            else if(x.second%3==2)
                c=c+x.second/3+1;
            else
                c=c+(x.second/3-1)+2;
        } 
        return c;
    }
};