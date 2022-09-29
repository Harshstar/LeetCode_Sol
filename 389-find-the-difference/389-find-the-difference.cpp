class Solution {
public:
    char findTheDifference(string s, string t) {
        int i;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for( i=0;i<t.size();i++)
        {
            if(s[i]!=t[i])
                break;
        }
        return t[i];
    }
};