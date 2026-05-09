#include <stack>
#include <string>

using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    else if (c == '/' || c == '*') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

string infixToPostfix(string s) {
    stack<char> st;
    string res = "";
    for (char c : s) {
        if (isalpha(c) || isdigit(c)) res += c;
        else if (c == '(') st.push('(');
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && prec(c) <= prec(st.top())) {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    cout << "Postfix: " << infixToPostfix(exp) << endl;
    return 0;
}

