#include <string>

using namespace std;

int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1;
    n = abs(n);
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int P = 123456;
    cout << "Digits in " << P << ": " << countDigits(P) << endl;
    return 0;
}

