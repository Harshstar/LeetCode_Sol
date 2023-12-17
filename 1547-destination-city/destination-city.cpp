class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>s;
        for(int i=0;i<paths.size();i++)
            s.insert(paths[i][0]);
        for(int i=0;i<paths.size();i++)
        {
            string temp=paths[i][1];
            if(s.find(temp)==s.end())
                return temp;
        }
        return "";
    }
};