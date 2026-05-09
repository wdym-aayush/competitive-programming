#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    cout << "Are anagrams: " << isAnagram("listen", "silent") << endl;
    return 0;
}

