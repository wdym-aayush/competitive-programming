#include <string>

using namespace std;

bool isPalindrome(string str) {
    int l = 0, r = str.length() - 1;
    while (l < r) {
        if (str[l] != str[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    string S1 = "madam";
    cout << S1 << " is " << (isPalindrome(S1) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}

