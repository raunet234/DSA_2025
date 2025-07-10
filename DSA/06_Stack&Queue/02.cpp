#include <iostream>
#include <stack>
using namespace std;

void reverseString(string s) {
    stack<string> st;
    string word = "";

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != ' ') {
            word += s[i];
        } else {
            if(!word.empty()) {
                st.push(word);
                word = "";
            }
        }
    }

    // Push the last word
    if(!word.empty()) {
        st.push(word);
    }

    // Print words from stack
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    string input = "Try programiz.pro";
    reverseString(input);
    return 0;
}



//reverse a stack in GFG

