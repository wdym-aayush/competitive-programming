#include <vector>

using namespace std;

void printSnake(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) cout << mat[i][j] << " ";
        } else {
            for (int j = n - 1; j >= 0; j--) cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printSnake(mat);
    return 0;
}

