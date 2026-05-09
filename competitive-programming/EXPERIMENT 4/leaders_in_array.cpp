#include <vector>

using namespace std;

void printLeaders(vector<int>& arr) {
    int max_right = arr[arr.size() - 1];
    cout << max_right << " ";
    
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] > max_right) {
            max_right = arr[i];
            cout << max_right << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    cout << "Leaders: ";
    printLeaders(arr);
    return 0;
}

