#include <bits/stdc++.h>
using namespace std;

bool isParanthesisBalanced(string& s) {
    stack<char> st;
    
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);  // Push opening brackets
        } else {
            if (st.empty()) return false;  // No matching opening bracket
            
            char top = st.top();
            if ((top == '(' && ch == ')') || 
                (top == '{' && ch == '}') || 
                (top == '[' && ch == ']')) {
                st.pop();  // Valid matching pair
            } else {
                return false;  // Mismatch found
            }
        }
    }
    
    return st.empty();  // Stack should be empty if balanced
}

int main() {
    string str = "{([)]}";
    cout << (isParanthesisBalanced(str) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
