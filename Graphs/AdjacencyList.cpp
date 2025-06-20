void addEdge(vector<vector<int> > & graph, int i, int j) {
    graph[i].push_back(j);
    graph[j].push_back(i);
}

void showGraph(vector<vector<int> > graph) {
    int v=graph.size();

    for(int i=0; i<v; i++) {
        cout<<i<<" : ";
        for(auto j:graph[i]) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int v=5;
    vector<vector<int> > graph(v);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 4, 3);

    showGraph(graph);
    return 0;
}
