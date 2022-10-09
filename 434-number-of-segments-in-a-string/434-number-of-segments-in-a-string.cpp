class Solution {
public:
    int countSegments(string s) {
        int count=0,i;
        if(s.size()==0)
            return 0;
        else{
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ' && s[i+1]!=' ')
                count++;
        }
        reverse(s.begin(),s.end());
        for(i=0;i<1;i++)
        {
            if(s[i]==' ')
                count=count-1;
        }
        reverse(s.begin(),s.end());
        for(i=0;i<1;i++)
        {
            if(s[i]==' ')
                count=count-1;
        }}
        return count+1;
    }
};