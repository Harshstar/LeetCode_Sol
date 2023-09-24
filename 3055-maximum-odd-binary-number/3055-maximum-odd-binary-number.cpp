class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        int temp;
        for(auto x:mp)
        {
            if(x.first=='1')
            {
                temp=x.second;
                break;
            }
        }
        if(temp==1)
        {
            for(int i=0;i<s.size()-1;i++)
                s[i]='0';
            s[s.size()-1]='1';
            return s;
        }
        else
        {
            int i;
            for(i=0;i<temp-1;i++)
                s[i]='1';
            for(int j=i;j<s.size()-1;j++)
                s[j]='0';
            s[s.size()-1]='1';
        }
        return s;
    }
};