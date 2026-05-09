#include <string>

using namespace std;

int findSubstring(string src, string find) {
    size_t found = src.find(find);
    if (found != string::npos) return found;
    return -1;
}

int main() {
    cout << "Index: " << findSubstring("hello world", "world") << endl;
    return 0;
}

