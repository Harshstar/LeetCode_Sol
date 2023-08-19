//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool cycle(int u, vector<bool>& visited, vector<bool>& currVisited, vector<int> adj[])
    {
        visited[u] = true;
        currVisited[u] = true;
        
        for(auto v: adj[u])
        {
            if(visited[v] == false)
            {
                if(cycle(v, visited, currVisited, adj))
                {
                    return true;
                }
            }
            else if(visited[v] == true && currVisited[v] == true)
            {
                //cycle detected
                return true;
            }
        }
        //backTrack
        currVisited[u] = false;
      return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> visited(V, false), currVisited(V, false);
        
        for(int i =0; i<V; i++)
        {
            if(visited[i] == false)
            {
                if(cycle(i, visited, currVisited, adj))
                {
                    return true;
                }
            }
        }
      return false;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends