#include <iostream>
#include <vector>
using namespace std;

bool dfs(int u, int dest, vector<vector<int>> &adj, vector<bool> &visited) {
    if (u == dest) return true;
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v] && dfs(v, dest, adj, visited)) return true;
    }
    return false;
}

int main() {
    int V, E, u, v, src, dest;
    cin >> V >> E;
    vector<vector<int>> adj(V);
    for (int i = 0; i < E; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> src >> dest;
    vector<bool> visited(V, false);
    if (dfs(src, dest, adj, visited)) cout << "Yes Path Exists\n";
    else cout << "No Such Path Exists\n";
}
