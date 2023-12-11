class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size()/4;
        for(auto x:arr)
            mp[x]++;
        for(auto x:mp)
        {
            if(x.second>n)
                return x.first;
        }
        return -1;
    }
};