class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string a="",b="",c="",d="";
        for(int i=0;i<s1.size();i+=2)
            a+=s1[i];
        for(int i=1;i<s1.size();i+=2)
            b+=s1[i];
        for(int i=0;i<s2.size();i+=2)
            c+=s2[i];
        for(int i=1;i<s2.size();i+=2)
            d+=s2[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());

        return (a==c && b==d);
    }
};