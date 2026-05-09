Question: Find time complexity of below code
int try_fun(int n) {
    int cnt = 0;
    for (int k = 0; k < n; k++)
        for (int p = k; p > 0; p--)
            cnt = cnt + 1;
    return cnt;
}

Answer:
The outer loop runs 'n' times (from k = 0 to n-1).
For each iteration of the outer loop, the inner loop runs 'k' times.
Total iterations = 0 + 1 + 2 + ... + (n-1) = n*(n-1)/2
Therefore, the time complexity is O(n^2).
*/
#include <iostream>
int main() {
    std::cout << "Time complexity is O(n^2). Check source code for details." << std::endl;
    return 0;
}

