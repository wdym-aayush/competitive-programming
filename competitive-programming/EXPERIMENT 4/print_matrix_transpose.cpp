#include <vector>

using namespace std;

void printTranspose(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printTranspose(mat);
    return 0;
}

