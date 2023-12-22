class Solution {
public:
    int maxScore(string s) {
        unordered_map<char,int>mp1;
        for(auto x:s)
            mp1[x]++;
        unordered_map<char,int>mp2;
        int maxi=INT_MIN;   
        for(int i=0;i<s.size()-1;i++)
        {
            mp2[s[i]]++;
            mp1[s[i]]--;
            int x=mp2['0'];
            int y=mp1['1'];
            maxi=max(maxi,(x+y));
        }
        return maxi;
    }
};