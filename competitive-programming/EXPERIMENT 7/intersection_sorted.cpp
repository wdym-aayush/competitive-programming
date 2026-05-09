#include <vector>

using namespace std;

vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    vector<int> res;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) i++;
        else if (arr2[j] < arr1[i]) j++;
        else {
            if (res.empty() || res.back() != arr1[i])
                res.push_back(arr1[i]);
            i++; j++;
        }
    }
    return res;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 4, 6};
    vector<int> res = intersection(arr1, arr2);
    for (int x : res) cout << x << " ";
    cout << endl;
    return 0;
}

