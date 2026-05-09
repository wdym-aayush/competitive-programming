#include <vector>

using namespace std;

void linearProbing(vector<int>& hash_table, int hashSize, vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int val = arr[i];
        int idx = val % hashSize;
        
        while (hash_table[idx] != -1 && hash_table[idx] != val) {
            idx = (idx + 1) % hashSize;
        }
        hash_table[idx] = val;
    }
}

int main() {
    int hashSize = 10;
    vector<int> hash_table(hashSize, -1);
    vector<int> arr = {4, 14, 24, 44};
    linearProbing(hash_table, hashSize, arr);
    for (int i = 0; i < hashSize; i++) cout << hash_table[i] << " ";
    cout << endl;
    return 0;
}

