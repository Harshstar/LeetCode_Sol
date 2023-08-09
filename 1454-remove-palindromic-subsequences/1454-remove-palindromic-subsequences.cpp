class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0)
            return 0;
        int n=s.size()-1;
        int i=0;
        while(i<n)
        {
            if(s[i]==s[n])
            {
                i++;
                n--;
            }
            else
                return 2;
        }
        return 1;
    }
};