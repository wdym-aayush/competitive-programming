using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int N = 456;
    cout << "Sum of digits of " << N << " is " << sumOfDigits(N) << endl;
    return 0;
}

