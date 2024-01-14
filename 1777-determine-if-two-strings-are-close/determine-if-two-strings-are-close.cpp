class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto x:word1)
            mp1[x]++;
        for(auto x:word2)
            mp2[x]++;
        
        vector<int>check1;
        vector<int>check2;
        for(auto x:mp1)
        {
            if(mp2.find(x.first)==mp2.end())
                return false;
            check1.push_back(x.second);
        }
        for(auto x:mp2)
            check2.push_back(x.second);
        sort(check1.begin(),check1.end());
        sort(check2.begin(),check2.end());
        for(int i=0;i<check1.size();i++)
        {
            if(check1[i]!=check2[i])
                return false;
        }
        return true;
    }
};