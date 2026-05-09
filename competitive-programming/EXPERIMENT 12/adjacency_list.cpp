#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 4;
    vector<vector<int>> adjList(n);
    
    auto addEdge = [&](int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    };
    
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(1, 2);
    
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int v : adjList[i]) cout << v << " ";
        cout << endl;
    }
    return 0;
}

