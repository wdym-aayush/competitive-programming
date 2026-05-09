#include <vector>

using namespace std;

void rotateLeft(vector<int>& arr) {
    if (arr.empty()) return;
    int first = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = first;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    rotateLeft(arr);
    for (int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}

