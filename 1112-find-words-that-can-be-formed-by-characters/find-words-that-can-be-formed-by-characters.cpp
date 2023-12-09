class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp1;
        for(int i=0;i<chars.size();i++)
            mp1[chars[i]]++;
        int sum=0;
        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            cout<<temp<<" ";
            bool flag=true;
            unordered_map<char,int>mp2=mp1;
            for(char i=0;i<temp.size();i++)
            {
                if(mp2.find(temp[i])!=mp2.end() && mp2[temp[i]]>0)
                    mp2[temp[i]]--;
                else
                    flag=false;
            }
            if(flag==true)
                sum+=temp.size();
        }
        return sum;
    }
};