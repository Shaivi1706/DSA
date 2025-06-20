void addEdge(vector<vector<int> >& graph, int i, int j) {
    graph[i][j]=1;
    graph[j][i]=1;
}

void showGraph(vector<vector<int> > graph) {
    int v=graph.size();
    for(int i=0; i<v; i++) {
        for(int j=0; j<v; j++) {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int v=6;
    vector<vector<int> > graph(v, vector<int> (v, 0));

    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 4, 5);
    addEdge(graph, 3, 5);

    showGraph(graph);
    return 0;
}
