#include<unordered_map>
#include<queue>
#include<list>

bool iscyclic(int i, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited) {
    unordered_map<int, int> parent;
    parent[i]=-1;
    visited[i]=true;
    queue<int> q;
    q.push(i);

    while(!q.empty()) {
        int front=q.front();
        q.pop();

        for(int neighbours:adj[front]) {
            if(visited[neighbours] && neighbours!=parent[front]) {
                return true;
            }
            else if(!visited[neighbours]) {
                visited[neighbours]=1;
                parent[neighbours]=front;
                q.push(neighbours);
            }
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
            if(iscyclic(i, adj, visited)) {
                return "Yes";
            }
        }
    }
    return "No";
}
