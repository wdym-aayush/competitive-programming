#include <vector>

using namespace std;

int maxAND(vector<int>& arr) {
    int max_val = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            max_val = max(max_val, arr[i] & arr[j]);
        }
    }
    return max_val;
}

int main() {
    vector<int> arr = {4, 8, 12, 16};
    cout << "Max AND value: " << maxAND(arr) << endl;
    return 0;
}

