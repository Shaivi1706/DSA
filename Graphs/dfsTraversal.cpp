class Solution {
  void dfs(vector<bool>& v, vector<int>& ans, int s, vector<int> adj[]) {
    v[s] = true;
    ans.push_back(s);

    for (int i : adj[s]) {
      if (!v[i]) {
        dfs(v, ans, i, adj);
      }
    }
  }

public:
  vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> ans;
    vector<bool> v(V, false);

    dfs(v, ans, 0, adj);
    return ans;
  }
};
