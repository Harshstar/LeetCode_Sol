class Solution {
public:
    string customSortString(string order, string s) {

        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;

        string str="";
        for(int i=0;i<order.size();i++)
        {
            char ch=order[i];
            if(mp.find(ch)!=mp.end())
            {
                auto temp=mp.find(ch);
                int count=temp->second;
                for(int j=1;j<=count;j++)
                    str+=ch;
            }
        }

        unordered_map<char,int>mp2;
        for(int i=0;i<str.size();i++)
        {
            mp2[str[i]];
        }

        for(int i=0;i<s.size();i++)
        {
            char ch1=s[i];
            if(mp2.find(ch1)!=mp2.end())
                continue;
            str+=ch1;
        }
        return str;
    }
};