#include<unordered_map>
#include<queue>
#include<list>

bool iscyclic(int i, int parent, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited) {
    visited[i]=true;
    
    for(int neigh:adj[i]) {
        if(visited[neigh]&& parent!=neigh) {
            return true;
        }
        else if(!visited[neigh]) {
            visited[neigh]=1;
            bool ans=iscyclic(neigh, i, adj, visited);
            if(ans) return true;
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    //creating adjacency list
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++) {
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //looking for disconnected
    unordered_map<int, bool> visited;
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            if(iscyclic(i, -1, adj, visited)) {
                return "Yes";
            }
        }
    }
    return "No";
}
