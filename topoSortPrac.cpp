#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> topoSort(vector<vector<int>>& edges, int V) {
    // adjacency list
    vector<vector<int>> adj(V);
    vector<int> indeg(V, 0);

    // build graph
    for (auto &e : edges) {
        int u = e[0];
        int v = e[1];
        adj[u].push_back(v);
        indeg[v]++; 
    }

    // queue of nodes with indegree 0
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indeg[i] == 0) q.push(i);
    }

    vector<int> ans;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adj[node]) {
            indeg[it]--;
            if (indeg[it] == 0) q.push(it);
        }
    }

    return ans;
}

int main() {
    // edges: u -> v
    vector<vector<int>> edges = {
        {1,2},
        {4,3},
        {2,4},
        {4,1},
    };

    int V = 5; // vertices 0..4
    vector<int> ans = topoSort(edges, V);

    cout << "Topological Order: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
