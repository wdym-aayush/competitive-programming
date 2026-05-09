#include <vector>
#include <algorithm>

using namespace std;

bool findTriplets(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == 0) return true;
            else if (arr[i] + arr[l] + arr[r] < 0) l++;
            else r--;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {0, -1, 2, -3, 1};
    cout << "Triplet exists? " << (findTriplets(arr) ? "Yes" : "No") << endl;
    return 0;
}

