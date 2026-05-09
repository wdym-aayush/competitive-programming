#include <vector>
#include <list>

using namespace std;

class Hash {
    int BUCKET;
    vector<list<int>> table;
public:
    Hash(int v) {
        BUCKET = v;
        table.assign(v, list<int>());
    }
    void insertItem(int key) {
        int index = key % BUCKET;
        table[index].push_back(key);
    }
    void displayHash() {
        for (int i = 0; i < BUCKET; i++) {
            cout << i;
            for (auto x : table[i])
                cout << " --> " << x;
            cout << endl;
        }
    }
};

int main() {
    vector<int> arr = {15, 11, 27, 8, 12};
    int size = 7;
    Hash h(size);
    for (int x : arr) h.insertItem(x);
    h.displayHash();
    return 0;
}

