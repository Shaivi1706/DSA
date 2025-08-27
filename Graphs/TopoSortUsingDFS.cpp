#include <bits/stdc++.h> 
void toposort(int i, unordered_map<int, bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj) {
    visited[i]=1;

    for(int neigh:adj[i]) {
        if(!visited[neigh]) {
            toposort(neigh, visited, s, adj);
        }
    }
    s.push(i);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++) {
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
    }

    //disconnected
    unordered_map<int, bool> visited;
    stack<int> s;

    for(int i=0; i<v; i++) {
        if(!visited[i]) {
            toposort(i, visited, s, adj);
        }
    }

    vector<int> ans;
    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
