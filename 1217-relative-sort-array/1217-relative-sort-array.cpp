class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int>ans;
        vector<int>ans2;

        set<int>s;
        unordered_map<int,int>mp;
        for(int i=0;i<arr2.size();i++)
            s.insert(arr2[i]);
        for(int i=0;i<arr1.size();i++)
            mp[arr1[i]]++;

        for(int i=0;i<arr2.size();i++)
        {
            int key=arr2[i];
            if(mp.find(key)!=mp.end())
            {
                for(int j=1;j<=mp[key];j++)
                {
                    ans.push_back(key);
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++)
        {
            int k=arr1[i];
            if(s.find(k)==s.end())
            ans.push_back(k);
        }
        return ans;
    }
};