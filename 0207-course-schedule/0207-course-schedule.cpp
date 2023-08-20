class Solution {
public:

    bool dfs(vector<bool>&visited , vector<bool>&currvisited,vector<vector<int>>&adj,int source)
    {
        visited[source]=true;
        currvisited[source]=true;
            for(auto x:adj[source])
        {
            if(visited[x]==false)
            {
                if(dfs(visited,currvisited,adj,x))
                    return true;
            }
            else if(currvisited[x]==true && visited[x]==true)
                return true;
        }
        currvisited[source]=false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool>visited(numCourses,false) , currvisited(numCourses,false);
        vector<vector<int>> adj(numCourses);
        for(auto num: prerequisites)
            adj[num[1]].push_back(num[0]);

        for(int i=0;i<numCourses;i++)
        {
            if(visited[i]==false)
            {
                if(dfs(visited,currvisited,adj,i))
                    return false;
            }
        }
        return true;
    }
};