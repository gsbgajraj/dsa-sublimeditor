#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

bool isBalanced(const std::string &expression) {
    // Define a map with corresponding values for each bracket
    std::unordered_map<char, int> bracketValues = {
        {'(', 1}, {')', -1},
        {'{', 2}, {'}', -2},
        {'[', 3}, {']', -3}
    };
    
    std::stack<char> st;
    int balanceSum = 0; // To track the balance using values from the map

    for (char ch : expression) {
        // If it's an opening bracket, push it onto the stack and update balanceSum
        if (bracketValues[ch] > 0) {
            st.push(ch);
            balanceSum += bracketValues[ch];
        } 
        // If it's a closing bracket
        else if (bracketValues[ch] < 0) {
            // Check if stack is empty or the top of the stack doesn't match
            if (st.empty() || bracketValues[st.top()] + bracketValues[ch] != 0) {
                return false;
            }
            // Pop the matching opening bracket and update balanceSum
            st.pop();
            balanceSum += bracketValues[ch];
        }
    }
    
    // If the stack is empty and balanceSum is zero, the parentheses are balanced
    return st.empty() && balanceSum == 0;
}

int main() {
    std::string expression;

    std::cin >> expression;

    if (isBalanced(expression)) {
        std::cout << "yes.\n";
    } else {
        std::cout << "No.\n";
    }

    return 0;
}
