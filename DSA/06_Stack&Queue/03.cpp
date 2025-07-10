//prefix
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int prefixEval(string s) {
    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--) {
        // If current char is digit (operand)
        if (isdigit(s[i])) {
            st.push(s[i] - '0'); // convert char to int
        } 
        else {
            // Operator: pop 2 operands
            int operand1 = st.top(); st.pop();
            int operand2 = st.top(); st.pop();

            switch(s[i]) {
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
                case '^':
                    st.push(pow(operand1, operand2));
                    break;
            }
        }
    }

    return st.top();
}

int main() {
    string expr = "-+7*45+20"; // example: equivalent to ((7 + (4 * 5)) - (2 + 0)) = 25
    cout << "Prefix evaluation: " << prefixEval(expr) << endl;
    return 0;
}
//postfix homework
