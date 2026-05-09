#include <string>
#include <vector>
#include <sstream>

using namespace std;

string reverseWords(string s) {
    vector<string> words;
    stringstream ss(s);
    string word;
    while (ss >> word) words.push_back(word);
    
    string res = "";
    for (int i = words.size() - 1; i >= 0; i--) {
        res += words[i] + (i > 0 ? " " : "");
    }
    return res;
}

int main() {
    cout << "Reversed: " << reverseWords("hello world this is C++") << endl;
    return 0;
}

