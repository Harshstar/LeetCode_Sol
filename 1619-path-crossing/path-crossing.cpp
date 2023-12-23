class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int,int>>ans;
        int x=0,y=0;
        ans.push_back({x,y});
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='N')
                y++;
            if(path[i]=='S')
                y--;
            if(path[i]=='E')
                x++;
            if(path[i]=='W')
                x--;
            ans.push_back({x,y});
        }
        set<pair<int,int>>st(ans.begin(),ans.end());
        if(ans.size()==st.size())
            return false;
        return true;
    }
};