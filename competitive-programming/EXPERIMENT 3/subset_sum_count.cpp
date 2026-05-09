#include <vector>

using namespace std;

int countSubsets(vector<int>& arr, int n, int sum) {
    if (sum == 0) return 1;
    if (n == 0) return 0;
    
    if (arr[n - 1] > sum)
        return countSubsets(arr, n - 1, sum);
    
    return countSubsets(arr, n - 1, sum) + countSubsets(arr, n - 1, sum - arr[n - 1]);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int sum = 5;
    cout << "Count of subsets: " << countSubsets(arr, arr.size(), sum) << endl;
    return 0;
}

