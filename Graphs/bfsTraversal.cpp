vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> check(V, false);
        queue<int> q;
        vector<int> ans;

        int s=0;
        check[s]=true;
        q.push(s);

        while(!q.empty()) {
          int curr=q.front();
          q.pop();

          ans.push_back(curr);

          for(int j:adj[curr]) {
            if (!check[j]) {
                q.push(j);
                check[j] = true;
            }
          }
        }

        return ans;
    }
