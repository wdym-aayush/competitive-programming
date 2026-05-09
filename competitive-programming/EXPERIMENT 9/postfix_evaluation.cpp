#include <stack>
#include <string>

using namespace std;

int evaluatePostfix(string exp) {
    stack<int> st;
    for (char c : exp) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int val1 = st.top(); st.pop();
            int val2 = st.top(); st.pop();
            switch (c) {
                case '+': st.push(val2 + val1); break;
                case '-': st.push(val2 - val1); break;
                case '*': st.push(val2 * val1); break;
                case '/': st.push(val2 / val1); break;
            }
        }
    }
    return st.top();
}

int main() {
    string exp = "231*+9-";
    cout << "Postfix evaluation: " << evaluatePostfix(exp) << endl;
    return 0;
}

