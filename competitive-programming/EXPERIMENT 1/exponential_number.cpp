using namespace std;

long long power(long long M, int N) {
    long long res = 1;
    while (N > 0) {
        if (N & 1) res = res * M;
        M = M * M;
        N >>= 1;
    }
    return res;
}

int main() {
    long long M = 2;
    int N = 10;
    cout << M << "^" << N << " = " << power(M, N) << endl;
    return 0;
}

