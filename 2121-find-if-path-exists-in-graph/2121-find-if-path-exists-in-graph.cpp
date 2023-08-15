class Solution {
public:

    bool validPath(int n, vector<vector<int>>& edges, int source, int end) {
        
        unordered_map<int, vector<int>>mp;
        for(auto x: edges)
        {
            vector<int>temp1=x;
            int u=temp1[0];
            int v=temp1[1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        vector<bool>visited(n+1,false);
        queue<int>q;
        q.push(source); 
        visited[source]=true;
        while(!q.empty())
        {
            int xx=q.front();
            q.pop();
            vector<int>temp=mp[xx];
            for(int i=0;i<temp.size();i++)
            {
                int vertex=temp[i];
                if(visited[vertex]==false)
                {
                    q.push(vertex);
                    visited[vertex]=true;
                }
            }
        }
        if(visited[end]==true)
            return true;
        return false;
    }
};