#include <vector>

using namespace std;

bool hasSumPair(vector<int>& arr, int sum) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        if (arr[l] + arr[r] == sum) return true;
        else if (arr[l] + arr[r] < sum) l++;
        else r--;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int sum = 9;
    cout << "Pair with sum " << sum << " " << (hasSumPair(arr, sum) ? "exists" : "doesn't exist") << endl;
    return 0;
}

