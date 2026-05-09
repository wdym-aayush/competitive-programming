#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {4, 2, 5, 1, 3};
    sort(arr.begin(), arr.end());
    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}

