using namespace std;

void printNto1(int n) {
    if (n <= 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    int N = 10;
    printNto1(N);
    cout << endl;
    return 0;
}

