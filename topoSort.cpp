#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, stack<int>& s, vector<int>& vis) {
    vis[node] = 1;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfs(it, adj, s, vis);
        }
    }
    s.push(node);
}

int main() {
    int n, m;
    cout << "Enter the number of nodes and edges: " << endl;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    cout << "Enter the edges (u v) where u -> v:" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> vis(n, 0);
    stack<int> s;

     for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, adj, s, vis);
        }
    }

    vector<int> ans;
    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    cout << "Topological Order: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
