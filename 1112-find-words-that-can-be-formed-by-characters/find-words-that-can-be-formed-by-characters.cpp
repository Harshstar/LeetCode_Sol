class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp1;
        for(int i=0;i<chars.size();i++)
            mp1[chars[i]]++;
        int sum=0;
        for(int i=0;i<words.size();i++)
        {
            bool flag=true;
            unordered_map<char,int>mp2=mp1;
            for(auto x:words[i])
            {
                if(mp2.find(x)!=mp2.end() && mp2[x]>0)
                    mp2[x]--;
                else
                    flag=false;
            }
            if(flag==true)
                sum+=words[i].size();
        }
        return sum;
    }
};