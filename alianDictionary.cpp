#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

string alienDict(vector<string>& words, int V) {
    vector<vector<int>> graph(V);
    
    // Step 1: Build graph from dictionary
    for (int i = 0; i < words.size() - 1; i++) {
        string s1 = words[i];
        string s2 = words[i + 1];
        
        int len = min(s1.size(), s2.size());
        for (int j = 0; j < len; j++) {
            if (s1[j] != s2[j]) {
                graph[s1[j] - 'a'].push_back(s2[j] - 'a');
                break;
            }
        }
    }
    
    // Step 2: Compute indegree
    vector<int> indeg(V, 0);
    for (int u = 0; u < V; u++) {
        for (int v : graph[u]) {
            indeg[v]++;
        }
    }
    
    // Step 3: Kahn’s Algorithm for Topo Sort
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indeg[i] == 0) q.push(i);
    }
    
    string ans = "";
    while (!q.empty()) {
        int node = q.front(); q.pop();
        ans += char(node + 'a');
        
        for (int neigh : graph[node]) {
            indeg[neigh]--;
            if (indeg[neigh] == 0) {
                q.push(neigh);
            }
        }
    }
    
    return ans;
}

int main() {
    vector<string> dict = {"baa", "abcd", "abca", "cab", "cad"};
    int V = 4; // a, b, c, d
    cout << "Alien Dictionary Order: " << alienDict(dict, V) << endl;
    return 0;
}
