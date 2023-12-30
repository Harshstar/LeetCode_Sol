class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            int temp=words[i].size();
            for(int j=0;j<temp;j++)
                mp[words[i][j]]++;
        }
        for(auto x:mp)
        {
            if(x.second%n!=0)
                return false;
        }
        return true;
    }
};