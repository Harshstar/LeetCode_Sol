class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int min=201;
        string str;
        for(int i=0;i<n;i++)
        {
            int len=strs[i].size();
            if(len<min) 
            {
                min=len;
                str=strs[i];
            }
        }
        int count=0;
        for(int i=0;i<min;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=str[i])
                {
                    return str.substr(0,count);
                }
            }
            count++;
        }
        return str.substr(0,count);
    }
};
