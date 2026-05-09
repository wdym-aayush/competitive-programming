#include <cmath>

using namespace std;

int findDigits(int n) {
    if (n < 0) return 0;
    if (n <= 1) return 1;
    double x = ((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0));
    return floor(x) + 1;
}

int main() {
    int P = 10;
    cout << "Digits in " << P << "! = " << findDigits(P) << endl;
    return 0;
}

