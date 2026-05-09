#include <vector>

using namespace std;

void insertDistinct(vector<int>& hash_table, int hashSize, vector<int>& arr) {
    for (int x : arr) {
        int idx = x % hashSize;
        while (hash_table[idx] != -1) idx = (idx + 1) % hashSize;
        hash_table[idx] = x;
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    int hashSize = 5;
    vector<int> hash_table(hashSize, -1);
    insertDistinct(hash_table, hashSize, arr);
    for (int x : hash_table) cout << x << " ";
    cout << endl;
    return 0;
}

