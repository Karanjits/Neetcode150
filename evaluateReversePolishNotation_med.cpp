#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;



int evalRPN(vector<string>& tokens) {
    stack<int> st;

    for (auto& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop();  // right operand
            int a = st.top(); st.pop();  // left operand

            int result = 0;
            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else result = a / b; // integer division truncates toward zero

            st.push(result);
        } else {
            st.push(stoi(token));
        }
    }

    return st.top();
}

int main() {
    return 0;
}