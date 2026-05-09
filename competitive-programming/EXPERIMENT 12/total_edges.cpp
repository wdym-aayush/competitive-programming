#include <iostream>
#include <vector>

using namespace std;

int countEdges(vector<vector<int>>& adjList) {
    int sum = 0;
    for (int i = 0; i < adjList.size(); i++) {
        sum += adjList[i].size();
    }
    return sum / 2; 
}

int main() {
    vector<vector<int>> adjList(4);
    adjList[0] = {1, 2, 3};
    adjList[1] = {0, 2};
    adjList[2] = {0, 1};
    adjList[3] = {0};
    
    cout << "Total edges: " << countEdges(adjList) << endl;
    return 0;
}

