#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int i, unordered_map<int, bool>& visited, 
unordered_map<int, bool>& dfsvisited, unordered_map<int, list<int>>& adj) {
  visited[i]=1;
  dfsvisited[i]=1;

  for(int neigh:adj[i]) {
    if(!visited[neigh]) {
      visited[neigh]=1;
      dfsvisited[neigh]=1;
      bool ans=isCyclic(neigh, visited, dfsvisited, adj);
      if(ans) return true;
    }
    else if(visited[neigh] && dfsvisited[neigh]) {
      return true;
    }
  }
  dfsvisited[i]=0;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  //adjacency list
  unordered_map<int, list<int>> adj;
  for(int i=0; i<edges.size(); i++) {
    int u=edges[i].first;
    int v=edges[i].second;

    adj[u].push_back(v);
  }

  //disconnected pts
  unordered_map<int, bool> visited;
  unordered_map<int, bool> dfsvisited;
  for(int i=1; i<=n; i++) {
    if(!visited[i]) {
      bool ans = isCyclic(i, visited, dfsvisited, adj);
      if(ans) return 1;
    }
  }
  return 0;
}
