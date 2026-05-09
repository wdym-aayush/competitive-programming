#include <stack>
#include <string>

using namespace std;

bool areBracketsBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) return false;
            char top = s.top();
            if ((c == ')' && top != '(') || 
                (c == ']' && top != '[') || 
                (c == '}' && top != '{')) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string expr = "{()}[]";
    if (areBracketsBalanced(expr)) cout << "Balanced
";
    else cout << "Not Balanced
";
    return 0;
}

