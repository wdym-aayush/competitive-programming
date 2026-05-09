#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    int m = matrix.size();
    int n = matrix[0].size();
    
    vector<vector<int>> transpose(n, vector<int>(m));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

